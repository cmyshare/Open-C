# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.19

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
CMAKE_COMMAND = "F:\CLion\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "F:\CLion\CLion 2021.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = F:\CLion\CLionbook\Cpractice

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = F:\CLion\CLionbook\Cpractice\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/main36.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main36.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main36.dir/flags.make

CMakeFiles/main36.dir/Unit3/test3-6.c.obj: CMakeFiles/main36.dir/flags.make
CMakeFiles/main36.dir/Unit3/test3-6.c.obj: ../Unit3/test3-6.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\CLion\CLionbook\Cpractice\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/main36.dir/Unit3/test3-6.c.obj"
	F:\CLion\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\main36.dir\Unit3\test3-6.c.obj -c F:\CLion\CLionbook\Cpractice\Unit3\test3-6.c

CMakeFiles/main36.dir/Unit3/test3-6.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main36.dir/Unit3/test3-6.c.i"
	F:\CLion\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\CLion\CLionbook\Cpractice\Unit3\test3-6.c > CMakeFiles\main36.dir\Unit3\test3-6.c.i

CMakeFiles/main36.dir/Unit3/test3-6.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main36.dir/Unit3/test3-6.c.s"
	F:\CLion\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\CLion\CLionbook\Cpractice\Unit3\test3-6.c -o CMakeFiles\main36.dir\Unit3\test3-6.c.s

# Object files for target main36
main36_OBJECTS = \
"CMakeFiles/main36.dir/Unit3/test3-6.c.obj"

# External object files for target main36
main36_EXTERNAL_OBJECTS =

main36.exe: CMakeFiles/main36.dir/Unit3/test3-6.c.obj
main36.exe: CMakeFiles/main36.dir/build.make
main36.exe: CMakeFiles/main36.dir/linklibs.rsp
main36.exe: CMakeFiles/main36.dir/objects1.rsp
main36.exe: CMakeFiles/main36.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\CLion\CLionbook\Cpractice\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable main36.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\main36.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main36.dir/build: main36.exe

.PHONY : CMakeFiles/main36.dir/build

CMakeFiles/main36.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\main36.dir\cmake_clean.cmake
.PHONY : CMakeFiles/main36.dir/clean

CMakeFiles/main36.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\CLion\CLionbook\Cpractice F:\CLion\CLionbook\Cpractice F:\CLion\CLionbook\Cpractice\cmake-build-debug F:\CLion\CLionbook\Cpractice\cmake-build-debug F:\CLion\CLionbook\Cpractice\cmake-build-debug\CMakeFiles\main36.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main36.dir/depend

