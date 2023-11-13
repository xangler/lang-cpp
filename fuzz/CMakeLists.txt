cmake_minimum_required (VERSION 3.12...3.24)

set(CMAKE_INTERPROCEDURAL_OPTIMIZATION TRUE)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)
set(SKBUILD_LINK_LIBRARIES_KEYWORD PRIVATE)
set(THREADS_PREFER_PTHREAD_FLAG ON)

project (Fuzz)

add_compile_options(-O3 -DNDEBUG -Wall -Wextra -pedantic -Wno-psabi -Wno-overlength-strings -mavx2)

add_subdirectory(cmd)
