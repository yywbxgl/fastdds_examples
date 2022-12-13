
cmake_minimum_required(VERSION 2.8.12)

project("generated_code")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)


message(STATUS "Configuring hello...")
add_library(hello_lib hello.cxx)
target_link_libraries(hello_lib fastcdr fastrtps)

add_executable(hello helloPubSubTypes.cxx helloPublisher.cxx helloSubscriber.cxx helloPubSubMain.cxx)
target_link_libraries(hello fastcdr fastrtps
        hello_lib )



