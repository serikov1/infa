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
CMAKE_SOURCE_DIR = "D:\code clion\KR2021"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\code clion\KR2021\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/chaos.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/chaos.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/chaos.dir/flags.make

CMakeFiles/chaos.dir/chaos.cpp.obj: CMakeFiles/chaos.dir/flags.make
CMakeFiles/chaos.dir/chaos.cpp.obj: ../chaos.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code clion\KR2021\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/chaos.dir/chaos.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\chaos.dir\chaos.cpp.obj -c "D:\code clion\KR2021\chaos.cpp"

CMakeFiles/chaos.dir/chaos.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/chaos.dir/chaos.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\code clion\KR2021\chaos.cpp" > CMakeFiles\chaos.dir\chaos.cpp.i

CMakeFiles/chaos.dir/chaos.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/chaos.dir/chaos.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\code clion\KR2021\chaos.cpp" -o CMakeFiles\chaos.dir\chaos.cpp.s

# Object files for target chaos
chaos_OBJECTS = \
"CMakeFiles/chaos.dir/chaos.cpp.obj"

# External object files for target chaos
chaos_EXTERNAL_OBJECTS =

chaos.exe: CMakeFiles/chaos.dir/chaos.cpp.obj
chaos.exe: CMakeFiles/chaos.dir/build.make
chaos.exe: CMakeFiles/chaos.dir/linklibs.rsp
chaos.exe: CMakeFiles/chaos.dir/objects1.rsp
chaos.exe: CMakeFiles/chaos.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code clion\KR2021\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable chaos.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\chaos.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/chaos.dir/build: chaos.exe
.PHONY : CMakeFiles/chaos.dir/build

CMakeFiles/chaos.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\chaos.dir\cmake_clean.cmake
.PHONY : CMakeFiles/chaos.dir/clean

CMakeFiles/chaos.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code clion\KR2021" "D:\code clion\KR2021" "D:\code clion\KR2021\cmake-build-debug" "D:\code clion\KR2021\cmake-build-debug" "D:\code clion\KR2021\cmake-build-debug\CMakeFiles\chaos.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/chaos.dir/depend

