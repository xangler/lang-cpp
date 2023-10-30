
aux_source_directory(. DIR_SRCS)
add_subdirectory(../3rdparty/RapidFuzz ../3rdparty/RapidFuzz)

add_executable(Demo.out ${DIR_SRCS})
target_link_libraries(Demo.out rapidfuzz::rapidfuzz)