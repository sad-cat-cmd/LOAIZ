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

# Utility rule file for labirint_qmltyperegistration.

# Include any custom commands dependencies for this target.
include imports/labirint/CMakeFiles/labirint_qmltyperegistration.dir/compiler_depend.make

# Include the progress variables for this target.
include imports/labirint/CMakeFiles/labirint_qmltyperegistration.dir/progress.make

imports/labirint/CMakeFiles/labirint_qmltyperegistration: imports/labirint/labirint_qmltyperegistrations.cpp
imports/labirint/CMakeFiles/labirint_qmltyperegistration: qml/labirint/labirint.qmltypes

imports/labirint/labirint_qmltyperegistrations.cpp: imports/labirint/qmltypes/labirint_foreign_types.txt
imports/labirint/labirint_qmltyperegistrations.cpp: imports/labirint/meta_types/qt6labirint_release_metatypes.json
imports/labirint/labirint_qmltyperegistrations.cpp: /usr/lib/qt6/libexec/qmltyperegistrar
imports/labirint/labirint_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6qml_none_metatypes.json
imports/labirint/labirint_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6core_none_metatypes.json
imports/labirint/labirint_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6network_none_metatypes.json
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic QML type registration for target labirint"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint && /usr/lib/qt6/libexec/qmltyperegistrar --generate-qmltypes=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/qml/labirint/labirint.qmltypes --import-name=labirint --major-version=1 --minor-version=0 @/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint/qmltypes/labirint_foreign_types.txt -o /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint/labirint_qmltyperegistrations.cpp /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint/meta_types/qt6labirint_release_metatypes.json
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint && /usr/bin/cmake -E make_directory /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint/.generated
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint && /usr/bin/cmake -E touch /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint/.generated/labirint.qmltypes

qml/labirint/labirint.qmltypes: imports/labirint/labirint_qmltyperegistrations.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate qml/labirint/labirint.qmltypes

imports/labirint/meta_types/qt6labirint_release_metatypes.json.gen: /usr/lib/qt6/libexec/moc
imports/labirint/meta_types/qt6labirint_release_metatypes.json.gen: imports/labirint/meta_types/labirint_json_file_list.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Running moc --collect-json for target labirint"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint && /usr/lib/qt6/libexec/moc -o /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint/meta_types/qt6labirint_release_metatypes.json.gen --collect-json @/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint/meta_types/labirint_json_file_list.txt
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint && /usr/bin/cmake -E copy_if_different /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint/meta_types/qt6labirint_release_metatypes.json.gen /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint/meta_types/qt6labirint_release_metatypes.json

imports/labirint/meta_types/qt6labirint_release_metatypes.json: imports/labirint/meta_types/qt6labirint_release_metatypes.json.gen
	@$(CMAKE_COMMAND) -E touch_nocreate imports/labirint/meta_types/qt6labirint_release_metatypes.json

labirint_qmltyperegistration: imports/labirint/CMakeFiles/labirint_qmltyperegistration
labirint_qmltyperegistration: imports/labirint/labirint_qmltyperegistrations.cpp
labirint_qmltyperegistration: imports/labirint/meta_types/qt6labirint_release_metatypes.json
labirint_qmltyperegistration: imports/labirint/meta_types/qt6labirint_release_metatypes.json.gen
labirint_qmltyperegistration: qml/labirint/labirint.qmltypes
labirint_qmltyperegistration: imports/labirint/CMakeFiles/labirint_qmltyperegistration.dir/build.make
.PHONY : labirint_qmltyperegistration

# Rule to build all files generated by this target.
imports/labirint/CMakeFiles/labirint_qmltyperegistration.dir/build: labirint_qmltyperegistration
.PHONY : imports/labirint/CMakeFiles/labirint_qmltyperegistration.dir/build

imports/labirint/CMakeFiles/labirint_qmltyperegistration.dir/clean:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint && $(CMAKE_COMMAND) -P CMakeFiles/labirint_qmltyperegistration.dir/cmake_clean.cmake
.PHONY : imports/labirint/CMakeFiles/labirint_qmltyperegistration.dir/clean

imports/labirint/CMakeFiles/labirint_qmltyperegistration.dir/depend:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/clear/projects/CURS_WORK_NEW/labirint /home/clear/projects/CURS_WORK_NEW/labirint/imports/labirint /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/imports/labirint/CMakeFiles/labirint_qmltyperegistration.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : imports/labirint/CMakeFiles/labirint_qmltyperegistration.dir/depend

