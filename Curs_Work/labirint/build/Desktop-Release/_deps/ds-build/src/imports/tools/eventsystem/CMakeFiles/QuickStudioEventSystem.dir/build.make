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

# Include any dependencies generated for this target.
include _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/flags.make

_deps/ds-build/src/imports/tools/eventsystem/meta_types/qt6quickstudioeventsystem_release_metatypes.json.gen: /usr/lib/qt6/libexec/moc
_deps/ds-build/src/imports/tools/eventsystem/meta_types/qt6quickstudioeventsystem_release_metatypes.json.gen: _deps/ds-build/src/imports/tools/eventsystem/meta_types/QuickStudioEventSystem_json_file_list.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running moc --collect-json for target QuickStudioEventSystem"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem && /usr/lib/qt6/libexec/moc -o /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/meta_types/qt6quickstudioeventsystem_release_metatypes.json.gen --collect-json @/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/meta_types/QuickStudioEventSystem_json_file_list.txt
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem && /usr/bin/cmake -E copy_if_different /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/meta_types/qt6quickstudioeventsystem_release_metatypes.json.gen /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/meta_types/qt6quickstudioeventsystem_release_metatypes.json

_deps/ds-build/src/imports/tools/eventsystem/meta_types/qt6quickstudioeventsystem_release_metatypes.json: _deps/ds-build/src/imports/tools/eventsystem/meta_types/qt6quickstudioeventsystem_release_metatypes.json.gen
	@$(CMAKE_COMMAND) -E touch_nocreate _deps/ds-build/src/imports/tools/eventsystem/meta_types/qt6quickstudioeventsystem_release_metatypes.json

_deps/ds-build/src/imports/tools/eventsystem/quickstudioeventsystem_qmltyperegistrations.cpp: _deps/ds-build/src/imports/tools/eventsystem/qmltypes/QuickStudioEventSystem_foreign_types.txt
_deps/ds-build/src/imports/tools/eventsystem/quickstudioeventsystem_qmltyperegistrations.cpp: _deps/ds-build/src/imports/tools/eventsystem/meta_types/qt6quickstudioeventsystem_release_metatypes.json
_deps/ds-build/src/imports/tools/eventsystem/quickstudioeventsystem_qmltyperegistrations.cpp: /usr/lib/qt6/libexec/qmltyperegistrar
_deps/ds-build/src/imports/tools/eventsystem/quickstudioeventsystem_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6qml_none_metatypes.json
_deps/ds-build/src/imports/tools/eventsystem/quickstudioeventsystem_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6core_none_metatypes.json
_deps/ds-build/src/imports/tools/eventsystem/quickstudioeventsystem_qmltyperegistrations.cpp: /usr/lib/x86_64-linux-gnu/metatypes/qt6network_none_metatypes.json
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Automatic QML type registration for target QuickStudioEventSystem"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem && /usr/lib/qt6/libexec/qmltyperegistrar --generate-qmltypes=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/qml/QtQuick/Studio/EventSystem/QuickStudioEventSystem.qmltypes --import-name=QtQuick.Studio.EventSystem --major-version=6 --minor-version=4 --past-major-version 1 @/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/qmltypes/QuickStudioEventSystem_foreign_types.txt -o /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/quickstudioeventsystem_qmltyperegistrations.cpp /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/meta_types/qt6quickstudioeventsystem_release_metatypes.json
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem && /usr/bin/cmake -E make_directory /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/.generated
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem && /usr/bin/cmake -E touch /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/.generated/QuickStudioEventSystem.qmltypes

qml/QtQuick/Studio/EventSystem/QuickStudioEventSystem.qmltypes: _deps/ds-build/src/imports/tools/eventsystem/quickstudioeventsystem_qmltyperegistrations.cpp
	@$(CMAKE_COMMAND) -E touch_nocreate qml/QtQuick/Studio/EventSystem/QuickStudioEventSystem.qmltypes

_deps/ds-build/src/imports/tools/eventsystem/QuickStudioEventSystem_autogen/timestamp: /usr/lib/qt6/libexec/moc
_deps/ds-build/src/imports/tools/eventsystem/QuickStudioEventSystem_autogen/timestamp: _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Automatic MOC and UIC for target QuickStudioEventSystem"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem && /usr/bin/cmake -E cmake_autogen /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem_autogen.dir/AutogenInfo.json Release
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem && /usr/bin/cmake -E touch /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/QuickStudioEventSystem_autogen/timestamp

_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/QuickStudioEventSystem_autogen/mocs_compilation.cpp.o: _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/flags.make
_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/QuickStudioEventSystem_autogen/mocs_compilation.cpp.o: _deps/ds-build/src/imports/tools/eventsystem/QuickStudioEventSystem_autogen/mocs_compilation.cpp
_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/QuickStudioEventSystem_autogen/mocs_compilation.cpp.o: _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/QuickStudioEventSystem_autogen/mocs_compilation.cpp.o"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/QuickStudioEventSystem_autogen/mocs_compilation.cpp.o -MF CMakeFiles/QuickStudioEventSystem.dir/QuickStudioEventSystem_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/QuickStudioEventSystem.dir/QuickStudioEventSystem_autogen/mocs_compilation.cpp.o -c /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/QuickStudioEventSystem_autogen/mocs_compilation.cpp

