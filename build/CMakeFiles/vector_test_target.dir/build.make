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

# Include any dependencies generated for this target.
include CMakeFiles/vector_test_target.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/vector_test_target.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/vector_test_target.dir/flags.make

CMakeFiles/vector_test_target.dir/VectorTest.cpp.o: CMakeFiles/vector_test_target.dir/flags.make
CMakeFiles/vector_test_target.dir/VectorTest.cpp.o: ../VectorTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anca/.ssh/practica/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/vector_test_target.dir/VectorTest.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/vector_test_target.dir/VectorTest.cpp.o -c /home/anca/.ssh/practica/VectorTest.cpp

CMakeFiles/vector_test_target.dir/VectorTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/vector_test_target.dir/VectorTest.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anca/.ssh/practica/VectorTest.cpp > CMakeFiles/vector_test_target.dir/VectorTest.cpp.i

CMakeFiles/vector_test_target.dir/VectorTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/vector_test_target.dir/VectorTest.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anca/.ssh/practica/VectorTest.cpp -o CMakeFiles/vector_test_target.dir/VectorTest.cpp.s

CMakeFiles/vector_test_target.dir/VectorTest.cpp.o.requires:

.PHONY : CMakeFiles/vector_test_target.dir/VectorTest.cpp.o.requires

CMakeFiles/vector_test_target.dir/VectorTest.cpp.o.provides: CMakeFiles/vector_test_target.dir/VectorTest.cpp.o.requires
	$(MAKE) -f CMakeFiles/vector_test_target.dir/build.make CMakeFiles/vector_test_target.dir/VectorTest.cpp.o.provides.build
.PHONY : CMakeFiles/vector_test_target.dir/VectorTest.cpp.o.provides

CMakeFiles/vector_test_target.dir/VectorTest.cpp.o.provides.build: CMakeFiles/vector_test_target.dir/VectorTest.cpp.o


# Object files for target vector_test_target
vector_test_target_OBJECTS = \
"CMakeFiles/vector_test_target.dir/VectorTest.cpp.o"

# External object files for target vector_test_target
vector_test_target_EXTERNAL_OBJECTS =

vector_test_target: CMakeFiles/vector_test_target.dir/VectorTest.cpp.o
vector_test_target: CMakeFiles/vector_test_target.dir/build.make
vector_test_target: CMakeFiles/vector_test_target.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anca/.ssh/practica/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable vector_test_target"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/vector_test_target.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/vector_test_target.dir/build: vector_test_target

.PHONY : CMakeFiles/vector_test_target.dir/build

CMakeFiles/vector_test_target.dir/requires: CMakeFiles/vector_test_target.dir/VectorTest.cpp.o.requires

.PHONY : CMakeFiles/vector_test_target.dir/requires

CMakeFiles/vector_test_target.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/vector_test_target.dir/cmake_clean.cmake
.PHONY : CMakeFiles/vector_test_target.dir/clean

CMakeFiles/vector_test_target.dir/depend:
	cd /home/anca/.ssh/practica/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anca/.ssh/practica /home/anca/.ssh/practica /home/anca/.ssh/practica/build /home/anca/.ssh/practica/build /home/anca/.ssh/practica/build/CMakeFiles/vector_test_target.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/vector_test_target.dir/depend

