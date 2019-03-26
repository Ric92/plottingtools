cmake_minimum_required( VERSION 3.12 )

project( PlotLib 
         VERSION 0.1 
         DESCRIPTION "Plotting library"
         LANGUAGES C CXX)

set( CMAKE_MODULE_PATH "${CMAKE_CURRENT_SOURCE_DIR}/../cmake/modules/" ${CMAKE_MODULE_PATH} )

if( NOT CMAKE_BUILD_TYPE )
  set( CMAKE_BUILD_TYPE Release CACHE STRING
       "Choose the type of build, options are: None Debug Release RelWithDebInfo MinSizeRel."
       FORCE )
endif()

# Find dependencies
#find_package( OpenCv REQUIRED )
   
# Library
add_library( PlotLib STATIC )

# Sources
target_sources( PlotLib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/src/graph.cpp" )

# Include directories to PlotLib target
target_include_directories( PlotLib PUBLIC "${CMAKE_CURRENT_SOURCE_DIR}/include" )
target_include_directories( PlotLib PUBLIC ${PHYSX_INCLUDE_DIRS} )
target_include_directories( PlotLib PUBLIC ${Freeglut_INCLUDE_DIRS} )

# Link libraries to PlotLib target
#target_link_libraries( PlotLib LINK_PUBLIC ${PHYSX_LIBRARIES} )
#target_link_libraries( PlotLib LINK_PUBLIC ${Freeglut_LIBRARIES} )
#if(UNIX)
#	target_link_libraries( PlotLib LINK_PUBLIC ${OPENGL_LIBRARIES} pthread dl)
#elseif(WIN32)
#	target_link_libraries( PlotLib LINK_PUBLIC ${OPENGL_LIBRARIES} )
#endif()
# List of definitions variables
list( APPEND PLOTLIB_DEFINITIONS "pthread" )

# Compile definitions to target
target_compile_definitions( PlotLib PUBLIC ${PLOTLIB_DEFINITIONS} )