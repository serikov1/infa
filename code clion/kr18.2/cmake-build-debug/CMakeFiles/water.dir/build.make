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
CMAKE_SOURCE_DIR = "D:\code clion\kr18.2"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\code clion\kr18.2\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/water.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/water.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/water.dir/flags.make

CMakeFiles/water.dir/water.cpp.obj: CMakeFiles/water.dir/flags.make
CMakeFiles/water.dir/water.cpp.obj: ../water.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code clion\kr18.2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/water.dir/water.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\water.dir\water.cpp.obj -c "D:\code clion\kr18.2\water.cpp"

CMakeFiles/water.dir/water.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/water.dir/water.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\code clion\kr18.2\water.cpp" > CMakeFiles\water.dir\water.cpp.i

CMakeFiles/water.dir/water.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/water.dir/water.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\code clion\kr18.2\water.cpp" -o CMakeFiles\water.dir\water.cpp.s

# Object files for target water
water_OBJECTS = \
"CMakeFiles/water.dir/water.cpp.obj"

# External object files for target water
water_EXTERNAL_OBJECTS =

water.exe: CMakeFiles/water.dir/water.cpp.obj
water.exe: CMakeFiles/water.dir/build.make
water.exe: CMakeFiles/water.dir/linklibs.rsp
water.exe: CMakeFiles/water.dir/objects1.rsp
water.exe: CMakeFiles/water.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code clion\kr18.2\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable water.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\water.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/water.dir/build: water.exe
.PHONY : CMakeFiles/water.dir/build

CMakeFiles/water.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\water.dir\cmake_clean.cmake
.PHONY : CMakeFiles/water.dir/clean

CMakeFiles/water.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code clion\kr18.2" "D:\code clion\kr18.2" "D:\code clion\kr18.2\cmake-build-debug" "D:\code clion\kr18.2\cmake-build-debug" "D:\code clion\kr18.2\cmake-build-debug\CMakeFiles\water.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/water.dir/depend

