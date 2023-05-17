cmake_minimum_required(VERSION 3.5.1)

include(${CMAKE_CURRENT_SOURCE_DIR}/cmake_helpers/helpers_c.cmake)

project(root)

add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/StarCraft_Project)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/WarCraft_Project)
add_subdirectory(${CMAKE_CURRENT_SOURCE_DIR}/Counter-Strike_Project)

set_target_c_standard(starcraft 11)
enable_target_c_warnings(starcraft)

set_target_c_standard(warcraft  11)
enable_target_c_warnings(warcraft)

set_target_c_standard(counter_strike  11)
enable_target_c_warnings(counter_strike)