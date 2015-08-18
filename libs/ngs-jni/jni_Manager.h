/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class gov_nih_nlm_ncbi_ngs_Manager */

#ifndef _Included_gov_nih_nlm_ncbi_ngs_Manager
#define _Included_gov_nih_nlm_ncbi_ngs_Manager
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     gov_nih_nlm_ncbi_ngs_Manager
 * Method:    Version
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_gov_nih_nlm_ncbi_ngs_Manager_Version
  (JNIEnv *, jclass);

/*
 * Class:     gov_nih_nlm_ncbi_ngs_Manager
 * Method:    Initialize
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_gov_nih_nlm_ncbi_ngs_Manager_Initialize
  (JNIEnv *, jclass);

/*
 * Class:     gov_nih_nlm_ncbi_ngs_Manager
 * Method:    Shutdown
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_gov_nih_nlm_ncbi_ngs_Manager_Shutdown
  (JNIEnv *, jclass);

/*
 * Class:     gov_nih_nlm_ncbi_ngs_Manager
 * Method:    SetAppVersionString
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_gov_nih_nlm_ncbi_ngs_Manager_SetAppVersionString
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gov_nih_nlm_ncbi_ngs_Manager
 * Method:    OpenReadCollection
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_gov_nih_nlm_ncbi_ngs_Manager_OpenReadCollection
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gov_nih_nlm_ncbi_ngs_Manager
 * Method:    OpenReferenceSequence
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_gov_nih_nlm_ncbi_ngs_Manager_OpenReferenceSequence
  (JNIEnv *, jclass, jstring);

/*
 * Class:     gov_nih_nlm_ncbi_ngs_Manager
 * Method:    release
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_gov_nih_nlm_ncbi_ngs_Manager_release
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif
