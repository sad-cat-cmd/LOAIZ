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

# Utility rule file for QuickStudioMultiText_qmltyperegistration.

# Include any custom commands dependencies for this target.
include _deps/ds-build/src/imports/multitext/CMakeFiles/QuickStudioMultiText_qmltyperegistration.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/ds-build/src/imports/multitext/CMakeFiles/QuickStudioMultiText_qmltyperegistration.dir/progress.make

_deps/ds-build/src/imports/multitext/CMakeFiles/QuickStudioMultiText_qmltyperegistration: _deps/ds-build/src/imports/multitext/quickstudiomultitext_qmltyperegistrations.cpp
_deps/ds-build/src/imports/multitext/CMakeFiles/QuickStudioMultiText_qmltyperegistration: qml/QtQuick/Studio/MultiText/QuickStudioMultiText.qmltypes

_deps/ds-build/src/imports/multitext/quickstudiomultitext_qmltyperegistrations.cpp: _deps/ds-build/src/imports/multitext/qmltypes/QuickStudioMultiText_foreign_types.txt
_deps/ds-build/src/imports/multitext/quickstudiomultitext_qmltyperegistrations.cpp: _deps/ds-build/src/imports/multitext/meta_types/qt6quickstudiomultitext_release_metatypes.json
_deps/ds-build/src/imports/multitext/quickstudiomultitext_qmltyperegistrations.cpp: /usr/lib/qt6/libexec/qmltyperegistrar
_deps/ds-build/src/imports/multitext/quickstudiomultitext_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6qml_none_metatypes.json
_deps/ds-build/src/imports/multitext/quickstudiomultitext_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6core_none_metatypes.json
_deps/ds-build/src/imports/multitext/quickstudiomultitext_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6network_none_metatypes.json
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic QML type registration for target QuickStudioMultiText"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext && /usr/lib/qt6/libexec/qmltyperegistrar --generate-qmltypes=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/qml/QtQuick/Studio/MultiText/QuickStudioMultiText.qmltypes --import-name=QtQuick.Studio.MultiText --major-version=6 --minor-version=4 --past-major-version 1 @/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext/qmltypes/QuickStudioMultiText_foreign_types.txt -o /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext/quickstudiomultitext_qmltyperegistrations.cpp /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext/meta_types/qt6quickstudiomultitext_release_metatypes.json
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext && /usr/bin/cmake -E make_directory /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext/.generated
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext && /usr/bin/cmake -E touch /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext/.generated/QuickStudioMultiText.qmltypes

qml/QtQuick/Studio/MultiText/QuickStudioMultiText.qmltypes: _deps/ds-build/src/imports/multitext/quickstudiomultitext_qmltyperegistrations.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate qml/QtQuick/Studio/MultiText/QuickStudioMultiText.qmltypes

_deps/ds-build/src/imports/multitext/meta_types/qt6quickstudiomultitext_release_metatypes.json.gen: /usr/lib/qt6/libexec/moc
_deps/ds-build/src/imports/multitext/meta_types/qt6quickstudiomultitext_release_metatypes.json.gen: _deps/ds-build/src/imports/multitext/meta_types/QuickStudioMultiText_json_file_list.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Running moc --collect-json for target QuickStudioMultiText"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext && /usr/lib/qt6/libexec/moc -o /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext/meta_types/qt6quickstudiomultitext_release_metatypes.json.gen --collect-json @/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext/meta_types/QuickStudioMultiText_json_file_list.txt
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext && /usr/bin/cmake -E copy_if_different /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext/meta_types/qt6quickstudiomultitext_release_metatypes.json.gen /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext/meta_types/qt6quickstudiomultitext_release_metatypes.json

_deps/ds-build/src/imports/multitext/meta_types/qt6quickstudiomultitext_release_metatypes.json: _deps/ds-build/src/imports/multitext/meta_types/qt6quickstudiomultitext_release_metatypes.json.gen
	@$(CMAKE_COMMAND) -E touch_nocreate _deps/ds-build/src/imports/multitext/meta_types/qt6quickstudiomultitext_release_metatypes.json

QuickStudioMultiText_qmltyperegistration: _deps/ds-build/src/imports/multitext/CMakeFiles/QuickStudioMultiText_qmltyperegistration
QuickStudioMultiText_qmltyperegistration: _deps/ds-build/src/imports/multitext/meta_types/qt6quickstudiomultitext_release_metatypes.json
QuickStudioMultiText_qmltyperegistration: _deps/ds-build/src/imports/multitext/meta_types/qt6quickstudiomultitext_release_metatypes.json.gen
QuickStudioMultiText_qmltyperegistration: _deps/ds-build/src/imports/multitext/quickstudiomultitext_qmltyperegistrations.cpp
QuickStudioMultiText_qmltyperegistration: qml/QtQuick/Studio/MultiText/QuickStudioMultiText.qmltypes
QuickStudioMultiText_qmltyperegistration: _deps/ds-build/src/imports/multitext/CMakeFiles/QuickStudioMultiText_qmltyperegistration.dir/build.make
.PHONY : QuickStudioMultiText_qmltyperegistration

# Rule to build all files generated by this target.
_deps/ds-build/src/imports/multitext/CMakeFiles/QuickStudioMultiText_qmltyperegistration.dir/build: QuickStudioMultiText_qmltyperegistration
.PHONY : _deps/ds-build/src/imports/multitext/CMakeFiles/QuickStudioMultiText_qmltyperegistration.dir/build

_deps/ds-build/src/imports/multitext/CMakeFiles/QuickStudioMultiText_qmltyperegistration.dir/clean:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext && $(CMAKE_COMMAND) -P CMakeFiles/QuickStudioMultiText_qmltyperegistration.dir/cmake_clean.cmake
.PHONY : _deps/ds-build/src/imports/multitext/CMakeFiles/QuickStudioMultiText_qmltyperegistration.dir/clean

_deps/ds-build/src/imports/multitext/CMakeFiles/QuickStudioMultiText_qmltyperegistration.dir/depend:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/clear/projects/CURS_WORK_NEW/labirint /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-src/src/imports/multitext /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/multitext/CMakeFiles/QuickStudioMultiText_qmltyperegistration.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : _deps/ds-build/src/imports/multitext/CMakeFiles/QuickStudioMultiText_qmltyperegistration.dir/depend

