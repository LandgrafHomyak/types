cmake_minimum_required(VERSION 3.20)
project(types C)

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

add_library(COMiC::types ALIAS __COMiC_types)