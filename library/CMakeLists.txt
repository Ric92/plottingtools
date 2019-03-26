cmake_minimum_required( VERSION 3.12 )

project( PlotLib 
         VERSION 0.1 
         DESCRIPTION "Plotting library"
         LANGUAGES C CXX)

if( NOT CMAKE_BUILD_TYPE )
  set( CMAKE_BUILD_TYPE Release CACHE STRING
       "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel."
       FORCE )
endif()

# Find dependencies
set (OpenCV_DIR $ENV{OPENCV_DIR})
find_package( OpenCV REQUIRED )
set( OpenCV_FOUND 1)

# Library
add_library( PlotLib STATIC )

# Sources
target_sources( PlotLib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src/plotter.cpp" )

# Include directories to PlotLib target
target_include_directories( PlotLib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" )
target_include_directories( PlotLib PUBLIC ${OpenCV_INCLUDE_DIRS} )

# Link libraries to PlotLib target
target_link_libraries( PlotLib LINK_PUBLIC ${OpenCV_LIBRARIES} )

# List of definitions variables
list( APPEND PLOTLIB_DEFINITIONS "pthread" )

# Compile definitions to target
target_compile_definitions( PlotLib PUBLIC ${PLOTLIB_DEFINITIONS} )