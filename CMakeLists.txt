cmake_minimum_required(VERSION 2.8)
project(cpptest)
#find_package(OpenCV REQUIRED)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_STANDARD 11)



include_directories(
        /usr/include
)



add_executable(as1  mid/arr_str/arr_str1.cpp)
add_executable(as2  mid/arr_str/arr_str2.cpp)
add_executable(as3  mid/arr_str/arr_str3.cpp)
