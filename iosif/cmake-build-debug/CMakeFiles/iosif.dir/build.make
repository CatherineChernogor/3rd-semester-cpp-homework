# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = E:\3_semester\iosif

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\3_semester\iosif\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/iosif.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/iosif.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/iosif.dir/flags.make

CMakeFiles/iosif.dir/main.cpp.obj: CMakeFiles/iosif.dir/flags.make
CMakeFiles/iosif.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\3_semester\iosif\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/iosif.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\iosif.dir\main.cpp.obj -c E:\3_semester\iosif\main.cpp

CMakeFiles/iosif.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/iosif.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\3_semester\iosif\main.cpp > CMakeFiles\iosif.dir\main.cpp.i

CMakeFiles/iosif.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/iosif.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\3_semester\iosif\main.cpp -o CMakeFiles\iosif.dir\main.cpp.s

# Object files for target iosif
iosif_OBJECTS = \
"CMakeFiles/iosif.dir/main.cpp.obj"

# External object files for target iosif
iosif_EXTERNAL_OBJECTS =

iosif.exe: CMakeFiles/iosif.dir/main.cpp.obj
iosif.exe: CMakeFiles/iosif.dir/build.make
iosif.exe: CMakeFiles/iosif.dir/linklibs.rsp
iosif.exe: CMakeFiles/iosif.dir/objects1.rsp
iosif.exe: CMakeFiles/iosif.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\3_semester\iosif\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable iosif.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\iosif.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/iosif.dir/build: iosif.exe

.PHONY : CMakeFiles/iosif.dir/build

CMakeFiles/iosif.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\iosif.dir\cmake_clean.cmake
.PHONY : CMakeFiles/iosif.dir/clean

CMakeFiles/iosif.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\3_semester\iosif E:\3_semester\iosif E:\3_semester\iosif\cmake-build-debug E:\3_semester\iosif\cmake-build-debug E:\3_semester\iosif\cmake-build-debug\CMakeFiles\iosif.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/iosif.dir/depend