_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/QuickStudioEventSystem_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QuickStudioEventSystem.dir/QuickStudioEventSystem_autogen/mocs_compilation.cpp.i"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/QuickStudioEventSystem_autogen/mocs_compilation.cpp > CMakeFiles/QuickStudioEventSystem.dir/QuickStudioEventSystem_autogen/mocs_compilation.cpp.i

_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/QuickStudioEventSystem_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QuickStudioEventSystem.dir/QuickStudioEventSystem_autogen/mocs_compilation.cpp.s"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/QuickStudioEventSystem_autogen/mocs_compilation.cpp -o CMakeFiles/QuickStudioEventSystem.dir/QuickStudioEventSystem_autogen/mocs_compilation.cpp.s

_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/quickstudioeventsystem_qmltyperegistrations.cpp.o: _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/flags.make
_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/quickstudioeventsystem_qmltyperegistrations.cpp.o: _deps/ds-build/src/imports/tools/eventsystem/quickstudioeventsystem_qmltyperegistrations.cpp
_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/quickstudioeventsystem_qmltyperegistrations.cpp.o: _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/quickstudioeventsystem_qmltyperegistrations.cpp.o"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/quickstudioeventsystem_qmltyperegistrations.cpp.o -MF CMakeFiles/QuickStudioEventSystem.dir/quickstudioeventsystem_qmltyperegistrations.cpp.o.d -o CMakeFiles/QuickStudioEventSystem.dir/quickstudioeventsystem_qmltyperegistrations.cpp.o -c /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/quickstudioeventsystem_qmltyperegistrations.cpp

_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/quickstudioeventsystem_qmltyperegistrations.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QuickStudioEventSystem.dir/quickstudioeventsystem_qmltyperegistrations.cpp.i"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/quickstudioeventsystem_qmltyperegistrations.cpp > CMakeFiles/QuickStudioEventSystem.dir/quickstudioeventsystem_qmltyperegistrations.cpp.i

_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/quickstudioeventsystem_qmltyperegistrations.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QuickStudioEventSystem.dir/quickstudioeventsystem_qmltyperegistrations.cpp.s"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/quickstudioeventsystem_qmltyperegistrations.cpp -o CMakeFiles/QuickStudioEventSystem.dir/quickstudioeventsystem_qmltyperegistrations.cpp.s

# Object files for target QuickStudioEventSystem
QuickStudioEventSystem_OBJECTS = \
"CMakeFiles/QuickStudioEventSystem.dir/QuickStudioEventSystem_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/QuickStudioEventSystem.dir/quickstudioeventsystem_qmltyperegistrations.cpp.o"

# External object files for target QuickStudioEventSystem
QuickStudioEventSystem_EXTERNAL_OBJECTS =

_deps/ds-build/src/imports/tools/eventsystem/libQuickStudioEventSystem.a: _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/QuickStudioEventSystem_autogen/mocs_compilation.cpp.o
_deps/ds-build/src/imports/tools/eventsystem/libQuickStudioEventSystem.a: _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/quickstudioeventsystem_qmltyperegistrations.cpp.o
_deps/ds-build/src/imports/tools/eventsystem/libQuickStudioEventSystem.a: _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/build.make
_deps/ds-build/src/imports/tools/eventsystem/libQuickStudioEventSystem.a: _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Linking CXX static library libQuickStudioEventSystem.a"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem && $(CMAKE_COMMAND) -P CMakeFiles/QuickStudioEventSystem.dir/cmake_clean_target.cmake
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/QuickStudioEventSystem.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/build: _deps/ds-build/src/imports/tools/eventsystem/libQuickStudioEventSystem.a
.PHONY : _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/build

_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/clean:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem && $(CMAKE_COMMAND) -P CMakeFiles/QuickStudioEventSystem.dir/cmake_clean.cmake
.PHONY : _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/clean

_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/depend: _deps/ds-build/src/imports/tools/eventsystem/QuickStudioEventSystem_autogen/timestamp
_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/depend: _deps/ds-build/src/imports/tools/eventsystem/meta_types/qt6quickstudioeventsystem_release_metatypes.json
_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/depend: _deps/ds-build/src/imports/tools/eventsystem/meta_types/qt6quickstudioeventsystem_release_metatypes.json.gen
_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/depend: _deps/ds-build/src/imports/tools/eventsystem/quickstudioeventsystem_qmltyperegistrations.cpp
_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/depend: qml/QtQuick/Studio/EventSystem/QuickStudioEventSystem.qmltypes
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/clear/projects/CURS_WORK_NEW/labirint /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-src/src/imports/tools/eventsystem /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : _deps/ds-build/src/imports/tools/eventsystem/CMakeFiles/QuickStudioEventSystem.dir/depend

