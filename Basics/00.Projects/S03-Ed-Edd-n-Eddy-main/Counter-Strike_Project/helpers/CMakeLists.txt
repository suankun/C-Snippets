cmake_minimum_required(VERSION 3.5.1)

project(helpers)

set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

add_library(
    ${PROJECT_NAME}
        STATIC
        ${INC_DIR}/Defines.h
        ${INC_DIR}/Messages.h
        ${INC_DIR}/Validations.h
        
        ${SRC_DIR}/Messages.c
        ${SRC_DIR}/Validations.c
 )

 target_include_directories(
     ${PROJECT_NAME} 
         PUBLIC 
            ${INC_DIR}
 )  

add_dependencies(counter_strike ${PROJECT_NAME})