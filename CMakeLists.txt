cmake_minimum_required(VERSION 3.0.0)
project(Primes VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(LinkedList)
add_executable(Primes main.c)
target_link_libraries(Primes PUBLIC LinkedList)
target_include_directories(Primes PUBLIC
                          "${PROJECT_BINARY_DIR}"
                          "${PROJECT_SOURCE_DIR}/LinkedList"
                          )
set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
install(TARGETS Primes DESTINATION bin)
install(FILES "${PROJECT_BINARY_DIR}/TutorialConfig.h"
  DESTINATION include
  )
