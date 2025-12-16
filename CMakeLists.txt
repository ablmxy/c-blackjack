cmake_minimum_required(VERSION 4.0)
project(blackjack C)

set(CMAKE_C_STANDARD 23)

add_library(functions src/functions.c)

target_include_directories(functions
        PUBLIC
        include
)

add_executable(blackjack src/main.c)
target_link_libraries(blackjack PRIVATE functions)
