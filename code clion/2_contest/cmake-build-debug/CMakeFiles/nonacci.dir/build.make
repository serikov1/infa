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
CMAKE_SOURCE_DIR = "D:\code clion\2_contest"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\code clion\2_contest\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/nonacci.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/nonacci.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/nonacci.dir/flags.make

CMakeFiles/nonacci.dir/nonacci.cpp.obj: CMakeFiles/nonacci.dir/flags.make
CMakeFiles/nonacci.dir/nonacci.cpp.obj: ../nonacci.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code clion\2_contest\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/nonacci.dir/nonacci.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\nonacci.dir\nonacci.cpp.obj -c "D:\code clion\2_contest\nonacci.cpp"

CMakeFiles/nonacci.dir/nonacci.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/nonacci.dir/nonacci.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\code clion\2_contest\nonacci.cpp" > CMakeFiles\nonacci.dir\nonacci.cpp.i

CMakeFiles/nonacci.dir/nonacci.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/nonacci.dir/nonacci.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\code clion\2_contest\nonacci.cpp" -o CMakeFiles\nonacci.dir\nonacci.cpp.s

# Object files for target nonacci
nonacci_OBJECTS = \
"CMakeFiles/nonacci.dir/nonacci.cpp.obj"

# External object files for target nonacci
nonacci_EXTERNAL_OBJECTS =

nonacci.exe: CMakeFiles/nonacci.dir/nonacci.cpp.obj
nonacci.exe: CMakeFiles/nonacci.dir/build.make
nonacci.exe: CMakeFiles/nonacci.dir/linklibs.rsp
nonacci.exe: CMakeFiles/nonacci.dir/objects1.rsp
nonacci.exe: CMakeFiles/nonacci.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code clion\2_contest\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable nonacci.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\nonacci.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/nonacci.dir/build: nonacci.exe
.PHONY : CMakeFiles/nonacci.dir/build

CMakeFiles/nonacci.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\nonacci.dir\cmake_clean.cmake
.PHONY : CMakeFiles/nonacci.dir/clean

CMakeFiles/nonacci.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code clion\2_contest" "D:\code clion\2_contest" "D:\code clion\2_contest\cmake-build-debug" "D:\code clion\2_contest\cmake-build-debug" "D:\code clion\2_contest\cmake-build-debug\CMakeFiles\nonacci.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/nonacci.dir/depend

