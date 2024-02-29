add_executable(Demo.out main.cpp)
target_link_libraries(Demo.out Sort demo_compiler_flags)
target_include_directories(Demo.out PRIVATE ${PROJECT_SOURCE_DIR})
