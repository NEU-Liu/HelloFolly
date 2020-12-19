cmake_minimum_required(VERSION 3.10)
project(HelloFolly)

set(CMAKE_CXX_STANDARD 14)
include_directories(Include)

file(GLOB Folly Include/*)
link_directories(Lib)

link_libraries(folly)
link_libraries(folly_test_util)
link_libraries(gtest)
link_libraries(follybenchmark)
link_libraries(glog)
link_libraries(pthread m)
link_libraries(ssl crypto)
link_libraries(gflags)

add_executable(HelloFolly main.cpp ${Folly})
