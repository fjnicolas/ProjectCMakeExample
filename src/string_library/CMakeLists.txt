add_library(string_library
    string_functions.cpp
    string_functions.h
)

# Include directories for header files
target_include_directories(string_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
