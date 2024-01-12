cmake_minimum_required(VERSION 3.27)
project(cpp_4th_si_sdl_example)


find_package(SDL2 CONFIG REQUIRED)
find_package(SDL2_image CONFIG REQUIRED)
set(CMAKE_CXX_STANDARD 17)


set(SOURCE_FILES main.cpp
        SDLTest.cpp
        SDLTest.h
        Texture.cpp
        Texture.h
)
add_executable(cpp_4th_si_sdl_example ${SOURCE_FILES})
target_link_libraries(cpp_4th_si_sdl_example
        PRIVATE
        $<TARGET_NAME_IF_EXISTS:SDL2::SDL2main>
        $<IF:$<TARGET_EXISTS:SDL2::SDL2>,SDL2::SDL2,SDL2::SDL2-static>
        $<IF:$<TARGET_EXISTS:SDL2_image::SDL2_image>,SDL2_image::SDL2_image,SDL2_image::SDL2_image-static>
)
