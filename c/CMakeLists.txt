cmake_minimum_required(VERSION 3.5)
project(c)


include_directories(include)

set(SRC_LIST
    src/strOp.c
    src/sort.c
)



add_executable(c src/c.c ${SRC_LIST})