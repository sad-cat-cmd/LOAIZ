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

# Utility rule file for content_qmllint_json.

# Include any custom commands dependencies for this target.
include content/CMakeFiles/content_qmllint_json.dir/compiler_depend.make

# Include the progress variables for this target.
include content/CMakeFiles/content_qmllint_json.dir/progress.make

content/CMakeFiles/content_qmllint_json: /usr/lib/qt6/bin/qmllint
content/CMakeFiles/content_qmllint_json: /home/clear/projects/CURS_WORK_NEW/labirint/content/App.qml
content/CMakeFiles/content_qmllint_json: /home/clear/projects/CURS_WORK_NEW/labirint/content/Screen01.ui.qml
	cd /home/clear/projects/CURS_WORK_NEW/labirint/content && /usr/lib/qt6/bin/qmllint --bare -I /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/qml -I /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/qml -I /usr/lib/x86_64-linux-gnu/qt6/qml --resource /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content/.rcc/qmake_content.qrc --resource /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content/.rcc/content_raw_qml_0.qrc /home/clear/projects/CURS_WORK_NEW/labirint/content/App.qml /home/clear/projects/CURS_WORK_NEW/labirint/content/Screen01.ui.qml --json /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content_qmllint.json

content_qmllint_json: content/CMakeFiles/content_qmllint_json
content_qmllint_json: content/CMakeFiles/content_qmllint_json.dir/build.make
.PHONY : content_qmllint_json

# Rule to build all files generated by this target.
content/CMakeFiles/content_qmllint_json.dir/build: content_qmllint_json
.PHONY : content/CMakeFiles/content_qmllint_json.dir/build

content/CMakeFiles/content_qmllint_json.dir/clean:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content && $(CMAKE_COMMAND) -P CMakeFiles/content_qmllint_json.dir/cmake_clean.cmake
.PHONY : content/CMakeFiles/content_qmllint_json.dir/clean

content/CMakeFiles/content_qmllint_json.dir/depend:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/clear/projects/CURS_WORK_NEW/labirint /home/clear/projects/CURS_WORK_NEW/labirint/content /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content/CMakeFiles/content_qmllint_json.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : content/CMakeFiles/content_qmllint_json.dir/depend

