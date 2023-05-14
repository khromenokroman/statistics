cmake_minimum_required(VERSION 3.5)

project(statistics)

add_executable(statistics 
    main.cpp
    my_sort.cpp
    my_min_max.cpp
    my_mean.cpp
    my_std.cpp
)
set_target_properties(statistics PROPERTIES
    CXX_STANDARD 20
    CXX_STANDARD_REQUIRED ON
)