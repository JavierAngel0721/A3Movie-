cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 17)
project(A3Movie)

# Include directories
include_directories(include)

# Source files for the main executable (including main.cpp only for the main app)
set(SOURCES
    src/movie.cpp
    src/movie_factory.cpp
    src/main.cpp  # This file should only go in the main executable (not tests)
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

# Link Catch2 to the test executable (don't link it with A3Movie)
target_link_libraries(A3MovieTests Catch2::Catch2)

# Enable testing
enable_testing()
add_test(NAME A3MovieTests COMMAND A3MovieTests)




