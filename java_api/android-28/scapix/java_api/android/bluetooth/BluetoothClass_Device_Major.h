// Generated by Scapix Java API
// https://www.scapix.com

#include <scapix/java_api/java/lang/Object.h>

#ifndef SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE_MAJOR_H
#define SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE_MAJOR_H

namespace scapix::java_api {


namespace android::bluetooth {

class BluetoothClass_Device_Major : public object_base<SCAPIX_META_STRING("android/bluetooth/BluetoothClass$Device$Major"),
	java::lang::Object>
{
public:

	static jint AUDIO_VIDEO_();
	static jint COMPUTER_();
	static jint HEALTH_();
	static jint IMAGING_();
	static jint MISC_();
	static jint NETWORKING_();
	static jint PERIPHERAL_();
	static jint PHONE_();
	static jint TOY_();
	static jint UNCATEGORIZED_();
	static jint WEARABLE_();

	static ref<BluetoothClass_Device_Major> new_object();

protected:

	BluetoothClass_Device_Major(handle_type h) : base_(h) {}

};

} // namespace android::bluetooth
} // namespace scapix::java_api


namespace scapix::java_api {
namespace android::bluetooth {

inline jint BluetoothClass_Device_Major::AUDIO_VIDEO_() { return get_static_field<SCAPIX_META_STRING("AUDIO_VIDEO"), jint>(); }
inline jint BluetoothClass_Device_Major::COMPUTER_() { return get_static_field<SCAPIX_META_STRING("COMPUTER"), jint>(); }
inline jint BluetoothClass_Device_Major::HEALTH_() { return get_static_field<SCAPIX_META_STRING("HEALTH"), jint>(); }
inline jint BluetoothClass_Device_Major::IMAGING_() { return get_static_field<SCAPIX_META_STRING("IMAGING"), jint>(); }
inline jint BluetoothClass_Device_Major::MISC_() { return get_static_field<SCAPIX_META_STRING("MISC"), jint>(); }
inline jint BluetoothClass_Device_Major::NETWORKING_() { return get_static_field<SCAPIX_META_STRING("NETWORKING"), jint>(); }
inline jint BluetoothClass_Device_Major::PERIPHERAL_() { return get_static_field<SCAPIX_META_STRING("PERIPHERAL"), jint>(); }
inline jint BluetoothClass_Device_Major::PHONE_() { return get_static_field<SCAPIX_META_STRING("PHONE"), jint>(); }
inline jint BluetoothClass_Device_Major::TOY_() { return get_static_field<SCAPIX_META_STRING("TOY"), jint>(); }
inline jint BluetoothClass_Device_Major::UNCATEGORIZED_() { return get_static_field<SCAPIX_META_STRING("UNCATEGORIZED"), jint>(); }
inline jint BluetoothClass_Device_Major::WEARABLE_() { return get_static_field<SCAPIX_META_STRING("WEARABLE"), jint>(); }
inline ref<BluetoothClass_Device_Major> BluetoothClass_Device_Major::new_object() { return base_::new_object(); }

} // namespace android::bluetooth
} // namespace scapix::java_api

#endif // SCAPIX_ANDROID_BLUETOOTH_BLUETOOTHCLASS_DEVICE_MAJOR_H
