cmake_minimum_required(VERSION 3.10)
project(A3Movie)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(include)

# Source files for the main executable
set(SOURCES
    src/movie.cpp
    src/main.cpp
    src/movie_factory.cpp
)

# Add the main executable
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

# Add the test executable with a different name to avoid conflicts
add_executable(A3MovieTests test/test.cpp src/main.cpp)

# Link Catch2 to the test executable, NOT the main executable
target_link_libraries(A3MovieTests PRIVATE Catch2::Catch2)

# Enable testing
enable_testing()

# Automatically register Catch2 tests with CTest
add_test(NAME A3MovieTests COMMAND A3MovieTests)
