include_directories(
        ${CMAKE_CURRENT_SOURCE_DIR}
        ${CMAKE_CURRENT_BINARY_DIR}
)

file(GLOB_RECURSE  SRC_LIST  "*.cpp"  ) 

add_executable(${PROJECT_NAME} "main.cpp"  ${SRC_LIST} )

target_link_libraries(${PROJECT_NAME}  
    fastrtps 
    fastcdr 
    Genivi::dlt 
    idl 
    pthread
)


INSTALL(TARGETS ${PROJECT_NAME}   
    RUNTIME DESTINATION bin
)

