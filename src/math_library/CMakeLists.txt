add_library(math_library
    math_functions.cpp
    math_functions.h
)

# Include directories for header files
target_include_directories(math_library PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})

# Link math_library to string_library
target_link_libraries(math_library string_library)
