#include "include/flutter_country_picker/flutter_country_picker_plugin_c_api.h"

#include <flutter/plugin_registrar_windows.h>

#include "flutter_country_picker_plugin.h"

void FlutterCountryPickerPluginCApiRegisterWithRegistrar(
    FlutterDesktopPluginRegistrarRef registrar) {
  flutter_country_picker::FlutterCountryPickerPlugin::RegisterWithRegistrar(
      flutter::PluginRegistrarManager::GetInstance()
          ->GetRegistrar<flutter::PluginRegistrarWindows>(registrar));
}
