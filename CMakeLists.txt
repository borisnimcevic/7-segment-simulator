cmake_minimum_required(VERSION 3.19.0)
project(7-segment-simulator VERSION 0.0.1)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_BINARY_DIR}/bin)
set(CMAKE_EXPORT_COMPILE_COMMANDS TRUE)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Debug
    CACHE STRING "Choose the type of build (Debug or Release)" FORCE)
endif()

find_package(SFML 2.5
  COMPONENTS
    system window graphics network audio REQUIRED)

# Compile executable
add_executable(${PROJECT_NAME} main.cpp)
add_subdirectory(components/SingleLed)

target_link_libraries(${PROJECT_NAME} 
  sfml-graphics
  sub::singleledlib 
)

install(TARGETS ${PROJECT_NAME} DESTINATION bin)
