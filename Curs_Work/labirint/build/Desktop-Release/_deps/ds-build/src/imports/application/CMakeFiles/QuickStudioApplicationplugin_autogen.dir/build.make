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
CMAKE_BINARY_DIR = /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release

# Utility rule file for QuickStudioApplicationplugin_autogen.

# Include any custom commands dependencies for this target.
include _deps/ds-build/src/imports/application/CMakeFiles/QuickStudioApplicationplugin_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/ds-build/src/imports/application/CMakeFiles/QuickStudioApplicationplugin_autogen.dir/progress.make

_deps/ds-build/src/imports/application/CMakeFiles/QuickStudioApplicationplugin_autogen: _deps/ds-build/src/imports/application/QuickStudioApplicationplugin_autogen/timestamp

_deps/ds-build/src/imports/application/QuickStudioApplicationplugin_autogen/timestamp: /usr/lib/qt6/libexec/moc
_deps/ds-build/src/imports/application/QuickStudioApplicationplugin_autogen/timestamp: _deps/ds-build/src/imports/application/CMakeFiles/QuickStudioApplicationplugin_autogen.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target QuickStudioApplicationplugin"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/application && /usr/bin/cmake -E cmake_autogen /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/application/CMakeFiles/QuickStudioApplicationplugin_autogen.dir/AutogenInfo.json Release
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/application && /usr/bin/cmake -E touch /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/application/QuickStudioApplicationplugin_autogen/timestamp

QuickStudioApplicationplugin_autogen: _deps/ds-build/src/imports/application/CMakeFiles/QuickStudioApplicationplugin_autogen
QuickStudioApplicationplugin_autogen: _deps/ds-build/src/imports/application/QuickStudioApplicationplugin_autogen/timestamp
QuickStudioApplicationplugin_autogen: _deps/ds-build/src/imports/application/CMakeFiles/QuickStudioApplicationplugin_autogen.dir/build.make
.PHONY : QuickStudioApplicationplugin_autogen

# Rule to build all files generated by this target.
_deps/ds-build/src/imports/application/CMakeFiles/QuickStudioApplicationplugin_autogen.dir/build: QuickStudioApplicationplugin_autogen
.PHONY : _deps/ds-build/src/imports/application/CMakeFiles/QuickStudioApplicationplugin_autogen.dir/build

_deps/ds-build/src/imports/application/CMakeFiles/QuickStudioApplicationplugin_autogen.dir/clean:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/application && $(CMAKE_COMMAND) -P CMakeFiles/QuickStudioApplicationplugin_autogen.dir/cmake_clean.cmake
.PHONY : _deps/ds-build/src/imports/application/CMakeFiles/QuickStudioApplicationplugin_autogen.dir/clean

_deps/ds-build/src/imports/application/CMakeFiles/QuickStudioApplicationplugin_autogen.dir/depend:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/clear/projects/CURS_WORK_NEW/labirint /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-src/src/imports/application /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/application /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/application/CMakeFiles/QuickStudioApplicationplugin_autogen.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : _deps/ds-build/src/imports/application/CMakeFiles/QuickStudioApplicationplugin_autogen.dir/depend

