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
CMAKE_SOURCE_DIR = "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/equal_sequnce.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/equal_sequnce.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/equal_sequnce.dir/flags.make

CMakeFiles/equal_sequnce.dir/equal_sequnce.cpp.obj: CMakeFiles/equal_sequnce.dir/flags.make
CMakeFiles/equal_sequnce.dir/equal_sequnce.cpp.obj: ../equal_sequnce.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/equal_sequnce.dir/equal_sequnce.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\equal_sequnce.dir\equal_sequnce.cpp.obj -c "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\equal_sequnce.cpp"

CMakeFiles/equal_sequnce.dir/equal_sequnce.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/equal_sequnce.dir/equal_sequnce.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\equal_sequnce.cpp" > CMakeFiles\equal_sequnce.dir\equal_sequnce.cpp.i

CMakeFiles/equal_sequnce.dir/equal_sequnce.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/equal_sequnce.dir/equal_sequnce.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\equal_sequnce.cpp" -o CMakeFiles\equal_sequnce.dir\equal_sequnce.cpp.s

# Object files for target equal_sequnce
equal_sequnce_OBJECTS = \
"CMakeFiles/equal_sequnce.dir/equal_sequnce.cpp.obj"

# External object files for target equal_sequnce
equal_sequnce_EXTERNAL_OBJECTS =

equal_sequnce.exe: CMakeFiles/equal_sequnce.dir/equal_sequnce.cpp.obj
equal_sequnce.exe: CMakeFiles/equal_sequnce.dir/build.make
equal_sequnce.exe: CMakeFiles/equal_sequnce.dir/linklibs.rsp
equal_sequnce.exe: CMakeFiles/equal_sequnce.dir/objects1.rsp
equal_sequnce.exe: CMakeFiles/equal_sequnce.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable equal_sequnce.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\equal_sequnce.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/equal_sequnce.dir/build: equal_sequnce.exe
.PHONY : CMakeFiles/equal_sequnce.dir/build

CMakeFiles/equal_sequnce.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\equal_sequnce.dir\cmake_clean.cmake
.PHONY : CMakeFiles/equal_sequnce.dir/clean

CMakeFiles/equal_sequnce.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\cmake-build-debug" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\cmake-build-debug" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\cmake-build-debug\CMakeFiles\equal_sequnce.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/equal_sequnce.dir/depend

