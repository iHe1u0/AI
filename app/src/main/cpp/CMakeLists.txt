cmake_minimum_required(VERSION 3.22.1)

project("ai")

add_library(ai
        SHARED
        native-lib.cpp)

find_library(log-lib log)

target_link_libraries(
        ai
        ${log-lib}
)