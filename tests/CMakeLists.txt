cmake_minimum_required(VERSION 3.10)

# Enable testing
enable_testing()

# Find Google Test package
find_package(GTest REQUIRED)

# Create test executable
add_executable(my_library_test my_library_test.cpp)

# Link test executable with the library and Google Test
target_link_libraries(my_library_test my_library GTest::gtest_main)

# Add test
add_test(NAME my_library_test COMMAND my_library_test)

