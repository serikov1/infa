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
CMAKE_SOURCE_DIR = "D:\code clion\1_contest"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\code clion\1_contest\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/romb.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/romb.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/romb.dir/flags.make

CMakeFiles/romb.dir/romb.cpp.obj: CMakeFiles/romb.dir/flags.make
CMakeFiles/romb.dir/romb.cpp.obj: ../romb.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code clion\1_contest\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/romb.dir/romb.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\romb.dir\romb.cpp.obj -c "D:\code clion\1_contest\romb.cpp"

CMakeFiles/romb.dir/romb.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/romb.dir/romb.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\code clion\1_contest\romb.cpp" > CMakeFiles\romb.dir\romb.cpp.i

CMakeFiles/romb.dir/romb.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/romb.dir/romb.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\code clion\1_contest\romb.cpp" -o CMakeFiles\romb.dir\romb.cpp.s

# Object files for target romb
romb_OBJECTS = \
"CMakeFiles/romb.dir/romb.cpp.obj"

# External object files for target romb
romb_EXTERNAL_OBJECTS =

romb.exe: CMakeFiles/romb.dir/romb.cpp.obj
romb.exe: CMakeFiles/romb.dir/build.make
romb.exe: CMakeFiles/romb.dir/linklibs.rsp
romb.exe: CMakeFiles/romb.dir/objects1.rsp
romb.exe: CMakeFiles/romb.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code clion\1_contest\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable romb.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\romb.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/romb.dir/build: romb.exe
.PHONY : CMakeFiles/romb.dir/build

CMakeFiles/romb.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\romb.dir\cmake_clean.cmake
.PHONY : CMakeFiles/romb.dir/clean

CMakeFiles/romb.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code clion\1_contest" "D:\code clion\1_contest" "D:\code clion\1_contest\cmake-build-debug" "D:\code clion\1_contest\cmake-build-debug" "D:\code clion\1_contest\cmake-build-debug\CMakeFiles\romb.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/romb.dir/depend

