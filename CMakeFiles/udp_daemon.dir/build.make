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
include CMakeFiles/udp_daemon.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/udp_daemon.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/udp_daemon.dir/flags.make

CMakeFiles/udp_daemon.dir/udp_daemon_autogen/mocs_compilation.cpp.o: CMakeFiles/udp_daemon.dir/flags.make
CMakeFiles/udp_daemon.dir/udp_daemon_autogen/mocs_compilation.cpp.o: udp_daemon_autogen/mocs_compilation.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Downloads/wsjtx/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/udp_daemon.dir/udp_daemon_autogen/mocs_compilation.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/udp_daemon.dir/udp_daemon_autogen/mocs_compilation.cpp.o -c /home/pi/Downloads/wsjtx/udp_daemon_autogen/mocs_compilation.cpp

CMakeFiles/udp_daemon.dir/udp_daemon_autogen/mocs_compilation.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/udp_daemon.dir/udp_daemon_autogen/mocs_compilation.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Downloads/wsjtx/udp_daemon_autogen/mocs_compilation.cpp > CMakeFiles/udp_daemon.dir/udp_daemon_autogen/mocs_compilation.cpp.i

CMakeFiles/udp_daemon.dir/udp_daemon_autogen/mocs_compilation.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/udp_daemon.dir/udp_daemon_autogen/mocs_compilation.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Downloads/wsjtx/udp_daemon_autogen/mocs_compilation.cpp -o CMakeFiles/udp_daemon.dir/udp_daemon_autogen/mocs_compilation.cpp.s

CMakeFiles/udp_daemon.dir/UDPExamples/UDPDaemon.cpp.o: CMakeFiles/udp_daemon.dir/flags.make
CMakeFiles/udp_daemon.dir/UDPExamples/UDPDaemon.cpp.o: UDPExamples/UDPDaemon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Downloads/wsjtx/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/udp_daemon.dir/UDPExamples/UDPDaemon.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/udp_daemon.dir/UDPExamples/UDPDaemon.cpp.o -c /home/pi/Downloads/wsjtx/UDPExamples/UDPDaemon.cpp

CMakeFiles/udp_daemon.dir/UDPExamples/UDPDaemon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/udp_daemon.dir/UDPExamples/UDPDaemon.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/pi/Downloads/wsjtx/UDPExamples/UDPDaemon.cpp > CMakeFiles/udp_daemon.dir/UDPExamples/UDPDaemon.cpp.i

CMakeFiles/udp_daemon.dir/UDPExamples/UDPDaemon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/udp_daemon.dir/UDPExamples/UDPDaemon.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/pi/Downloads/wsjtx/UDPExamples/UDPDaemon.cpp -o CMakeFiles/udp_daemon.dir/UDPExamples/UDPDaemon.cpp.s

# Object files for target udp_daemon
udp_daemon_OBJECTS = \
"CMakeFiles/udp_daemon.dir/udp_daemon_autogen/mocs_compilation.cpp.o" \
"CMakeFiles/udp_daemon.dir/UDPExamples/UDPDaemon.cpp.o"

# External object files for target udp_daemon
udp_daemon_EXTERNAL_OBJECTS =

udp_daemon: CMakeFiles/udp_daemon.dir/udp_daemon_autogen/mocs_compilation.cpp.o
udp_daemon: CMakeFiles/udp_daemon.dir/UDPExamples/UDPDaemon.cpp.o
udp_daemon: CMakeFiles/udp_daemon.dir/build.make
udp_daemon: libwsjtx_udp.a
udp_daemon: /usr/lib/arm-linux-gnueabihf/libQt5Network.so.5.11.3
udp_daemon: /usr/lib/arm-linux-gnueabihf/libQt5Gui.so.5.11.3
udp_daemon: /usr/lib/arm-linux-gnueabihf/libQt5Core.so.5.11.3
udp_daemon: CMakeFiles/udp_daemon.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/Downloads/wsjtx/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable udp_daemon"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/udp_daemon.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/udp_daemon.dir/build: udp_daemon

.PHONY : CMakeFiles/udp_daemon.dir/build

CMakeFiles/udp_daemon.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/udp_daemon.dir/cmake_clean.cmake
.PHONY : CMakeFiles/udp_daemon.dir/clean

CMakeFiles/udp_daemon.dir/depend:
	cd /home/pi/Downloads/wsjtx && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/Downloads/wsjtx /home/pi/Downloads/wsjtx /home/pi/Downloads/wsjtx /home/pi/Downloads/wsjtx /home/pi/Downloads/wsjtx/CMakeFiles/udp_daemon.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/udp_daemon.dir/depend

