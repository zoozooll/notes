/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_aaron_mydeamon_Watcher */

#ifndef _Included_com_aaron_mydeamon_Watcher
#define _Included_com_aaron_mydeamon_Watcher
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_aaron_mydeamon_Watcher
 * Method:    createWatcher
 * Signature: (Ljava/lang/String;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_aaron_mydeamon_Watcher_createWatcher
  (JNIEnv *, jobject, jstring);

/*
 * Class:     com_aaron_mydeamon_Watcher
 * Method:    connectToMonitor
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_aaron_mydeamon_Watcher_connectToMonitor
  (JNIEnv *, jobject);

/*
 * Class:     com_aaron_mydeamon_Watcher
 * Method:    sendMsgToMonitor
 * Signature: (Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_com_aaron_mydeamon_Watcher_sendMsgToMonitor
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif
