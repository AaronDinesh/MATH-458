cmake_minimum_required(VERSION 3.22)
project(Chapter1)

set(CMAKE_SKIP_INSTALL_RULES True)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)

# Get all the cpp files in the src directory
file(GLOB SOURCES "src/*.cpp")

# Create an executable for each source file
foreach(SOURCE ${SOURCES})
    # Extract the filename without extension
    get_filename_component(FILENAME ${SOURCE} NAME_WE)
    
    # Add an executable with the same name as the source file
    add_executable(${FILENAME} ${SOURCE})
endforeach()
