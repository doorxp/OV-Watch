cmake_minimum_required(VERSION 3.10)
project(lvgl)
set(CMAKE_C_STANDARD 11)#C11
set(CMAKE_CXX_STANDARD 17)#C17
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_definitions(-Wno-int-conversion)

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR})

file(GLOB_RECURSE INCLUDES "lv_drivers/*.h" "lv_demos/*.h"  "lvgl/*.h" "user_test/*.h" "user_test/Screens/Inc/*.h" "user_test/Func/*.h" "./*.h" )
file(GLOB_RECURSE SOURCES  "lv_drivers/*.c" "lv_demos/*.c"  "lvgl/*.c" "user_test/*.c" "user_test/Screens/Src/*.c" "user_test/Func/*.c")

SET(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin)
SET(CMAKE_CXX_FLAGS "-O3")

if(APPLE)
  set(SDL2PATH /usr/local/Cellar/sdl2/2.30.3/)
  if(NOT EXISTS ${SDL2PATH})
    message("not has sdl2 lib please run brew install sdl2")
    execute_process(COMMAND brew install sdl2)
  endif()
  include_directories(${SDL2PATH}/include)
  link_directories(${SDL2PATH}/lib)
else()
  find_package(SDL2 REQUIRED SDL2)
  include_directories(${SDL2_INCLUDE_DIRS})
  file(COPY SDL2.dll DESTINATION ../bin)
endif()

add_executable(main main.c mouse_cursor_icon.c ${SOURCES} ${INCLUDES})

if(WIN32)
  target_link_libraries(main PRIVATE SDL2)
endif()

add_compile_definitions(LV_CONF_INCLUDE_SIMPLE)
target_link_libraries(main PRIVATE SDL2 )
add_custom_target (run COMMAND ${EXECUTABLE_OUTPUT_PATH}/main)
