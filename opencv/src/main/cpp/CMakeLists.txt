cmake_minimum_required(VERSION 3.22.1)

project("opencv")

set(OPENCV_DYNAMIC_LIBS "${CMAKE_CURRENT_SOURCE_DIR}/../jniLibs/${ANDROID_ABI}")
add_library(opencv_shared SHARED IMPORTED)
set_target_properties(opencv_shared PROPERTIES IMPORTED_LOCATION "${OPENCV_DYNAMIC_LIBS}/libopencv_java4.so")

find_library(log-lib log)

include_directories(include)

add_library(opencv SHARED
        opencv.cpp)

target_link_libraries(opencv
        opencv_shared
        ${log-lib})