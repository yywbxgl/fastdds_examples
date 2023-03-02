
cmake_minimum_required(VERSION 3.16.3)

project("generated_code")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g")

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)


message(STATUS "Configuring HelloWorld...")

file(GLOB SRC_FILES "*.c"  "*.cpp"   "*.cxx")


add_library(HelloWorld_lib ${SRC_FILES})
target_link_libraries(HelloWorld_lib fastcdr fastrtps)

add_executable(HelloWorld ${SRC_FILES})
target_link_libraries(HelloWorld fastcdr fastrtps)



