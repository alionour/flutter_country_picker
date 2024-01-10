#ifndef FLUTTER_PLUGIN_FLUTTER_COUNTRY_PICKER_PLUGIN_H_
#define FLUTTER_PLUGIN_FLUTTER_COUNTRY_PICKER_PLUGIN_H_

#include <flutter/method_channel.h>
#include <flutter/plugin_registrar_windows.h>

#include <memory>

namespace flutter_country_picker {

class FlutterCountryPickerPlugin : public flutter::Plugin {
 public:
  static void RegisterWithRegistrar(flutter::PluginRegistrarWindows *registrar);

  FlutterCountryPickerPlugin();

  virtual ~FlutterCountryPickerPlugin();

  // Disallow copy and assign.
  FlutterCountryPickerPlugin(const FlutterCountryPickerPlugin&) = delete;
  FlutterCountryPickerPlugin& operator=(const FlutterCountryPickerPlugin&) = delete;

  // Called when a method is called on this plugin's channel from Dart.
  void HandleMethodCall(
      const flutter::MethodCall<flutter::EncodableValue> &method_call,
      std::unique_ptr<flutter::MethodResult<flutter::EncodableValue>> result);
};

}  // namespace flutter_country_picker

#endif  // FLUTTER_PLUGIN_FLUTTER_COUNTRY_PICKER_PLUGIN_H_
