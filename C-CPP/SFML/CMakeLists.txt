# CMake setup configuration
cmake_minimum_required(VERSION 3.26)
project("SFML" VERSION 1.0)

# Options
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Compiler arguments
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -I/usr/local/include -L/usr/local/lib")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-strict-aliasing")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fstack-protector-strong -flto -H -v")

# Libraries Options
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -lsfml-window -lsfml-system -lsfml-graphics")

# Adding Executable
add_executable(Program src/main.cc)

# Linking libraries
target_link_libraries(Program)
