cmake_minimum_required(VERSION 3.10)
project(roman-converter)

include_directories($ENV{GMOCK_HOME}/include $ENV{GMOCK_HOME}/gtest/include)
link_directories($ENV{GMOCK_HOME}/mybuild $ENV{GMOCK_HOME}/gtest/mybuild)
#add_definitions(-std=c++0x)
set(CMAKE_CXX_FLAGS "${CMAXE_CXX_FLAGS} -Wall")

set(testSources 
   mainTest.cpp 
   RomanConverterTest.cpp )
add_executable(test ${testSources})
set(sources 
   main.cpp)
add_executable(roman-converter ${sources})
target_link_libraries(test pthread)
target_link_libraries(test gmock)
target_link_libraries(test gtest)