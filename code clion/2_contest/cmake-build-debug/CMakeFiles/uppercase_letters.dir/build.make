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
include CMakeFiles/uppercase_letters.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/uppercase_letters.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/uppercase_letters.dir/flags.make

CMakeFiles/uppercase_letters.dir/uppercase_letters.cpp.obj: CMakeFiles/uppercase_letters.dir/flags.make
CMakeFiles/uppercase_letters.dir/uppercase_letters.cpp.obj: ../uppercase_letters.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code clion\2_contest\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/uppercase_letters.dir/uppercase_letters.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\uppercase_letters.dir\uppercase_letters.cpp.obj -c "D:\code clion\2_contest\uppercase_letters.cpp"

CMakeFiles/uppercase_letters.dir/uppercase_letters.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/uppercase_letters.dir/uppercase_letters.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\code clion\2_contest\uppercase_letters.cpp" > CMakeFiles\uppercase_letters.dir\uppercase_letters.cpp.i

CMakeFiles/uppercase_letters.dir/uppercase_letters.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/uppercase_letters.dir/uppercase_letters.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\code clion\2_contest\uppercase_letters.cpp" -o CMakeFiles\uppercase_letters.dir\uppercase_letters.cpp.s

# Object files for target uppercase_letters
uppercase_letters_OBJECTS = \
"CMakeFiles/uppercase_letters.dir/uppercase_letters.cpp.obj"

# External object files for target uppercase_letters
uppercase_letters_EXTERNAL_OBJECTS =

uppercase_letters.exe: CMakeFiles/uppercase_letters.dir/uppercase_letters.cpp.obj
uppercase_letters.exe: CMakeFiles/uppercase_letters.dir/build.make
uppercase_letters.exe: CMakeFiles/uppercase_letters.dir/linklibs.rsp
uppercase_letters.exe: CMakeFiles/uppercase_letters.dir/objects1.rsp
uppercase_letters.exe: CMakeFiles/uppercase_letters.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code clion\2_contest\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable uppercase_letters.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\uppercase_letters.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/uppercase_letters.dir/build: uppercase_letters.exe
.PHONY : CMakeFiles/uppercase_letters.dir/build

CMakeFiles/uppercase_letters.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\uppercase_letters.dir\cmake_clean.cmake
.PHONY : CMakeFiles/uppercase_letters.dir/clean

CMakeFiles/uppercase_letters.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code clion\2_contest" "D:\code clion\2_contest" "D:\code clion\2_contest\cmake-build-debug" "D:\code clion\2_contest\cmake-build-debug" "D:\code clion\2_contest\cmake-build-debug\CMakeFiles\uppercase_letters.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/uppercase_letters.dir/depend

