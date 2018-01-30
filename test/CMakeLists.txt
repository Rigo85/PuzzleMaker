cmake_minimum_required(VERSION 3.9)
project(testPuzzle)

set(CMAKE_CXX_STANDARD 17)

find_package(PkgConfig)

pkg_check_modules(OPENCV opencv)

link_directories(${OPENCV_LIBRARY_DIRS})

add_executable(testPuzzle test.cpp)

include_directories(${CMAKE_SOURCE_DIR}/puzzlemaker ${OPENCV_INCLUDE_DIRS})

target_link_libraries(testPuzzle puzzlemaker ${OPENCV_LIBRARIES} stdc++fs)
