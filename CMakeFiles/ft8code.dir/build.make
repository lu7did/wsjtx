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
include CMakeFiles/ft8code.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ft8code.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ft8code.dir/flags.make

CMakeFiles/ft8code.dir/lib/ft8/ft8code.f90.o: CMakeFiles/ft8code.dir/flags.make
CMakeFiles/ft8code.dir/lib/ft8/ft8code.f90.o: lib/ft8/ft8code.f90
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/pi/Downloads/wsjtx/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building Fortran object CMakeFiles/ft8code.dir/lib/ft8/ft8code.f90.o"
	/usr/bin/gfortran $(Fortran_DEFINES) $(Fortran_INCLUDES) $(Fortran_FLAGS) -c /home/pi/Downloads/wsjtx/lib/ft8/ft8code.f90 -o CMakeFiles/ft8code.dir/lib/ft8/ft8code.f90.o

CMakeFiles/ft8code.dir/lib/ft8/ft8code.f90.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing Fortran source to CMakeFiles/ft8code.dir/lib/ft8/ft8code.f90.i"
	/usr/bin/gfortran $(Fortran_DEFINES) $(Fortran_INCLUDES) $(Fortran_FLAGS) -E /home/pi/Downloads/wsjtx/lib/ft8/ft8code.f90 > CMakeFiles/ft8code.dir/lib/ft8/ft8code.f90.i

CMakeFiles/ft8code.dir/lib/ft8/ft8code.f90.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling Fortran source to assembly CMakeFiles/ft8code.dir/lib/ft8/ft8code.f90.s"
	/usr/bin/gfortran $(Fortran_DEFINES) $(Fortran_INCLUDES) $(Fortran_FLAGS) -S /home/pi/Downloads/wsjtx/lib/ft8/ft8code.f90 -o CMakeFiles/ft8code.dir/lib/ft8/ft8code.f90.s

# Object files for target ft8code
ft8code_OBJECTS = \
"CMakeFiles/ft8code.dir/lib/ft8/ft8code.f90.o"

# External object files for target ft8code
ft8code_EXTERNAL_OBJECTS =

ft8code: CMakeFiles/ft8code.dir/lib/ft8/ft8code.f90.o
ft8code: CMakeFiles/ft8code.dir/build.make
ft8code: libwsjt_fort.a
ft8code: libwsjt_cxx.a
ft8code: /usr/lib/arm-linux-gnueabihf/libfftw3f_threads.so
ft8code: /usr/lib/arm-linux-gnueabihf/libfftw3f.so
ft8code: /usr/lib/arm-linux-gnueabihf/libboost_log_setup.so
ft8code: CMakeFiles/ft8code.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/pi/Downloads/wsjtx/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ft8code"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ft8code.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ft8code.dir/build: ft8code

.PHONY : CMakeFiles/ft8code.dir/build

CMakeFiles/ft8code.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ft8code.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ft8code.dir/clean

CMakeFiles/ft8code.dir/depend:
	cd /home/pi/Downloads/wsjtx && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/pi/Downloads/wsjtx /home/pi/Downloads/wsjtx /home/pi/Downloads/wsjtx /home/pi/Downloads/wsjtx /home/pi/Downloads/wsjtx/CMakeFiles/ft8code.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ft8code.dir/depend

