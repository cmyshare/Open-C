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
include CMakeFiles/main821.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main821.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main821.dir/flags.make

CMakeFiles/main821.dir/Unit8/test8-21.c.obj: CMakeFiles/main821.dir/flags.make
CMakeFiles/main821.dir/Unit8/test8-21.c.obj: ../Unit8/test8-21.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=F:\CLion\CLionbook\Cpractice\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/main821.dir/Unit8/test8-21.c.obj"
	F:\CLion\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\main821.dir\Unit8\test8-21.c.obj -c F:\CLion\CLionbook\Cpractice\Unit8\test8-21.c

CMakeFiles/main821.dir/Unit8/test8-21.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main821.dir/Unit8/test8-21.c.i"
	F:\CLion\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E F:\CLion\CLionbook\Cpractice\Unit8\test8-21.c > CMakeFiles\main821.dir\Unit8\test8-21.c.i

CMakeFiles/main821.dir/Unit8/test8-21.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main821.dir/Unit8/test8-21.c.s"
	F:\CLion\MinGW\mingw64\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S F:\CLion\CLionbook\Cpractice\Unit8\test8-21.c -o CMakeFiles\main821.dir\Unit8\test8-21.c.s

# Object files for target main821
main821_OBJECTS = \
"CMakeFiles/main821.dir/Unit8/test8-21.c.obj"

# External object files for target main821
main821_EXTERNAL_OBJECTS =

main821.exe: CMakeFiles/main821.dir/Unit8/test8-21.c.obj
main821.exe: CMakeFiles/main821.dir/build.make
main821.exe: CMakeFiles/main821.dir/linklibs.rsp
main821.exe: CMakeFiles/main821.dir/objects1.rsp
main821.exe: CMakeFiles/main821.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=F:\CLion\CLionbook\Cpractice\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable main821.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\main821.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main821.dir/build: main821.exe

.PHONY : CMakeFiles/main821.dir/build

CMakeFiles/main821.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\main821.dir\cmake_clean.cmake
.PHONY : CMakeFiles/main821.dir/clean

CMakeFiles/main821.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" F:\CLion\CLionbook\Cpractice F:\CLion\CLionbook\Cpractice F:\CLion\CLionbook\Cpractice\cmake-build-debug F:\CLion\CLionbook\Cpractice\cmake-build-debug F:\CLion\CLionbook\Cpractice\cmake-build-debug\CMakeFiles\main821.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main821.dir/depend

