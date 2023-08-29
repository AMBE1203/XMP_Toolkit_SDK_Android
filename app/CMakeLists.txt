cmake_minimum_required(VERSION 3.4.1)

project(DemoUseNativeFile)

# Tạo danh sách các thư mục chứa tệp .so
set(ARCH_DIRS armeabi-v7a arm64-v8a x86 x86_64)

add_library(xmp_core SHARED IMPORTED)
add_library(xmp_files SHARED IMPORTED)
add_library(c++_shared SHARED IMPORTED)
set_target_properties(xmp_core PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/jniLibs/${ANDROID_ABI}/libxmp_core.so)
set_target_properties(xmp_files PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/jniLibs/${ANDROID_ABI}/libxmp_files.so)
set_target_properties(c++_shared PROPERTIES IMPORTED_LOCATION ${CMAKE_SOURCE_DIR}/jniLibs/${ANDROID_ABI}/libc++_shared.so)

#
#target_link_libraries(
#        xmp_core
#        xmp_files
#        c++_shared
#        log
#        )
