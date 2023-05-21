cmake_minimum_required(VERSION 3.5.1)

project(counter_strike)

set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

#generate project binary
add_executable(
    ${PROJECT_NAME}
        ${INC_DIR}/Action.h
        ${INC_DIR}/BattleField.h
        ${INC_DIR}/Player.h
        ${INC_DIR}/PlayerVitalData.h
        ${INC_DIR}/Pistol.h
        
        ${SRC_DIR}/main.c
        ${SRC_DIR}/BattleField.c
        ${SRC_DIR}/Action.c
        ${SRC_DIR}/Pistol.c
        ${SRC_DIR}/Player.c
        ${SRC_DIR}/PlayerVitalData.c
)
        

target_include_directories(
    ${PROJECT_NAME} 
        PRIVATE 
            ${INC_DIR}
)  

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/helpers)
target_link_libraries(${PROJECT_NAME} PRIVATE helpers)

