cmake_minimum_required(VERSION 3.12)
project(my_project)

# Add the main executable
add_executable(main src/main.cpp)

# Link the libraries to the main executable
target_link_libraries(main math_library)
