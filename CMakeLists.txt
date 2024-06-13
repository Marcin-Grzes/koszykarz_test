cmake_minimum_required(VERSION 3.28)
project(koszykarz_app)

set(CMAKE_CXX_STANDARD 17)

add_executable(koszykarz_app main.cpp
        koszykarz.cpp)
# Dodaj katalog z testami
add_subdirectory(tests)