/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_haocai_ffmpegtest_util_VideoPlayer */

#ifndef _Included_com_haocai_ffmpegtest_util_VideoPlayer
#define _Included_com_haocai_ffmpegtest_util_VideoPlayer
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_haocai_ffmpegtest_util_VideoPlayer
 * Method:    decode
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_haocai_ffmpegtest_util_VideoPlayer_decode
  (JNIEnv *, jclass, jstring, jstring);

/*
 * Class:     com_haocai_ffmpegtest_util_VideoPlayer
 * Method:    render
 * Signature: (Ljava/lang/String;Landroid/view/Surface;)V
 */
JNIEXPORT void JNICALL Java_com_haocai_ffmpegtest_util_VideoPlayer_render
  (JNIEnv *, jobject, jstring, jobject);

/*
 * Class:     com_haocai_ffmpegtest_util_VideoPlayer
 * Method:    audioDecode
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_haocai_ffmpegtest_util_VideoPlayer_audioDecode
  (JNIEnv *, jobject, jstring, jstring);

/*
 * Class:     com_haocai_ffmpegtest_util_VideoPlayer
 * Method:    audioPlayer
 * Signature: (Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_haocai_ffmpegtest_util_VideoPlayer_audioPlayer
  (JNIEnv *, jobject, jstring);

#ifdef __cplusplus
}
#endif
#endif