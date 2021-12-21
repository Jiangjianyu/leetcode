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
add_executable(as4  mid/arr_str/arr_str4.cpp)
add_executable(as5  mid/arr_str/arr_str5.cpp)
add_executable(as6  mid/arr_str/arr_str6.cpp)

add_executable(ll1  mid/linked_list/ll1.cpp)
add_executable(ll2  mid/linked_list/ll2.cpp)



add_executable(ed1  everyday/1518.cpp)
