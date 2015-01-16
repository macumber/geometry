cmake_minimum_required(VERSION 2.8.11)

set(SRCS 
  Point2d.cpp
  Point3d.cpp
)
		 
set(HDRS 
  Point2d.hpp
  Point3d.hpp
)

if(MSVC)
  # treat warnings as errors
  add_definitions(/WX)
endif()

add_library(openstudio_geometry SHARED ${HDRS} ${SRCS})
add_dependencies(openstudio_geometry jsoncpp boost-geometry)
