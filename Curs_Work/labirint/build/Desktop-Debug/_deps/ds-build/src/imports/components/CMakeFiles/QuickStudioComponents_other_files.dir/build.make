# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.28

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/clear/projects/CURS_WORK_NEW/labirint

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug

# Utility rule file for QuickStudioComponents_other_files.

# Include any custom commands dependencies for this target.
include _deps/ds-build/src/imports/components/CMakeFiles/QuickStudioComponents_other_files.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/ds-build/src/imports/components/CMakeFiles/QuickStudioComponents_other_files.dir/progress.make

QuickStudioComponents_other_files: _deps/ds-build/src/imports/components/CMakeFiles/QuickStudioComponents_other_files.dir/build.make
.PHONY : QuickStudioComponents_other_files

# Rule to build all files generated by this target.
_deps/ds-build/src/imports/components/CMakeFiles/QuickStudioComponents_other_files.dir/build: QuickStudioComponents_other_files
.PHONY : _deps/ds-build/src/imports/components/CMakeFiles/QuickStudioComponents_other_files.dir/build

_deps/ds-build/src/imports/components/CMakeFiles/QuickStudioComponents_other_files.dir/clean:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/components && $(CMAKE_COMMAND) -P CMakeFiles/QuickStudioComponents_other_files.dir/cmake_clean.cmake
.PHONY : _deps/ds-build/src/imports/components/CMakeFiles/QuickStudioComponents_other_files.dir/clean

_deps/ds-build/src/imports/components/CMakeFiles/QuickStudioComponents_other_files.dir/depend:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/clear/projects/CURS_WORK_NEW/labirint /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-src/src/imports/components /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/components /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/components/CMakeFiles/QuickStudioComponents_other_files.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : _deps/ds-build/src/imports/components/CMakeFiles/QuickStudioComponents_other_files.dir/depend

