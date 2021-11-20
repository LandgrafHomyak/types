cmake_minimum_required(VERSION 3.20)
project(types C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 11)

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
        eq.cpp
)

add_dependencies(__COMiC_types __COMiC_test_types)

add_library(COMiC::types ALIAS __COMiC_types)