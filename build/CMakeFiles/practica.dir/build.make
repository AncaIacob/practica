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
include CMakeFiles/practica.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/practica.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/practica.dir/flags.make

CMakeFiles/practica.dir/Main.cpp.o: CMakeFiles/practica.dir/flags.make
CMakeFiles/practica.dir/Main.cpp.o: ../Main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/anca/.ssh/practica/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/practica.dir/Main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/practica.dir/Main.cpp.o -c /home/anca/.ssh/practica/Main.cpp

CMakeFiles/practica.dir/Main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/practica.dir/Main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/anca/.ssh/practica/Main.cpp > CMakeFiles/practica.dir/Main.cpp.i

CMakeFiles/practica.dir/Main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/practica.dir/Main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/anca/.ssh/practica/Main.cpp -o CMakeFiles/practica.dir/Main.cpp.s

CMakeFiles/practica.dir/Main.cpp.o.requires:

.PHONY : CMakeFiles/practica.dir/Main.cpp.o.requires

CMakeFiles/practica.dir/Main.cpp.o.provides: CMakeFiles/practica.dir/Main.cpp.o.requires
	$(MAKE) -f CMakeFiles/practica.dir/build.make CMakeFiles/practica.dir/Main.cpp.o.provides.build
.PHONY : CMakeFiles/practica.dir/Main.cpp.o.provides

CMakeFiles/practica.dir/Main.cpp.o.provides.build: CMakeFiles/practica.dir/Main.cpp.o


# Object files for target practica
practica_OBJECTS = \
"CMakeFiles/practica.dir/Main.cpp.o"

# External object files for target practica
practica_EXTERNAL_OBJECTS =

practica: CMakeFiles/practica.dir/Main.cpp.o
practica: CMakeFiles/practica.dir/build.make
practica: CMakeFiles/practica.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/anca/.ssh/practica/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable practica"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/practica.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/practica.dir/build: practica

.PHONY : CMakeFiles/practica.dir/build

CMakeFiles/practica.dir/requires: CMakeFiles/practica.dir/Main.cpp.o.requires

.PHONY : CMakeFiles/practica.dir/requires

CMakeFiles/practica.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/practica.dir/cmake_clean.cmake
.PHONY : CMakeFiles/practica.dir/clean

CMakeFiles/practica.dir/depend:
	cd /home/anca/.ssh/practica/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/anca/.ssh/practica /home/anca/.ssh/practica /home/anca/.ssh/practica/build /home/anca/.ssh/practica/build /home/anca/.ssh/practica/build/CMakeFiles/practica.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/practica.dir/depend

