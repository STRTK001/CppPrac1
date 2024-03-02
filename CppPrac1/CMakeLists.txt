# CMakeList.txt : CMake project for CppPrac1, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (CppPrac1 "CppPrac1.cpp" "CppPrac1.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CppPrac1 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
