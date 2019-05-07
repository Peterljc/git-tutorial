project(git_tutorial)
cmake_minimum_required(VERSION 3.4 FATAL_ERROR)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/../bin)

include_directories(include)
include_directories(lib)

file(GLOB SOURCES "src/Hello.c")

add_executable(foo ${SOURCES})

file(GLOB ESPL_LIB_SRCS "lib/espl*")
add_library(ESPL_LIB ${ESPL_LIB_SRCS})
target_link_libraries(foo ESPL_LIB)

file(GLOB SECOND "src/m*.c")

add_executable(state_machine ${SECOND})

file(GLOB STATES_LIB_SRCS "lib/*")
add_library(STATES_LIB STATIC ${STATES_LIB_SRCS})
target_link_libraries(state_machine STATES_LIB)

if(UNIX AND NOT APPLE)
    target_link_libraries(state_machine rt)
endif()

