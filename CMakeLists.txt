cmake_minimum_required(VERSION 3.10)
project(StringUtilities LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

include_directories(include)

add_library(string_utils_lib src/string_utils.cpp)
target_include_directories(string_utils_lib PUBLIC include)

add_executable(string_utils_app src/main.cpp)

target_link_libraries(string_utils_app PRIVATE string_utils_lib)