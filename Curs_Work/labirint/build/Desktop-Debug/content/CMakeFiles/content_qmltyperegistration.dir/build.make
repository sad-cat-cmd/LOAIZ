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

# Utility rule file for content_qmltyperegistration.

# Include any custom commands dependencies for this target.
include content/CMakeFiles/content_qmltyperegistration.dir/compiler_depend.make

# Include the progress variables for this target.
include content/CMakeFiles/content_qmltyperegistration.dir/progress.make

content/CMakeFiles/content_qmltyperegistration: content/content_qmltyperegistrations.cpp
content/CMakeFiles/content_qmltyperegistration: qml/content/content.qmltypes

content/content_qmltyperegistrations.cpp: content/qmltypes/content_foreign_types.txt
content/content_qmltyperegistrations.cpp: content/meta_types/qt6content_debug_metatypes.json
content/content_qmltyperegistrations.cpp: /usr/lib/qt6/libexec/qmltyperegistrar
content/content_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6qml_none_metatypes.json
content/content_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6core_none_metatypes.json
content/content_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6network_none_metatypes.json
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic QML type registration for target content"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content && /usr/lib/qt6/libexec/qmltyperegistrar --generate-qmltypes=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/qml/content/content.qmltypes --import-name=content --major-version=1 --minor-version=0 @/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content/qmltypes/content_foreign_types.txt -o /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content/content_qmltyperegistrations.cpp /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content/meta_types/qt6content_debug_metatypes.json
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content && /usr/bin/cmake -E make_directory /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content/.generated
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content && /usr/bin/cmake -E touch /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content/.generated/content.qmltypes

qml/content/content.qmltypes: content/content_qmltyperegistrations.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate qml/content/content.qmltypes

content/meta_types/qt6content_debug_metatypes.json.gen: /usr/lib/qt6/libexec/moc
content/meta_types/qt6content_debug_metatypes.json.gen: content/meta_types/content_json_file_list.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Running moc --collect-json for target content"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content && /usr/lib/qt6/libexec/moc -o /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content/meta_types/qt6content_debug_metatypes.json.gen --collect-json @/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content/meta_types/content_json_file_list.txt
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content && /usr/bin/cmake -E copy_if_different /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content/meta_types/qt6content_debug_metatypes.json.gen /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content/meta_types/qt6content_debug_metatypes.json

content/meta_types/qt6content_debug_metatypes.json: content/meta_types/qt6content_debug_metatypes.json.gen
	@$(CMAKE_COMMAND) -E touch_nocreate content/meta_types/qt6content_debug_metatypes.json

content_qmltyperegistration: content/CMakeFiles/content_qmltyperegistration
content_qmltyperegistration: content/content_qmltyperegistrations.cpp
content_qmltyperegistration: content/meta_types/qt6content_debug_metatypes.json
content_qmltyperegistration: content/meta_types/qt6content_debug_metatypes.json.gen
content_qmltyperegistration: qml/content/content.qmltypes
content_qmltyperegistration: content/CMakeFiles/content_qmltyperegistration.dir/build.make
.PHONY : content_qmltyperegistration

# Rule to build all files generated by this target.
content/CMakeFiles/content_qmltyperegistration.dir/build: content_qmltyperegistration
.PHONY : content/CMakeFiles/content_qmltyperegistration.dir/build

content/CMakeFiles/content_qmltyperegistration.dir/clean:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content && $(CMAKE_COMMAND) -P CMakeFiles/content_qmltyperegistration.dir/cmake_clean.cmake
.PHONY : content/CMakeFiles/content_qmltyperegistration.dir/clean

content/CMakeFiles/content_qmltyperegistration.dir/depend:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/clear/projects/CURS_WORK_NEW/labirint /home/clear/projects/CURS_WORK_NEW/labirint/content /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/content/CMakeFiles/content_qmltyperegistration.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : content/CMakeFiles/content_qmltyperegistration.dir/depend

