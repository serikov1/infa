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
CMAKE_SOURCE_DIR = "D:\code clion\kr2_2020"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\code clion\kr2_2020\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/num3.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/num3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/num3.dir/flags.make

CMakeFiles/num3.dir/num3.cpp.obj: CMakeFiles/num3.dir/flags.make
CMakeFiles/num3.dir/num3.cpp.obj: ../num3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code clion\kr2_2020\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/num3.dir/num3.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\num3.dir\num3.cpp.obj -c "D:\code clion\kr2_2020\num3.cpp"

CMakeFiles/num3.dir/num3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/num3.dir/num3.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\code clion\kr2_2020\num3.cpp" > CMakeFiles\num3.dir\num3.cpp.i

CMakeFiles/num3.dir/num3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/num3.dir/num3.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\code clion\kr2_2020\num3.cpp" -o CMakeFiles\num3.dir\num3.cpp.s

# Object files for target num3
num3_OBJECTS = \
"CMakeFiles/num3.dir/num3.cpp.obj"

# External object files for target num3
num3_EXTERNAL_OBJECTS =

num3.exe: CMakeFiles/num3.dir/num3.cpp.obj
num3.exe: CMakeFiles/num3.dir/build.make
num3.exe: CMakeFiles/num3.dir/linklibs.rsp
num3.exe: CMakeFiles/num3.dir/objects1.rsp
num3.exe: CMakeFiles/num3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code clion\kr2_2020\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable num3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\num3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/num3.dir/build: num3.exe
.PHONY : CMakeFiles/num3.dir/build

CMakeFiles/num3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\num3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/num3.dir/clean

CMakeFiles/num3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code clion\kr2_2020" "D:\code clion\kr2_2020" "D:\code clion\kr2_2020\cmake-build-debug" "D:\code clion\kr2_2020\cmake-build-debug" "D:\code clion\kr2_2020\cmake-build-debug\CMakeFiles\num3.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/num3.dir/depend

