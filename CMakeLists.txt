cmake_minimum_required(VERSION 3.10)
project(StringUtilities LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

add_library(string_utils_lib src/string_utils.cpp)
target_include_directories(string_utils_lib PUBLIC include)

add_executable(string_utils src/main.cpp)
target_link_libraries(string_utils PRIVATE string_utils_lib)

find_package(GTest REQUIRED)

add_executable(string_utils_test tests/string_utils_test.cpp)
target_link_libraries(string_utils_test 
    string_utils_lib 
    GTest::gtest_main
)

add_executable(asan_test tests/string_utils_test.cpp)
target_link_libraries(asan_test string_utils_lib GTest::gtest_main)
target_compile_options(asan_test PRIVATE -fsanitize=address -fno-omit-frame-pointer)
target_link_options(asan_test PRIVATE -fsanitize=address)

include(GoogleTest)