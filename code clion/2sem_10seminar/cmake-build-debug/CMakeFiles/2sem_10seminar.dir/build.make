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
include CMakeFiles/2sem_10seminar.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/2sem_10seminar.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/2sem_10seminar.dir/flags.make

CMakeFiles/2sem_10seminar.dir/main.cpp.obj: CMakeFiles/2sem_10seminar.dir/flags.make
CMakeFiles/2sem_10seminar.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/2sem_10seminar.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\2sem_10seminar.dir\main.cpp.obj -c "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\main.cpp"

CMakeFiles/2sem_10seminar.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/2sem_10seminar.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\main.cpp" > CMakeFiles\2sem_10seminar.dir\main.cpp.i

CMakeFiles/2sem_10seminar.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/2sem_10seminar.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\main.cpp" -o CMakeFiles\2sem_10seminar.dir\main.cpp.s

# Object files for target 2sem_10seminar
2sem_10seminar_OBJECTS = \
"CMakeFiles/2sem_10seminar.dir/main.cpp.obj"

# External object files for target 2sem_10seminar
2sem_10seminar_EXTERNAL_OBJECTS =

2sem_10seminar.exe: CMakeFiles/2sem_10seminar.dir/main.cpp.obj
2sem_10seminar.exe: CMakeFiles/2sem_10seminar.dir/build.make
2sem_10seminar.exe: CMakeFiles/2sem_10seminar.dir/linklibs.rsp
2sem_10seminar.exe: CMakeFiles/2sem_10seminar.dir/objects1.rsp
2sem_10seminar.exe: CMakeFiles/2sem_10seminar.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable 2sem_10seminar.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\2sem_10seminar.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/2sem_10seminar.dir/build: 2sem_10seminar.exe
.PHONY : CMakeFiles/2sem_10seminar.dir/build

CMakeFiles/2sem_10seminar.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\2sem_10seminar.dir\cmake_clean.cmake
.PHONY : CMakeFiles/2sem_10seminar.dir/clean

CMakeFiles/2sem_10seminar.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\cmake-build-debug" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\cmake-build-debug" "D:\VASILY WORKS\PHYSTECH\Computer science\infa\code clion\2sem_10seminar\cmake-build-debug\CMakeFiles\2sem_10seminar.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/2sem_10seminar.dir/depend

