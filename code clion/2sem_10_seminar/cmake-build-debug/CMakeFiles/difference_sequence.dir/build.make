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
CMAKE_SOURCE_DIR = "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10_seminar"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10_seminar\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/difference_sequence.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/difference_sequence.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/difference_sequence.dir/flags.make

CMakeFiles/difference_sequence.dir/difference_sequence.cpp.obj: CMakeFiles/difference_sequence.dir/flags.make
CMakeFiles/difference_sequence.dir/difference_sequence.cpp.obj: ../difference_sequence.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10_seminar\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/difference_sequence.dir/difference_sequence.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\difference_sequence.dir\difference_sequence.cpp.obj -c "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10_seminar\difference_sequence.cpp"

CMakeFiles/difference_sequence.dir/difference_sequence.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/difference_sequence.dir/difference_sequence.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10_seminar\difference_sequence.cpp" > CMakeFiles\difference_sequence.dir\difference_sequence.cpp.i

CMakeFiles/difference_sequence.dir/difference_sequence.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/difference_sequence.dir/difference_sequence.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10_seminar\difference_sequence.cpp" -o CMakeFiles\difference_sequence.dir\difference_sequence.cpp.s

# Object files for target difference_sequence
difference_sequence_OBJECTS = \
"CMakeFiles/difference_sequence.dir/difference_sequence.cpp.obj"

# External object files for target difference_sequence
difference_sequence_EXTERNAL_OBJECTS =

difference_sequence.exe: CMakeFiles/difference_sequence.dir/difference_sequence.cpp.obj
difference_sequence.exe: CMakeFiles/difference_sequence.dir/build.make
difference_sequence.exe: CMakeFiles/difference_sequence.dir/linklibs.rsp
difference_sequence.exe: CMakeFiles/difference_sequence.dir/objects1.rsp
difference_sequence.exe: CMakeFiles/difference_sequence.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10_seminar\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable difference_sequence.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\difference_sequence.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/difference_sequence.dir/build: difference_sequence.exe
.PHONY : CMakeFiles/difference_sequence.dir/build

CMakeFiles/difference_sequence.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\difference_sequence.dir\cmake_clean.cmake
.PHONY : CMakeFiles/difference_sequence.dir/clean

CMakeFiles/difference_sequence.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10_seminar" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10_seminar" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10_seminar\cmake-build-debug" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10_seminar\cmake-build-debug" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10_seminar\cmake-build-debug\CMakeFiles\difference_sequence.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/difference_sequence.dir/depend
