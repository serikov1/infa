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
CMAKE_SOURCE_DIR = "D:\code clion\kr19.3"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\code clion\kr19.3\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/kr19_3.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/kr19_3.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/kr19_3.dir/flags.make

CMakeFiles/kr19_3.dir/main.cpp.obj: CMakeFiles/kr19_3.dir/flags.make
CMakeFiles/kr19_3.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code clion\kr19.3\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/kr19_3.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\kr19_3.dir\main.cpp.obj -c "D:\code clion\kr19.3\main.cpp"

CMakeFiles/kr19_3.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/kr19_3.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\code clion\kr19.3\main.cpp" > CMakeFiles\kr19_3.dir\main.cpp.i

CMakeFiles/kr19_3.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/kr19_3.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\code clion\kr19.3\main.cpp" -o CMakeFiles\kr19_3.dir\main.cpp.s

# Object files for target kr19_3
kr19_3_OBJECTS = \
"CMakeFiles/kr19_3.dir/main.cpp.obj"

# External object files for target kr19_3
kr19_3_EXTERNAL_OBJECTS =

kr19_3.exe: CMakeFiles/kr19_3.dir/main.cpp.obj
kr19_3.exe: CMakeFiles/kr19_3.dir/build.make
kr19_3.exe: CMakeFiles/kr19_3.dir/linklibs.rsp
kr19_3.exe: CMakeFiles/kr19_3.dir/objects1.rsp
kr19_3.exe: CMakeFiles/kr19_3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code clion\kr19.3\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable kr19_3.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\kr19_3.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/kr19_3.dir/build: kr19_3.exe
.PHONY : CMakeFiles/kr19_3.dir/build

CMakeFiles/kr19_3.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\kr19_3.dir\cmake_clean.cmake
.PHONY : CMakeFiles/kr19_3.dir/clean

CMakeFiles/kr19_3.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code clion\kr19.3" "D:\code clion\kr19.3" "D:\code clion\kr19.3\cmake-build-debug" "D:\code clion\kr19.3\cmake-build-debug" "D:\code clion\kr19.3\cmake-build-debug\CMakeFiles\kr19_3.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/kr19_3.dir/depend

