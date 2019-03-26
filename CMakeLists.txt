cmake_minimum_required( VERSION 3.12 )

project( plottingtools
         VERSION 0.1
         DESCRIPTION "Tools for plotting data" )

 # Always use '-fPIC'/'-fPIE' option.
set( CMAKE_POSITION_INDEPENDENT_CODE ON )

# C++14
set(CMAKE_CXX_STANDARD 14)

# Create targets for building the (local) libraries.
add_subdirectory( library )

# Create the targets for the entire app.
add_subdirectory( app )