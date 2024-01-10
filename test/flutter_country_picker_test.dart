import 'package:flutter/services.dart';
import 'package:flutter_test/flutter_test.dart';

void main() {
  const MethodChannel channel = MethodChannel('flutter_country_picker_plus');

  late TestDefaultBinaryMessengerBinding binding;

  TestWidgetsFlutterBinding.ensureInitialized();

  setUp(() {
    binding = TestDefaultBinaryMessengerBinding.instance;

    binding.defaultBinaryMessenger.setMockMethodCallHandler(channel,
        (MethodCall methodCall) async {
      return '42';
    });
  });

  tearDown(() {
    binding.defaultBinaryMessenger.setMockMethodCallHandler(channel, null);
  });
}
