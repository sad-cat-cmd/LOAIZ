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
include _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/compiler_depend.make

# Include the progress variables for this target.
include _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/progress.make

# Include the compile flags for this target's objects.
include _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/flags.make

_deps/ds-build/src/imports/utils/QuickStudioUtilsplugin_init_autogen/timestamp: /usr/lib/qt6/libexec/moc
_deps/ds-build/src/imports/utils/QuickStudioUtilsplugin_init_autogen/timestamp: _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --blue --bold --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target QuickStudioUtilsplugin_init"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils && /usr/bin/cmake -E cmake_autogen /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init_autogen.dir/AutogenInfo.json Release
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils && /usr/bin/cmake -E touch /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils/QuickStudioUtilsplugin_init_autogen/timestamp

_deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp.o: _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/flags.make
_deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp.o: _deps/ds-build/src/imports/utils/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp
_deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp.o: _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp.o"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp.o -MF CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp.o.d -o CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp.o -c /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp

_deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp.i"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp > CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp.i

_deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp.s"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp -o CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp.s

_deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init.cpp.o: _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/flags.make
_deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init.cpp.o: _deps/ds-build/src/imports/utils/QuickStudioUtilsplugin_init.cpp
_deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init.cpp.o: _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init.cpp.o"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init.cpp.o -MF CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init.cpp.o.d -o CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init.cpp.o -c /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils/QuickStudioUtilsplugin_init.cpp

_deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init.cpp.i"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils/QuickStudioUtilsplugin_init.cpp > CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init.cpp.i

_deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init.cpp.s"
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils && /usr/bin/x86_64-linux-gnu-g++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils/QuickStudioUtilsplugin_init.cpp -o CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init.cpp.s

QuickStudioUtilsplugin_init: _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init_autogen/mocs_compilation.cpp.o
QuickStudioUtilsplugin_init: _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/QuickStudioUtilsplugin_init.cpp.o
QuickStudioUtilsplugin_init: _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/build.make
.PHONY : QuickStudioUtilsplugin_init

# Rule to build all files generated by this target.
_deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/build: QuickStudioUtilsplugin_init
.PHONY : _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/build

_deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/clean:
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils && $(CMAKE_COMMAND) -P CMakeFiles/QuickStudioUtilsplugin_init.dir/cmake_clean.cmake
.PHONY : _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/clean

_deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/depend: _deps/ds-build/src/imports/utils/QuickStudioUtilsplugin_init_autogen/timestamp
	cd /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/clear/projects/CURS_WORK_NEW/labirint /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-src/src/imports/utils /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils /home/clear/projects/CURS_WORK_NEW/labirint/build/Desktop-Release/_deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : _deps/ds-build/src/imports/utils/CMakeFiles/QuickStudioUtilsplugin_init.dir/depend

