cmake_minimum_required(VERSION 3.5.1)

project(warcraft)

set(INC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/include)
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)
     
#generate project binary
add_executable(
    ${PROJECT_NAME}
        ${INC_DIR}/Actions.h
        ${INC_DIR}/ArchMageHero.h
        ${INC_DIR}/Arena.h
        ${INC_DIR}/BonusAction.h
        ${INC_DIR}/DeathKnightHero.h
        ${INC_DIR}/Defines.h
        ${INC_DIR}/DrawRangerHero.h
        ${INC_DIR}/Hero.h
        ${INC_DIR}/Messages.h
        ${INC_DIR}/Spell.h

        ${SRC_DIR}/Actions.c
        ${SRC_DIR}/ArchMageHero.c
        ${SRC_DIR}/Arena.c
        ${SRC_DIR}/BonusAction.c
        ${SRC_DIR}/DeathKnightHero.c
        ${SRC_DIR}/DrawRangerHero.c
        ${SRC_DIR}/Hero.c
        ${SRC_DIR}/Messages.c
        ${SRC_DIR}/Spell.c
        ${SRC_DIR}/main.c


)

target_include_directories(
    ${PROJECT_NAME} 
        PRIVATE 
            ${INC_DIR}
)  

