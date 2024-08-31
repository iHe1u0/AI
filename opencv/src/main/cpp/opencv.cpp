#include "opencv2/opencv.hpp"

#include <jni.h>

#include <string>

using namespace cv;

extern "C" JNIEXPORT jstring JNICALL Java_cc_ikt_opencv_config_Version_getOpenCvVersion(JNIEnv *env, jobject thiz)
{
  auto version = CVAUX_STR(CV_VERSION);
  return env->NewStringUTF(version);
}