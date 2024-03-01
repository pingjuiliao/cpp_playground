cmake_minimum_required(VERSION 3.8)

project(CompileDemo)
add_executable(Main main.c)

set(LIB_DIR ${PROJECT_SOURCE_DIR}/lib)

target_include_directories(Main
  PRIVATE ${LIB_DIR})

add_subdirectory(${LIB_DIR})
target_link_libraries(Main
  PRIVATE Hello)
