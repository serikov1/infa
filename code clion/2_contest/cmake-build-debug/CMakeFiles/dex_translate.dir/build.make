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
include CMakeFiles/dex_translate.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/dex_translate.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dex_translate.dir/flags.make

CMakeFiles/dex_translate.dir/dex_translate.cpp.obj: CMakeFiles/dex_translate.dir/flags.make
CMakeFiles/dex_translate.dir/dex_translate.cpp.obj: ../dex_translate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code clion\2_contest\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dex_translate.dir/dex_translate.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dex_translate.dir\dex_translate.cpp.obj -c "D:\code clion\2_contest\dex_translate.cpp"

CMakeFiles/dex_translate.dir/dex_translate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dex_translate.dir/dex_translate.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\code clion\2_contest\dex_translate.cpp" > CMakeFiles\dex_translate.dir\dex_translate.cpp.i

CMakeFiles/dex_translate.dir/dex_translate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dex_translate.dir/dex_translate.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\code clion\2_contest\dex_translate.cpp" -o CMakeFiles\dex_translate.dir\dex_translate.cpp.s

# Object files for target dex_translate
dex_translate_OBJECTS = \
"CMakeFiles/dex_translate.dir/dex_translate.cpp.obj"

# External object files for target dex_translate
dex_translate_EXTERNAL_OBJECTS =

dex_translate.exe: CMakeFiles/dex_translate.dir/dex_translate.cpp.obj
dex_translate.exe: CMakeFiles/dex_translate.dir/build.make
dex_translate.exe: CMakeFiles/dex_translate.dir/linklibs.rsp
dex_translate.exe: CMakeFiles/dex_translate.dir/objects1.rsp
dex_translate.exe: CMakeFiles/dex_translate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code clion\2_contest\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dex_translate.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dex_translate.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dex_translate.dir/build: dex_translate.exe
.PHONY : CMakeFiles/dex_translate.dir/build

CMakeFiles/dex_translate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dex_translate.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dex_translate.dir/clean

CMakeFiles/dex_translate.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code clion\2_contest" "D:\code clion\2_contest" "D:\code clion\2_contest\cmake-build-debug" "D:\code clion\2_contest\cmake-build-debug" "D:\code clion\2_contest\cmake-build-debug\CMakeFiles\dex_translate.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/dex_translate.dir/depend

