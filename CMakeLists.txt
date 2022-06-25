cmake_minimum_required(VERSION 3.0.0)
project(Example VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(LinkedList)
add_executable(Example main.c)
target_link_libraries(Example PUBLIC LinkedList)
target_include_directories(Example PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/LinkedList"
                          )
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
install(TARGETS Example DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h"
  DESTINATION include
  )
