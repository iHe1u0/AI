#include <jni.h>
#include <string>
#include "opencv2/opencv.hpp"

using namespace cv;

extern "C"
JNIEXPORT jstring JNICALL
Java_cc_imorning_opencv_config_Version_getOpenCvVersion(JNIEnv *env, jobject thiz) {
    auto version = CVAUX_STR(CV_VERSION);
    return env->NewStringUTF(version);
}