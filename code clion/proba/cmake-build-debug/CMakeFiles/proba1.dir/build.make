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
CMAKE_SOURCE_DIR = "D:\code clion\proba"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\code clion\proba\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/proba1.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/proba1.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/proba1.dir/flags.make

CMakeFiles/proba1.dir/proba1.cpp.obj: CMakeFiles/proba1.dir/flags.make
CMakeFiles/proba1.dir/proba1.cpp.obj: ../proba1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code clion\proba\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/proba1.dir/proba1.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\proba1.dir\proba1.cpp.obj -c "D:\code clion\proba\proba1.cpp"

CMakeFiles/proba1.dir/proba1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/proba1.dir/proba1.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\code clion\proba\proba1.cpp" > CMakeFiles\proba1.dir\proba1.cpp.i

CMakeFiles/proba1.dir/proba1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/proba1.dir/proba1.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\code clion\proba\proba1.cpp" -o CMakeFiles\proba1.dir\proba1.cpp.s

# Object files for target proba1
proba1_OBJECTS = \
"CMakeFiles/proba1.dir/proba1.cpp.obj"

# External object files for target proba1
proba1_EXTERNAL_OBJECTS =

proba1.exe: CMakeFiles/proba1.dir/proba1.cpp.obj
proba1.exe: CMakeFiles/proba1.dir/build.make
proba1.exe: CMakeFiles/proba1.dir/linklibs.rsp
proba1.exe: CMakeFiles/proba1.dir/objects1.rsp
proba1.exe: CMakeFiles/proba1.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code clion\proba\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable proba1.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\proba1.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/proba1.dir/build: proba1.exe
.PHONY : CMakeFiles/proba1.dir/build

CMakeFiles/proba1.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\proba1.dir\cmake_clean.cmake
.PHONY : CMakeFiles/proba1.dir/clean

CMakeFiles/proba1.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code clion\proba" "D:\code clion\proba" "D:\code clion\proba\cmake-build-debug" "D:\code clion\proba\cmake-build-debug" "D:\code clion\proba\cmake-build-debug\CMakeFiles\proba1.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/proba1.dir/depend

