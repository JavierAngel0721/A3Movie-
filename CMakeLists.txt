cmake_minimum_required(VERSION 3.10)
project(MatrixCalc)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Source files
set(SOURCES
    src/matrix.cpp
    src/main.cpp
)

# Add the main executable
add_executable(MatrixApp ${SOURCES})

# Add Catch2 using FetchContent
include(FetchContent)

FetchContent_Declare(
    catch2
    GIT_REPOSITORY https://github.com/catchorg/Catch2.git
    GIT_TAG v2.13.10 # Use the desired Catch2 version
)

FetchContent_MakeAvailable(catch2)

# Add the test executable
add_executable(MatrixTests test/test.cpp src/matrix.cpp)

# Link Catch2 to the test executable
target_link_libraries(MatrixTests PRIVATE Catch2::Catch2)

# Enable tests
enable_testing()

# Automatically register Catch2 tests with CTest
add_test(NAME MatrixTests COMMAND MatrixTests)