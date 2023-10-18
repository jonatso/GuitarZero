# Define minimal required version of CMake.
cmake_minimum_required(VERSION "3.25")


include(toolchain.cmake)

# Project definition
project(
	GuitarZeroMCU
	VERSION 1.0
	LANGUAGES C CXX ASM
)


# Include the definition of the slc_GuitarZeroMCU target,
# which contains the content of the SLC project
include(GuitarZeroMCU.cmake)

add_executable(GuitarZeroMCU
    # Add additional sources here
)

target_include_directories(GuitarZeroMCU PUBLIC
    # Add additional include paths here
)

target_compile_definitions(GuitarZeroMCU PUBLIC
    # Add additional macros here
)

target_compile_options(GuitarZeroMCU PUBLIC
    # Set additional compiler flags here
)

target_link_options(GuitarZeroMCU PUBLIC
    # Set additional linker flags here
)

# Link with the content defined in the SLC project
target_link_libraries(GuitarZeroMCU PRIVATE
    slc_GuitarZeroMCU
)

AUX_SOURCE_DIRECTORY(dir "../src")

# Include managed project content if available
include(GuitarZeroMCU_project.cmake OPTIONAL RESULT_VARIABLE managed_project)
if(managed_project)
    message(STATUS "Using managed project content from ${managed_project}")
endif()

# Create .bin, .hex and .s37 artifacts after building the project
add_custom_command(TARGET GuitarZeroMCU
    POST_BUILD
    COMMAND ${CMAKE_OBJCOPY} -O srec "$<TARGET_FILE:GuitarZeroMCU>" "$<TARGET_FILE_DIR:GuitarZeroMCU>/$<TARGET_FILE_BASE_NAME:GuitarZeroMCU>.s37"
    COMMAND ${CMAKE_OBJCOPY} -O ihex "$<TARGET_FILE:GuitarZeroMCU>" "$<TARGET_FILE_DIR:GuitarZeroMCU>/$<TARGET_FILE_BASE_NAME:GuitarZeroMCU>.hex"
    COMMAND ${CMAKE_OBJCOPY} -O binary "$<TARGET_FILE:GuitarZeroMCU>" "$<TARGET_FILE_DIR:GuitarZeroMCU>/$<TARGET_FILE_BASE_NAME:GuitarZeroMCU>.bin" 
)


