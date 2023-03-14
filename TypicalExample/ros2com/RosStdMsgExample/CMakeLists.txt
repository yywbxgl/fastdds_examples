
cmake_minimum_required(VERSION 3.16.3)

project("generated_code")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_EXTENSIONS OFF)

# Find requirements
find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)


message(STATUS "Configuring Time...")
add_library(Time_lib Time.cxx)
target_link_libraries(Time_lib fastcdr fastrtps)

add_executable(Time TimePubSubTypes.cxx TimePublisher.cxx TimeSubscriber.cxx TimePubSubMain.cxx)
target_link_libraries(Time fastcdr fastrtps
        Time_lib )




message(STATUS "Configuring Header...")
add_library(Header_lib Header.cxx)
target_link_libraries(Header_lib fastcdr fastrtps)

add_executable(Header HeaderPubSubTypes.cxx HeaderPublisher.cxx HeaderSubscriber.cxx HeaderPubSubMain.cxx)
target_link_libraries(Header fastcdr fastrtps
        Header_lib Time_lib)



