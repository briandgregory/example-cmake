cmake_minimum_required(VERSION 3.10)
project(MyProject)


# Create library
add_library(my_library src/my_library.cpp)
target_include_directories(my_library PUBLIC
  $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
  $<INSTALL_INTERFACE:include/mylib>  # <prefix>/include
)

# Create tests
add_subdirectory(tests)

