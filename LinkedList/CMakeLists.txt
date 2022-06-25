cmake_minimum_required(VERSION 3.10.0)
project(LinkedList VERSION 0.1.0)

include(CTest)
enable_testing()

add_library(LinkedList main.c LinkedList.h)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)

install(TARGETS LinkedList DESTINATION lib)
install(FILES LinkedList.h DESTINATION include)
