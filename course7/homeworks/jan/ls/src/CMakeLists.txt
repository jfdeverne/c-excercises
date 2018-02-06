cmake_minimum_required(VERSION 3.8)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -std=c++14")

find_package(Boost COMPONENTS filesystem REQUIRED)
add_executable(my_ls my_ls.cc)

target_link_libraries(my_ls ${Boost_LIBRARIES})

