cmake_minimum_required(VERSION 3.23)
project(FouthLab)

set(CMAKE_CXX_STANDARD 14)

add_executable(FouthLab main.cpp MainAbstractClass/MainAbstractClass.cpp MainAbstractClass/MainAbstractClass.h MainAbstractClass/Prism/Prism.cpp MainAbstractClass/Prism/Prism.h MainAbstractClass/Tetrahedron/Tetrahedron.cpp MainAbstractClass/Tetrahedron/Tetrahedron.h MainAbstractClass/Tetrahedron/TruncatedTetrahedron/TruncatedTetrahedron.cpp MainAbstractClass/Tetrahedron/TruncatedTetrahedron/TruncatedTetrahedron.h)
