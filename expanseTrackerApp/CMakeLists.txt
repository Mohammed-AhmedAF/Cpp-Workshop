cmake_minimum_required(VERSION 3.22.0)

project(expanseTracker VERSION 1.0.0 LANGUAGES CXX)

add_executable(expanseTracker expanseTracker.cpp)
target_include_directories(expanseTracker PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

include(FetchContent)
FetchContent_Declare(
    fmt
    GIT_REPOSITORY https://github.com/fmtlib/fmt.git
    GIT_TAG 11.1.4
)

FetchContent_MakeAvailable(fmt)
target_link_libraries(expanseTracker PUBLIC fmt)