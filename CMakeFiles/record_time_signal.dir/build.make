# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/pi/Downloads/wsjtx

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/pi/Downloads/wsjtx

# Include any dependencies generated for this target.
include CMakeFiles/record_time_signal.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/record_time_signal.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/record_time_signal.dir/flags.make

CMakeFiles/record_time_signal.dir/record_time_signal_autogen/mocs_compilation.cpp.o: CMakeFiles/record_time_signal.dir/flags.make
CMakeFiles/record_time_signal.dir/record_time_signal_autogen/mocs_compilation.cpp.o: record_time_signal_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Downloads/wsjtx/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/record_time_signal.dir/record_time_signal_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/record_time_signal.dir/record_time_signal_autogen/mocs_compilation.cpp.o -c /home/pi/Downloads/wsjtx/record_time_signal_autogen/mocs_compilation.cpp

CMakeFiles/record_time_signal.dir/record_time_signal_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/record_time_signal.dir/record_time_signal_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Downloads/wsjtx/record_time_signal_autogen/mocs_compilation.cpp > CMakeFiles/record_time_signal.dir/record_time_signal_autogen/mocs_compilation.cpp.i

CMakeFiles/record_time_signal.dir/record_time_signal_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/record_time_signal.dir/record_time_signal_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Downloads/wsjtx/record_time_signal_autogen/mocs_compilation.cpp -o CMakeFiles/record_time_signal.dir/record_time_signal_autogen/mocs_compilation.cpp.s

CMakeFiles/record_time_signal.dir/Audio/tools/record_time_signal.cpp.o: CMakeFiles/record_time_signal.dir/flags.make
CMakeFiles/record_time_signal.dir/Audio/tools/record_time_signal.cpp.o: Audio/tools/record_time_signal.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Downloads/wsjtx/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/record_time_signal.dir/Audio/tools/record_time_signal.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/record_time_signal.dir/Audio/tools/record_time_signal.cpp.o -c /home/pi/Downloads/wsjtx/Audio/tools/record_time_signal.cpp

CMakeFiles/record_time_signal.dir/Audio/tools/record_time_signal.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/record_time_signal.dir/Audio/tools/record_time_signal.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Downloads/wsjtx/Audio/tools/record_time_signal.cpp > CMakeFiles/record_time_signal.dir/Audio/tools/record_time_signal.cpp.i

CMakeFiles/record_time_signal.dir/Audio/tools/record_time_signal.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/record_time_signal.dir/Audio/tools/record_time_signal.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Downloads/wsjtx/Audio/tools/record_time_signal.cpp -o CMakeFiles/record_time_signal.dir/Audio/tools/record_time_signal.cpp.s

# Object files for target record_time_signal
record_time_signal_OBJECTS = \
"CMakeFiles/record_time_signal.dir/record_time_signal_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/record_time_signal.dir/Audio/tools/record_time_signal.cpp.o"

# External object files for target record_time_signal
record_time_signal_EXTERNAL_OBJECTS =

record_time_signal: CMakeFiles/record_time_signal.dir/record_time_signal_autogen/mocs_compilation.cpp.o
record_time_signal: CMakeFiles/record_time_signal.dir/Audio/tools/record_time_signal.cpp.o
record_time_signal: CMakeFiles/record_time_signal.dir/build.make
record_time_signal: libwsjt_cxx.a
record_time_signal: libwsjt_qtmm.a
record_time_signal: libwsjt_qt.a
record_time_signal: /usr/lib/arm-linux-gnueabihf/libQt5Multimedia.so.5.11.3
record_time_signal: /usr/local/lib/libhamlib.so
record_time_signal: /usr/lib/arm-linux-gnueabihf/libboost_log.so
record_time_signal: /usr/lib/arm-linux-gnueabihf/libboost_log_setup.so
record_time_signal: /usr/lib/arm-linux-gnueabihf/libboost_filesystem.so
record_time_signal: /usr/lib/arm-linux-gnueabihf/libboost_thread.so
record_time_signal: /usr/lib/arm-linux-gnueabihf/libboost_date_time.so
record_time_signal: /usr/lib/arm-linux-gnueabihf/libboost_regex.so
record_time_signal: /usr/lib/arm-linux-gnueabihf/libboost_chrono.so
record_time_signal: /usr/lib/arm-linux-gnueabihf/libboost_system.so
record_time_signal: /usr/lib/arm-linux-gnueabihf/libboost_atomic.so
record_time_signal: libqcp.a
record_time_signal: /usr/lib/arm-linux-gnueabihf/libQt5PrintSupport.so.5.11.3
record_time_signal: /usr/lib/arm-linux-gnueabihf/libQt5Widgets.so.5.11.3
record_time_signal: /usr/lib/arm-linux-gnueabihf/libQt5Gui.so.5.11.3
record_time_signal: /usr/lib/arm-linux-gnueabihf/libQt5Network.so.5.11.3
record_time_signal: /usr/lib/arm-linux-gnueabihf/libQt5Sql.so.5.11.3
record_time_signal: /usr/lib/arm-linux-gnueabihf/libQt5Core.so.5.11.3
record_time_signal: CMakeFiles/record_time_signal.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/Downloads/wsjtx/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable record_time_signal"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/record_time_signal.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/record_time_signal.dir/build: record_time_signal

.PHONY : CMakeFiles/record_time_signal.dir/build

CMakeFiles/record_time_signal.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/record_time_signal.dir/cmake_clean.cmake
.PHONY : CMakeFiles/record_time_signal.dir/clean

CMakeFiles/record_time_signal.dir/depend:
	cd /home/pi/Downloads/wsjtx && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/Downloads/wsjtx /home/pi/Downloads/wsjtx /home/pi/Downloads/wsjtx /home/pi/Downloads/wsjtx /home/pi/Downloads/wsjtx/CMakeFiles/record_time_signal.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/record_time_signal.dir/depend

