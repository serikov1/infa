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
CMAKE_SOURCE_DIR = "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_7seminar"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_7seminar\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Accumulate.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/Accumulate.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Accumulate.dir/flags.make

CMakeFiles/Accumulate.dir/Accumulate.cpp.obj: CMakeFiles/Accumulate.dir/flags.make
CMakeFiles/Accumulate.dir/Accumulate.cpp.obj: ../Accumulate.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_7seminar\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Accumulate.dir/Accumulate.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Accumulate.dir\Accumulate.cpp.obj -c "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_7seminar\Accumulate.cpp"

CMakeFiles/Accumulate.dir/Accumulate.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Accumulate.dir/Accumulate.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_7seminar\Accumulate.cpp" > CMakeFiles\Accumulate.dir\Accumulate.cpp.i

CMakeFiles/Accumulate.dir/Accumulate.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Accumulate.dir/Accumulate.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_7seminar\Accumulate.cpp" -o CMakeFiles\Accumulate.dir\Accumulate.cpp.s

# Object files for target Accumulate
Accumulate_OBJECTS = \
"CMakeFiles/Accumulate.dir/Accumulate.cpp.obj"

# External object files for target Accumulate
Accumulate_EXTERNAL_OBJECTS =

Accumulate.exe: CMakeFiles/Accumulate.dir/Accumulate.cpp.obj
Accumulate.exe: CMakeFiles/Accumulate.dir/build.make
Accumulate.exe: CMakeFiles/Accumulate.dir/linklibs.rsp
Accumulate.exe: CMakeFiles/Accumulate.dir/objects1.rsp
Accumulate.exe: CMakeFiles/Accumulate.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_7seminar\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Accumulate.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Accumulate.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Accumulate.dir/build: Accumulate.exe
.PHONY : CMakeFiles/Accumulate.dir/build

CMakeFiles/Accumulate.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Accumulate.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Accumulate.dir/clean

CMakeFiles/Accumulate.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_7seminar" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_7seminar" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_7seminar\cmake-build-debug" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_7seminar\cmake-build-debug" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_7seminar\cmake-build-debug\CMakeFiles\Accumulate.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Accumulate.dir/depend

