# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /mnt/c/Users/aaron/Desktop/Coding/MATH-458/exercises/book_exercises/ch2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /mnt/c/Users/aaron/Desktop/Coding/MATH-458/exercises/book_exercises/ch2

# Include any dependencies generated for this target.
include CMakeFiles/e23.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/e23.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/e23.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/e23.dir/flags.make

CMakeFiles/e23.dir/src/e23.cpp.o: CMakeFiles/e23.dir/flags.make
CMakeFiles/e23.dir/src/e23.cpp.o: src/e23.cpp
CMakeFiles/e23.dir/src/e23.cpp.o: CMakeFiles/e23.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/mnt/c/Users/aaron/Desktop/Coding/MATH-458/exercises/book_exercises/ch2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/e23.dir/src/e23.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/e23.dir/src/e23.cpp.o -MF CMakeFiles/e23.dir/src/e23.cpp.o.d -o CMakeFiles/e23.dir/src/e23.cpp.o -c /mnt/c/Users/aaron/Desktop/Coding/MATH-458/exercises/book_exercises/ch2/src/e23.cpp

CMakeFiles/e23.dir/src/e23.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/e23.dir/src/e23.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /mnt/c/Users/aaron/Desktop/Coding/MATH-458/exercises/book_exercises/ch2/src/e23.cpp > CMakeFiles/e23.dir/src/e23.cpp.i

CMakeFiles/e23.dir/src/e23.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/e23.dir/src/e23.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /mnt/c/Users/aaron/Desktop/Coding/MATH-458/exercises/book_exercises/ch2/src/e23.cpp -o CMakeFiles/e23.dir/src/e23.cpp.s

# Object files for target e23
e23_OBJECTS = \
"CMakeFiles/e23.dir/src/e23.cpp.o"

# External object files for target e23
e23_EXTERNAL_OBJECTS =

build/e23: CMakeFiles/e23.dir/src/e23.cpp.o
build/e23: CMakeFiles/e23.dir/build.make
build/e23: CMakeFiles/e23.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/mnt/c/Users/aaron/Desktop/Coding/MATH-458/exercises/book_exercises/ch2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable build/e23"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/e23.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/e23.dir/build: build/e23
.PHONY : CMakeFiles/e23.dir/build

CMakeFiles/e23.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/e23.dir/cmake_clean.cmake
.PHONY : CMakeFiles/e23.dir/clean

CMakeFiles/e23.dir/depend:
	cd /mnt/c/Users/aaron/Desktop/Coding/MATH-458/exercises/book_exercises/ch2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /mnt/c/Users/aaron/Desktop/Coding/MATH-458/exercises/book_exercises/ch2 /mnt/c/Users/aaron/Desktop/Coding/MATH-458/exercises/book_exercises/ch2 /mnt/c/Users/aaron/Desktop/Coding/MATH-458/exercises/book_exercises/ch2 /mnt/c/Users/aaron/Desktop/Coding/MATH-458/exercises/book_exercises/ch2 /mnt/c/Users/aaron/Desktop/Coding/MATH-458/exercises/book_exercises/ch2/CMakeFiles/e23.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/e23.dir/depend

