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

# Include any dependencies generated for this target.
include _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/flags.make

_deps/ds-build/src/imports/tools/eventsimulator/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp: _deps/ds-src/src/imports/tools/eventsimulator/EventSimulator.qml
_deps/ds-build/src/imports/tools/eventsimulator/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp: _deps/ds-src/src/imports/tools/eventsimulator/EventSimulatorDelegate.qml
_deps/ds-build/src/imports/tools/eventsimulator/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp: _deps/ds-build/src/imports/tools/eventsimulator/.rcc/QuickStudioEventSimulator_raw_qml_0.qrc
_deps/ds-build/src/imports/tools/eventsimulator/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp: /usr/lib/qt6/libexec/rcc
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Running rcc for resource QuickStudioEventSimulator_raw_qml_0"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator && /usr/lib/qt6/libexec/rcc --output /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp --name QuickStudioEventSimulator_raw_qml_0 /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator/.rcc/QuickStudioEventSimulator_raw_qml_0.qrc

_deps/ds-build/src/imports/tools/eventsimulator/QuickStudioEventSimulator_resources_2_autogen/timestamp: /usr/lib/qt6/libexec/moc
_deps/ds-build/src/imports/tools/eventsimulator/QuickStudioEventSimulator_resources_2_autogen/timestamp: _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Automatic MOC and UIC for target QuickStudioEventSimulator_resources_2"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator && /usr/bin/cmake -E cmake_autogen /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2_autogen.dir/AutogenInfo.json Debug
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator && /usr/bin/cmake -E touch /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator/QuickStudioEventSimulator_resources_2_autogen/timestamp

_deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp.o: _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/flags.make
_deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp.o: _deps/ds-build/src/imports/tools/eventsimulator/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp
_deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp.o: _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp.o"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp.o -MF CMakeFiles/QuickStudioEventSimulator_resources_2.dir/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/QuickStudioEventSimulator_resources_2.dir/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp.o -c /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp

_deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QuickStudioEventSimulator_resources_2.dir/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp.i"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp > CMakeFiles/QuickStudioEventSimulator_resources_2.dir/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp.i

_deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QuickStudioEventSimulator_resources_2.dir/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp.s"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp -o CMakeFiles/QuickStudioEventSimulator_resources_2.dir/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp.s

_deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp.o: _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/flags.make
_deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp.o: _deps/ds-build/src/imports/tools/eventsimulator/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp
_deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp.o: _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp.o"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp.o -MF CMakeFiles/QuickStudioEventSimulator_resources_2.dir/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp.o.d -o CMakeFiles/QuickStudioEventSimulator_resources_2.dir/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp.o -c /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp

_deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QuickStudioEventSimulator_resources_2.dir/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp.i"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp > CMakeFiles/QuickStudioEventSimulator_resources_2.dir/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp.i

_deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QuickStudioEventSimulator_resources_2.dir/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp.s"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp -o CMakeFiles/QuickStudioEventSimulator_resources_2.dir/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp.s

QuickStudioEventSimulator_resources_2: _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/QuickStudioEventSimulator_resources_2_autogen/mocs_compilation.cpp.o
QuickStudioEventSimulator_resources_2: _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp.o
QuickStudioEventSimulator_resources_2: _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/build.make
.PHONY : QuickStudioEventSimulator_resources_2

# Rule to build all files generated by this target.
_deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/build: QuickStudioEventSimulator_resources_2
.PHONY : _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/build

_deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/clean:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator && $(CMAKE_COMMAND) -P CMakeFiles/QuickStudioEventSimulator_resources_2.dir/cmake_clean.cmake
.PHONY : _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/clean

_deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/depend: _deps/ds-build/src/imports/tools/eventsimulator/.rcc/qrc_QuickStudioEventSimulator_raw_qml_0.cpp
_deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/depend: _deps/ds-build/src/imports/tools/eventsimulator/QuickStudioEventSimulator_resources_2_autogen/timestamp
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/clear/projects/CURS_WORK_NEW/labirint /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-src/src/imports/tools/eventsimulator /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Debug/_deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : _deps/ds-build/src/imports/tools/eventsimulator/CMakeFiles/QuickStudioEventSimulator_resources_2.dir/depend

