cmake_minimum_required(VERSION 3.16.3)
project("acc_visual" VERSION "2.0.0" LANGUAGES C CXX)

find_package(fastcdr REQUIRED)
find_package(fastrtps REQUIRED)
find_package(automotive-dlt REQUIRED)
find_package(idl REQUIRED)


set(CMAKE_CXX_STANDARD 14)
SET(CMAKE_BUILD_TYPE "Debug")
SET(CMAKE_CXX_FLAGS_DEBUG "$ENV{CXXFLAGS} -O0 -Wall -g2 -ggdb") 
SET(CMAKE_CXX_FLAGS_RELEASE "$ENV{CXXFLAGS} -O3 -Wall")



# pack debg
set(CPACK_GENERATOR DEB)
set(CPACK_PACKAGE_VERSION ${PROJECT_VERSION})
set(CPACK_DEBIAN_PACKAGE_NAME ${PROJECT_NAME})
set(CPACK_DEBIAN_PACKAGE_ARCHITECTURE amd64)
set(CPACK_PACKAGE_DESCRIPTION_SUMMARY "sun test")
set(CPACK_PACKAGE_CONTACT "<ql.sun@joyson.cn>")
set(CPACK_PACKAGE_FILE_NAME ${CPACK_DEBIAN_PACKAGE_NAME}_${CPACK_PACKAGE_VERSION}-1_${CPACK_DEBIAN_PACKAGE_ARCHITECTURE})
include(CPack)

# src
add_subdirectory(src)
# add_subdirectory(test)
