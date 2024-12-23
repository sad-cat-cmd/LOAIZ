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

# Utility rule file for labirintApp_qmltyperegistration.

# Include any custom commands dependencies for this target.
include CMakeFiles/labirintApp_qmltyperegistration.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/labirintApp_qmltyperegistration.dir/progress.make

CMakeFiles/labirintApp_qmltyperegistration: labirintapp_qmltyperegistrations.cpp
CMakeFiles/labirintApp_qmltyperegistration: qml/Main/labirintApp.qmltypes

labirintapp_qmltyperegistrations.cpp: qmltypes/labirintApp_foreign_types.txt
labirintapp_qmltyperegistrations.cpp: meta_types/qt6labirintapp_debug_metatypes.json
labirintapp_qmltyperegistrations.cpp: /usr/lib/qt6/libexec/qmltyperegistrar
labirintapp_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6core_none_metatypes.json
labirintapp_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6gui_none_metatypes.json
labirintapp_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6qml_none_metatypes.json
labirintapp_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6network_none_metatypes.json
labirintapp_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6quick_none_metatypes.json
labirintapp_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6qmlmodels_none_metatypes.json
labirintapp_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6opengl_none_metatypes.json
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic QML type registration for target labirintApp"
	/usr/lib/qt6/libexec/qmltyperegistrar --generate-qmltypes=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/qml/Main/labirintApp.qmltypes --import-name=Main --major-version=1 --minor-version=0 @/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/qmltypes/labirintApp_foreign_types.txt -o /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/labirintapp_qmltyperegistrations.cpp /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/meta_types/qt6labirintapp_debug_metatypes.json
	/usr/bin/cmake -E make_directory /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/.generated
	/usr/bin/cmake -E touch /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/.generated/labirintApp.qmltypes

qml/Main/labirintApp.qmltypes: labirintapp_qmltyperegistrations.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate qml/Main/labirintApp.qmltypes

meta_types/qt6labirintapp_debug_metatypes.json.gen: /usr/lib/qt6/libexec/moc
meta_types/qt6labirintapp_debug_metatypes.json.gen: meta_types/labirintApp_json_file_list.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Running moc --collect-json for target labirintApp"
	/usr/lib/qt6/libexec/moc -o /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/meta_types/qt6labirintapp_debug_metatypes.json.gen --collect-json @/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/meta_types/labirintApp_json_file_list.txt
	/usr/bin/cmake -E copy_if_different /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/meta_types/qt6labirintapp_debug_metatypes.json.gen /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/meta_types/qt6labirintapp_debug_metatypes.json

meta_types/qt6labirintapp_debug_metatypes.json: meta_types/qt6labirintapp_debug_metatypes.json.gen
	@$(CMAKE_COMMAND) -E touch_nocreate meta_types/qt6labirintapp_debug_metatypes.json

labirintApp_qmltyperegistration: CMakeFiles/labirintApp_qmltyperegistration
labirintApp_qmltyperegistration: labirintapp_qmltyperegistrations.cpp
labirintApp_qmltyperegistration: meta_types/qt6labirintapp_debug_metatypes.json
labirintApp_qmltyperegistration: meta_types/qt6labirintapp_debug_metatypes.json.gen
labirintApp_qmltyperegistration: qml/Main/labirintApp.qmltypes
labirintApp_qmltyperegistration: CMakeFiles/labirintApp_qmltyperegistration.dir/build.make
.PHONY : labirintApp_qmltyperegistration

# Rule to build all files generated by this target.
CMakeFiles/labirintApp_qmltyperegistration.dir/build: labirintApp_qmltyperegistration
.PHONY : CMakeFiles/labirintApp_qmltyperegistration.dir/build

CMakeFiles/labirintApp_qmltyperegistration.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/labirintApp_qmltyperegistration.dir/cmake_clean.cmake
.PHONY : CMakeFiles/labirintApp_qmltyperegistration.dir/clean

CMakeFiles/labirintApp_qmltyperegistration.dir/depend:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/clear/projects/CURS_WORK_NEW/labirint /home/clear/projects/CURS_WORK_NEW/labirint /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/CMakeFiles/labirintApp_qmltyperegistration.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/labirintApp_qmltyperegistration.dir/depend

