cmake_minimum_required(VERSION 3.22)
project(OrderBatching C)

set(CMAKE_C_STANDARD 90)

add_executable(main
        main.c
        functools.c
        functools.h
        random.c
        random.h
        orderlist.c
        orderlist.h
        )
