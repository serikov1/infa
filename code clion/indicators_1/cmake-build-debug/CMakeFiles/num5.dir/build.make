# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.20

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CLion 2021.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\code clion\indicators_1"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\code clion\indicators_1\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/num5.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/num5.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/num5.dir/flags.make

CMakeFiles/num5.dir/num5.cpp.obj: CMakeFiles/num5.dir/flags.make
CMakeFiles/num5.dir/num5.cpp.obj: ../num5.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code clion\indicators_1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/num5.dir/num5.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\num5.dir\num5.cpp.obj -c "D:\code clion\indicators_1\num5.cpp"

CMakeFiles/num5.dir/num5.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/num5.dir/num5.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\code clion\indicators_1\num5.cpp" > CMakeFiles\num5.dir\num5.cpp.i

CMakeFiles/num5.dir/num5.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/num5.dir/num5.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\code clion\indicators_1\num5.cpp" -o CMakeFiles\num5.dir\num5.cpp.s

# Object files for target num5
num5_OBJECTS = \
"CMakeFiles/num5.dir/num5.cpp.obj"

# External object files for target num5
num5_EXTERNAL_OBJECTS =

num5.exe: CMakeFiles/num5.dir/num5.cpp.obj
num5.exe: CMakeFiles/num5.dir/build.make
num5.exe: CMakeFiles/num5.dir/linklibs.rsp
num5.exe: CMakeFiles/num5.dir/objects1.rsp
num5.exe: CMakeFiles/num5.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code clion\indicators_1\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable num5.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\num5.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/num5.dir/build: num5.exe
.PHONY : CMakeFiles/num5.dir/build

CMakeFiles/num5.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\num5.dir\cmake_clean.cmake
.PHONY : CMakeFiles/num5.dir/clean

CMakeFiles/num5.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code clion\indicators_1" "D:\code clion\indicators_1" "D:\code clion\indicators_1\cmake-build-debug" "D:\code clion\indicators_1\cmake-build-debug" "D:\code clion\indicators_1\cmake-build-debug\CMakeFiles\num5.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/num5.dir/depend

