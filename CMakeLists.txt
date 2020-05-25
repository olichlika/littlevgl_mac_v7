cmake_minimum_required(VERSION 3.10)
project(Ui C)

set(CMAKE_C_COMPILER "gcc")

set(CMAKE_C_FLAGS "-std=c99")


include_directories(/usr/local/include)

link_directories(/usr/local/lib/)

file(GLOB_RECURSE INCLUDES "lv_drivers/*.h" "lv_examples/*.h"  "lvgl/*.h"  "./*.h")
file(GLOB_RECURSE SOURCES  "lv_drivers/*.c" "lv_examples/*.c"  "lvgl/*.c")

include_directories(.)
include_directories(lv_drivers/display)
include_directories(lv_drivers/indev)

add_executable(Ui ${SOURCES} ${INCLUDES} main.c)

TARGET_LINK_LIBRARIES(Ui SDL2 SDL2main)