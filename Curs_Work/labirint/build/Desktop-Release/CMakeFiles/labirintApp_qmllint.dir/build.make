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

# Utility rule file for labirintApp_qmllint.

# Include any custom commands dependencies for this target.
include CMakeFiles/labirintApp_qmllint.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/labirintApp_qmllint.dir/progress.make

CMakeFiles/labirintApp_qmllint: /usr/lib/qt6/bin/qmllint
CMakeFiles/labirintApp_qmllint: /home/clear/projects/CURS_WORK_NEW/labirint/main.qml
	cd /home/clear/projects/CURS_WORK_NEW/labirint && /usr/lib/qt6/bin/qmllint --bare -I /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release -I /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/qml -I /usr/lib/x86_64-linux-gnu/qt6/qml --resource /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/.rcc/configuration.qrc --resource /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/.rcc/qmake_Main.qrc --resource /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/.rcc/labirintApp_raw_qml_0.qrc /home/clear/projects/CURS_WORK_NEW/labirint/main.qml

labirintApp_qmllint: CMakeFiles/labirintApp_qmllint
labirintApp_qmllint: CMakeFiles/labirintApp_qmllint.dir/build.make
.PHONY : labirintApp_qmllint

# Rule to build all files generated by this target.
CMakeFiles/labirintApp_qmllint.dir/build: labirintApp_qmllint
.PHONY : CMakeFiles/labirintApp_qmllint.dir/build

CMakeFiles/labirintApp_qmllint.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/labirintApp_qmllint.dir/cmake_clean.cmake
.PHONY : CMakeFiles/labirintApp_qmllint.dir/clean

CMakeFiles/labirintApp_qmllint.dir/depend:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/clear/projects/CURS_WORK_NEW/labirint /home/clear/projects/CURS_WORK_NEW/labirint /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/CMakeFiles/labirintApp_qmllint.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/labirintApp_qmllint.dir/depend
