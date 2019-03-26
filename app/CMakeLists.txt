cmake_minimum_required( VERSION 3.12 )

project( ExampleApp 
         VERSION 0.1 
         DESCRIPTION "Example application to plot"
         LANGUAGES C CXX)

# Executable
add_executable( ExampleApp )

# Compiler flags to VS
if(WIN32)
	set(CMAKE_CXX_FLAGS_RELEASE "/MT")
	set(CMAKE_CXX_FLAGS_DEBUG "/MTd")
endif()

# Add sources to ExampleApp target		
target_sources( ExampleApp PRIVATE src/main.cpp )

# Link PlotLib library
target_link_libraries( ExampleApp PUBLIC PlotLib ) 

# List of definitions variables
list( APPEND EXAMPLEAPP_DEFINITIONS "" )

# Compile definitions to target
target_compile_definitions( ExampleApp PUBLIC ${EXAMPLEAPP_DEFINITIONS} )