cmake_minimum_required(VERSION 3.0)
project(COMiC_types C)

set(CMAKE_C_STANDARD 99)

add_library(
        __COMiC_types
        INTERFACE
)
target_include_directories(__COMiC_types INTERFACE include)
if (${COMiC_LIMITED})
    target_include_directories(__COMiC_types INTERFACE limited)
else ()
    target_include_directories(__COMiC_types INTERFACE fast)
endif ()

add_executable(
        __COMiC_test_types
        test/test.h
        test/limited.c
        test/fast.c
        test/main.c)

add_dependencies(__COMiC_types __COMiC_test_types)

install(
        TARGETS __COMiC_types
        PUBLIC_HEADER DESTINATION ./include
)

add_library(COMiC::types ALIAS __COMiC_types)