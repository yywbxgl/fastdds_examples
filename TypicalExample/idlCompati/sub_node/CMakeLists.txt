
cmake_minimum_required(VERSION 3.16.3)

project("generated_code2")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)


message(STATUS "Configuring ChassisCommand...")
add_library(ChassisCommand_lib ChassisCommand.cxx)
target_link_libraries(ChassisCommand_lib fastcdr fastrtps)

add_executable(ChassisCommand ChassisCommandPubSubTypes.cxx ChassisCommandPublisher.cxx ChassisCommandSubscriber.cxx ChassisCommandPubSubMain.cxx)
target_link_libraries(ChassisCommand fastcdr fastrtps
        ChassisCommand_lib )



