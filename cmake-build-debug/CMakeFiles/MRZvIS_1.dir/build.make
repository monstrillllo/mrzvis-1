# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /snap/clion/112/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /snap/clion/112/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/liza/CLionProjects/MRZvIS_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/liza/CLionProjects/MRZvIS_1/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/MRZvIS_1.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/MRZvIS_1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/MRZvIS_1.dir/flags.make

CMakeFiles/MRZvIS_1.dir/main.cpp.o: CMakeFiles/MRZvIS_1.dir/flags.make
CMakeFiles/MRZvIS_1.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liza/CLionProjects/MRZvIS_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/MRZvIS_1.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MRZvIS_1.dir/main.cpp.o -c /home/liza/CLionProjects/MRZvIS_1/main.cpp

CMakeFiles/MRZvIS_1.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MRZvIS_1.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liza/CLionProjects/MRZvIS_1/main.cpp > CMakeFiles/MRZvIS_1.dir/main.cpp.i

CMakeFiles/MRZvIS_1.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MRZvIS_1.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liza/CLionProjects/MRZvIS_1/main.cpp -o CMakeFiles/MRZvIS_1.dir/main.cpp.s

CMakeFiles/MRZvIS_1.dir/Algorithm.cpp.o: CMakeFiles/MRZvIS_1.dir/flags.make
CMakeFiles/MRZvIS_1.dir/Algorithm.cpp.o: ../Algorithm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/liza/CLionProjects/MRZvIS_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/MRZvIS_1.dir/Algorithm.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/MRZvIS_1.dir/Algorithm.cpp.o -c /home/liza/CLionProjects/MRZvIS_1/Algorithm.cpp

CMakeFiles/MRZvIS_1.dir/Algorithm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/MRZvIS_1.dir/Algorithm.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/liza/CLionProjects/MRZvIS_1/Algorithm.cpp > CMakeFiles/MRZvIS_1.dir/Algorithm.cpp.i

CMakeFiles/MRZvIS_1.dir/Algorithm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/MRZvIS_1.dir/Algorithm.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/liza/CLionProjects/MRZvIS_1/Algorithm.cpp -o CMakeFiles/MRZvIS_1.dir/Algorithm.cpp.s

# Object files for target MRZvIS_1
MRZvIS_1_OBJECTS = \
"CMakeFiles/MRZvIS_1.dir/main.cpp.o" \
"CMakeFiles/MRZvIS_1.dir/Algorithm.cpp.o"

# External object files for target MRZvIS_1
MRZvIS_1_EXTERNAL_OBJECTS =

MRZvIS_1: CMakeFiles/MRZvIS_1.dir/main.cpp.o
MRZvIS_1: CMakeFiles/MRZvIS_1.dir/Algorithm.cpp.o
MRZvIS_1: CMakeFiles/MRZvIS_1.dir/build.make
MRZvIS_1: CMakeFiles/MRZvIS_1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/liza/CLionProjects/MRZvIS_1/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable MRZvIS_1"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/MRZvIS_1.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/MRZvIS_1.dir/build: MRZvIS_1

.PHONY : CMakeFiles/MRZvIS_1.dir/build

CMakeFiles/MRZvIS_1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/MRZvIS_1.dir/cmake_clean.cmake
.PHONY : CMakeFiles/MRZvIS_1.dir/clean

CMakeFiles/MRZvIS_1.dir/depend:
	cd /home/liza/CLionProjects/MRZvIS_1/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/liza/CLionProjects/MRZvIS_1 /home/liza/CLionProjects/MRZvIS_1 /home/liza/CLionProjects/MRZvIS_1/cmake-build-debug /home/liza/CLionProjects/MRZvIS_1/cmake-build-debug /home/liza/CLionProjects/MRZvIS_1/cmake-build-debug/CMakeFiles/MRZvIS_1.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/MRZvIS_1.dir/depend

