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
CMAKE_SOURCE_DIR = "D:\code clion\2sem_1seminar"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\code clion\2sem_1seminar\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/task.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/task.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/task.dir/flags.make

CMakeFiles/task.dir/task.cpp.obj: CMakeFiles/task.dir/flags.make
CMakeFiles/task.dir/task.cpp.obj: ../task.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\code clion\2sem_1seminar\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/task.dir/task.cpp.obj"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\task.dir\task.cpp.obj -c "D:\code clion\2sem_1seminar\task.cpp"

CMakeFiles/task.dir/task.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/task.dir/task.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\code clion\2sem_1seminar\task.cpp" > CMakeFiles\task.dir\task.cpp.i

CMakeFiles/task.dir/task.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/task.dir/task.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\code clion\2sem_1seminar\task.cpp" -o CMakeFiles\task.dir\task.cpp.s

# Object files for target task
task_OBJECTS = \
"CMakeFiles/task.dir/task.cpp.obj"

# External object files for target task
task_EXTERNAL_OBJECTS =

task.exe: CMakeFiles/task.dir/task.cpp.obj
task.exe: CMakeFiles/task.dir/build.make
task.exe: CMakeFiles/task.dir/linklibs.rsp
task.exe: CMakeFiles/task.dir/objects1.rsp
task.exe: CMakeFiles/task.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\code clion\2sem_1seminar\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable task.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\task.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/task.dir/build: task.exe
.PHONY : CMakeFiles/task.dir/build

CMakeFiles/task.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\task.dir\cmake_clean.cmake
.PHONY : CMakeFiles/task.dir/clean

CMakeFiles/task.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\code clion\2sem_1seminar" "D:\code clion\2sem_1seminar" "D:\code clion\2sem_1seminar\cmake-build-debug" "D:\code clion\2sem_1seminar\cmake-build-debug" "D:\code clion\2sem_1seminar\cmake-build-debug\CMakeFiles\task.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/task.dir/depend
