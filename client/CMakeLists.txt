include_directories(../utils/src /home/joe/projects/boost_1_48_0)
file(GLOB SOURCES src/*.cpp)

add_library(client ${SOURCES})
