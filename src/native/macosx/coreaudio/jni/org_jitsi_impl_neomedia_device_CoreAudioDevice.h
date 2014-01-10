/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jitsi_impl_neomedia_device_CoreAudioDevice */

#ifndef _Included_org_jitsi_impl_neomedia_device_CoreAudioDevice
#define _Included_org_jitsi_impl_neomedia_device_CoreAudioDevice
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jitsi_impl_neomedia_device_CoreAudioDevice
 * Method:    freeDevices
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jitsi_impl_neomedia_device_CoreAudioDevice_freeDevices
  (JNIEnv *, jclass);

/*
 * Class:     org_jitsi_impl_neomedia_device_CoreAudioDevice
 * Method:    getDeviceModelIdentifierBytes
 * Signature: (Ljava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_jitsi_impl_neomedia_device_CoreAudioDevice_getDeviceModelIdentifierBytes
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_jitsi_impl_neomedia_device_CoreAudioDevice
 * Method:    getDeviceNameBytes
 * Signature: (Ljava/lang/String;)[B
 */
JNIEXPORT jbyteArray JNICALL Java_org_jitsi_impl_neomedia_device_CoreAudioDevice_getDeviceNameBytes
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_jitsi_impl_neomedia_device_CoreAudioDevice
 * Method:    getInputDeviceVolume
 * Signature: (Ljava/lang/String;)F
 */
JNIEXPORT jfloat JNICALL Java_org_jitsi_impl_neomedia_device_CoreAudioDevice_getInputDeviceVolume
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_jitsi_impl_neomedia_device_CoreAudioDevice
 * Method:    getOutputDeviceVolume
 * Signature: (Ljava/lang/String;)F
 */
JNIEXPORT jfloat JNICALL Java_org_jitsi_impl_neomedia_device_CoreAudioDevice_getOutputDeviceVolume
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_jitsi_impl_neomedia_device_CoreAudioDevice
 * Method:    initDevices
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jitsi_impl_neomedia_device_CoreAudioDevice_initDevices
  (JNIEnv *, jclass);

/*
 * Class:     org_jitsi_impl_neomedia_device_CoreAudioDevice
 * Method:    setInputDeviceVolume
 * Signature: (Ljava/lang/String;F)I
 */
JNIEXPORT jint JNICALL Java_org_jitsi_impl_neomedia_device_CoreAudioDevice_setInputDeviceVolume
  (JNIEnv *, jclass, jstring, jfloat);

/*
 * Class:     org_jitsi_impl_neomedia_device_CoreAudioDevice
 * Method:    setOutputDeviceVolume
 * Signature: (Ljava/lang/String;F)I
 */
JNIEXPORT jint JNICALL Java_org_jitsi_impl_neomedia_device_CoreAudioDevice_setOutputDeviceVolume
  (JNIEnv *, jclass, jstring, jfloat);

#ifdef __cplusplus
}
#endif
#endif