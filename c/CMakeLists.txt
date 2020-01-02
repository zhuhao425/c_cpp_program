cmake_minimum_required(VERSION 3.5)
project(c)


include_directories(include)



add_library(sort lib/sort.c)
add_library(strOp lib/strOp.c)





add_executable(c c.c)
TARGET_LINK_LIBRARIES(c sort strOp)