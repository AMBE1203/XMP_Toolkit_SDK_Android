#include <jni.h>

//
// Created by cuongdt on 8/28/23.
//

// NativeWrapper.cpp
//#include "NativeWrapper.h"
#include <string> // Đảm bảo bạn đã bao gồm thư viện string
#define ANDROID_ENV

#define TXMP_STRING_TYPE std::string
// Must be defined to give access to XMPFiles
#define XMP_INCLUDE_XMPFILES 1



#include "../include/XMP.hpp"


//extern "C"
//JNIEXPORT jboolean JNICALL
//Java_com_example_demousenativefile_MainActivity_initialize(JNIEnv *env, jobject thiz) {
////    SXMPMeta::Initialize();
//    return static_cast<jboolean>(true);
//}
extern "C"
JNIEXPORT jboolean JNICALL
Java_com_example_demousenativefile_MainActivity_initialize(JNIEnv *env, jobject /* this */) {
//    SXMPMeta::Initialize();
    return JNI_TRUE;
}