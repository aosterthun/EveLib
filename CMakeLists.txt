include_directories(${CMAKE_CURRENT_SOURCE_DIR}/header)
add_library(EveLib     ${CMAKE_CURRENT_SOURCE_DIR}/src/Gene.cpp)

add_executable(genetests tests.cpp)

target_link_libraries(genetests gtest)