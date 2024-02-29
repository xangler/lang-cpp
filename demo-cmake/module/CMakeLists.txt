add_library(Sort STATIC sort.cpp)
target_include_directories(Sort PRIVATE ${PROJECT_SOURCE_DIR})
target_link_libraries(Sort PRIVATE demo_compiler_flags)
