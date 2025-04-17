cmake_minimum_required(VERSION 3.22.0)

project(firstJson VERSION 1.0.0 LANGUAGES CXX)

include(FetchContent)

FetchContent_Declare(json URL https://github.com/nlohmann/json/releases/download/v3.12.0/json.tar.xz)
FetchContent_MakeAvailable(json)

add_executable(json_parser main.cpp)
add_executable(array_example array_example.cpp)

target_link_libraries(json_parser PRIVATE nlohmann_json::nlohmann_json)
target_link_libraries(array_example PRIVATE nlohmann_json::nlohmann_json)
install(TARGETS json_parser RUNTIME DESTINATION ${CMAKE_SOURCE_DIR}/bin)

