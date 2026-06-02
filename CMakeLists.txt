cmake_minimum_required(VERSION 3.10)
project(StringUtilities LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

enable_testing()

add_library(string_utils_lib src/string_utils.cpp)
target_include_directories(string_utils_lib PUBLIC include)

add_executable(string_utils_app src/main.cpp)
target_link_libraries(string_utils_app PRIVATE string_utils_lib)

add_subdirectory(third_party/googletest)

add_executable(string_utils_test tests/string_utils_test.cpp)
target_link_libraries(string_utils_test 
    string_utils_lib 
    GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(string_utils_test)