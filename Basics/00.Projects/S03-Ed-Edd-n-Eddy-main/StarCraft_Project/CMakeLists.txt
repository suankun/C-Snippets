cmake_minimum_required(VERSION 3.5.1)

project(starcraft)

set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
     
#generate project binary
add_executable(
    ${PROJECT_NAME}
        ${INC_DIR}/Defines.h
        ${INC_DIR}/Vector.h
        ${INC_DIR}/BattleField.h
        ${INC_DIR}/PrintInfo.h
        ${INC_DIR}/ProtossActions.h
        ${INC_DIR}/Ships.h
        ${INC_DIR}/TerranActions.h
        
        ${SRC_DIR}/main.c
        ${SRC_DIR}/Vector.c
        ${SRC_DIR}/BattleField.c
        ${SRC_DIR}/PrintInfo.c
        ${SRC_DIR}/ProtossActions.c
        ${SRC_DIR}/Ships.c
        ${SRC_DIR}/TerranActions.c
)

target_include_directories(
    ${PROJECT_NAME} 
        PRIVATE 
            ${INC_DIR}
)  
