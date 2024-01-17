add_subdirectory(../module ../module)
add_executable(Demo.out main.cpp)
target_link_libraries(Demo.out PUBLIC Sort demo_compiler_flags)
target_include_directories(Demo.out PUBLIC "${PROJECT_SOURCE_DIR}")
