# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/anca/.ssh/practica

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/anca/.ssh/practica/build

# Utility rule file for generate_coverage.

# Include the progress variables for this target.
include CMakeFiles/generate_coverage.dir/progress.make

CMakeFiles/generate_coverage:
	cd /home/anca/.ssh/practica/build && llvm-profdata-10 merge -sparse default.profraw -o default.profdata && llvm-cov-10 report ./vector_test_target -instr-profile=default.profdata

generate_coverage: CMakeFiles/generate_coverage
generate_coverage: CMakeFiles/generate_coverage.dir/build.make

.PHONY : generate_coverage

# Rule to build all files generated by this target.
CMakeFiles/generate_coverage.dir/build: generate_coverage

.PHONY : CMakeFiles/generate_coverage.dir/build

CMakeFiles/generate_coverage.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/generate_coverage.dir/cmake_clean.cmake
.PHONY : CMakeFiles/generate_coverage.dir/clean

CMakeFiles/generate_coverage.dir/depend:
	cd /home/anca/.ssh/practica/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anca/.ssh/practica /home/anca/.ssh/practica /home/anca/.ssh/practica/build /home/anca/.ssh/practica/build /home/anca/.ssh/practica/build/CMakeFiles/generate_coverage.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/generate_coverage.dir/depend

