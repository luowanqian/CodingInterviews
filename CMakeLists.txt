cmake_minimum_required(VERSION 3.9)
project(CodingInterviews)

set(CMAKE_CXX_STANDARD 11)

include_directories(Utilities)

set(PROBLEM_SOURCES 04/solution1.cpp)
#set(UTILITIES_SOURCE)
#add_executable(CodingInterviews ${UTILITIES_SOURCE} ${PROBLEM_SOURCES})
add_executable(CodingInterviews ${PROBLEM_SOURCES})
