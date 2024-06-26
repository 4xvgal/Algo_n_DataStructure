# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.26.4/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.26.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/mac/Documents/GitHub/Algo_n_DataStructure

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/mac/Documents/GitHub/Algo_n_DataStructure/build

# Include any dependencies generated for this target.
include src/RealRandom/CMakeFiles/RealRandom.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include src/RealRandom/CMakeFiles/RealRandom.dir/compiler_depend.make

# Include the progress variables for this target.
include src/RealRandom/CMakeFiles/RealRandom.dir/progress.make

# Include the compile flags for this target's objects.
include src/RealRandom/CMakeFiles/RealRandom.dir/flags.make

src/RealRandom/CMakeFiles/RealRandom.dir/realRandom_urandom.spec.cpp.o: src/RealRandom/CMakeFiles/RealRandom.dir/flags.make
src/RealRandom/CMakeFiles/RealRandom.dir/realRandom_urandom.spec.cpp.o: /Users/mac/Documents/GitHub/Algo_n_DataStructure/src/RealRandom/realRandom_urandom.spec.cpp
src/RealRandom/CMakeFiles/RealRandom.dir/realRandom_urandom.spec.cpp.o: src/RealRandom/CMakeFiles/RealRandom.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/mac/Documents/GitHub/Algo_n_DataStructure/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object src/RealRandom/CMakeFiles/RealRandom.dir/realRandom_urandom.spec.cpp.o"
	cd /Users/mac/Documents/GitHub/Algo_n_DataStructure/build/src/RealRandom && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT src/RealRandom/CMakeFiles/RealRandom.dir/realRandom_urandom.spec.cpp.o -MF CMakeFiles/RealRandom.dir/realRandom_urandom.spec.cpp.o.d -o CMakeFiles/RealRandom.dir/realRandom_urandom.spec.cpp.o -c /Users/mac/Documents/GitHub/Algo_n_DataStructure/src/RealRandom/realRandom_urandom.spec.cpp

src/RealRandom/CMakeFiles/RealRandom.dir/realRandom_urandom.spec.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/RealRandom.dir/realRandom_urandom.spec.cpp.i"
	cd /Users/mac/Documents/GitHub/Algo_n_DataStructure/build/src/RealRandom && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/mac/Documents/GitHub/Algo_n_DataStructure/src/RealRandom/realRandom_urandom.spec.cpp > CMakeFiles/RealRandom.dir/realRandom_urandom.spec.cpp.i

src/RealRandom/CMakeFiles/RealRandom.dir/realRandom_urandom.spec.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/RealRandom.dir/realRandom_urandom.spec.cpp.s"
	cd /Users/mac/Documents/GitHub/Algo_n_DataStructure/build/src/RealRandom && /usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/mac/Documents/GitHub/Algo_n_DataStructure/src/RealRandom/realRandom_urandom.spec.cpp -o CMakeFiles/RealRandom.dir/realRandom_urandom.spec.cpp.s

# Object files for target RealRandom
RealRandom_OBJECTS = \
"CMakeFiles/RealRandom.dir/realRandom_urandom.spec.cpp.o"

# External object files for target RealRandom
RealRandom_EXTERNAL_OBJECTS =

lib/libRealRandom.a: src/RealRandom/CMakeFiles/RealRandom.dir/realRandom_urandom.spec.cpp.o
lib/libRealRandom.a: src/RealRandom/CMakeFiles/RealRandom.dir/build.make
lib/libRealRandom.a: src/RealRandom/CMakeFiles/RealRandom.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/mac/Documents/GitHub/Algo_n_DataStructure/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library ../../lib/libRealRandom.a"
	cd /Users/mac/Documents/GitHub/Algo_n_DataStructure/build/src/RealRandom && $(CMAKE_COMMAND) -P CMakeFiles/RealRandom.dir/cmake_clean_target.cmake
	cd /Users/mac/Documents/GitHub/Algo_n_DataStructure/build/src/RealRandom && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/RealRandom.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/RealRandom/CMakeFiles/RealRandom.dir/build: lib/libRealRandom.a
.PHONY : src/RealRandom/CMakeFiles/RealRandom.dir/build

src/RealRandom/CMakeFiles/RealRandom.dir/clean:
	cd /Users/mac/Documents/GitHub/Algo_n_DataStructure/build/src/RealRandom && $(CMAKE_COMMAND) -P CMakeFiles/RealRandom.dir/cmake_clean.cmake
.PHONY : src/RealRandom/CMakeFiles/RealRandom.dir/clean

src/RealRandom/CMakeFiles/RealRandom.dir/depend:
	cd /Users/mac/Documents/GitHub/Algo_n_DataStructure/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/mac/Documents/GitHub/Algo_n_DataStructure /Users/mac/Documents/GitHub/Algo_n_DataStructure/src/RealRandom /Users/mac/Documents/GitHub/Algo_n_DataStructure/build /Users/mac/Documents/GitHub/Algo_n_DataStructure/build/src/RealRandom /Users/mac/Documents/GitHub/Algo_n_DataStructure/build/src/RealRandom/CMakeFiles/RealRandom.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/RealRandom/CMakeFiles/RealRandom.dir/depend

