#cmake版本要求
cmake_minimum_required(VERSION 3.5)

#项目名
project(c)

#头文件目录
include_directories(include)

#可执行文件需要的源文件
set(SRC_LIST
    src/strOp.c
    src/sort.c
)

#添加目录下所有的源文件
#aux_source_directory(src SRC_LIST)
#add_executable(c ${SRC_LIST})

#添加可执行文件
add_executable(c src/c.c ${SRC_LIST})