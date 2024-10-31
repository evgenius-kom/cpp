cmake_minimum_required(VERSION 3.16 FATAL_ERROR)

project(cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

get_filename_component(PROJECT_DIR . ABSOLUTE)
get_filename_component(SOURCES_DIR ${PROJECT_DIR}/src ABSOLUTE)
get_filename_component(INCLUDE_DIR ${PROJECT_DIR}/include ABSOLUTE)

set(PATHS_TO_CHECK ${SOURCES_DIR} ${INCLUDE_DIR})
foreach(PATH ${PATHS_TO_CHECK})
    if(NOT EXISTS ${PATH})
        message(FATAL_ERROR "Required path does not exist: ${PATH}")
    endif()
endforeach()

file(GLOB SOURCES CONFIGURE_DEPENDS "*.cpp" "src/*.cpp")
add_executable(${PROJECT_NAME} ${SOURCES})

# target_compile_options(${PROJECT_NAME} PRIVATE)

target_include_directories(${PROJECT_NAME}
    PUBLIC
        ${INCLUDE_DIR}
)
