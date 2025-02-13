cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 20)  # Change to C++20 to use <format>
set(CMAKE_CXX_STANDARD_REQUIRED ON)
project(A3Movie)

# Include directories
include_directories(include)

# Source files for the main executable
set(SOURCES
    src/movie.cpp
    src/movie_factory.cpp
    src/main.cpp 
)

# Add the main executable (A3Movie)
add_executable(A3Movie ${SOURCES})

# Add Catch2 using FetchContent
include(FetchContent)

FetchContent_Declare(
    catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v2.13.10
)

FetchContent_MakeAvailable(catch2)

# Include Catch2's directory for the test executable
include_directories(${catch2_SOURCE_DIR}/single_include)

# Add the test executable (A3MovieTests)
add_executable(A3MovieTests test/test.cpp src/movie.cpp src/movie_factory.cpp)

# Specify include directories for the test executable
target_include_directories(A3MovieTests PRIVATE ${CMAKE_SOURCE_DIR}/include)

# Link Catch2 to the test executable (don't link it with A3Movie)
target_link_libraries(A3MovieTests PRIVATE Catch2::Catch2)

# Enable testing
enable_testing()
add_test(NAME A3MovieTests COMMAND A3MovieTests)
