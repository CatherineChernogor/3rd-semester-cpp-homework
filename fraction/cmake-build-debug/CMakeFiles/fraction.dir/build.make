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
CMAKE_SOURCE_DIR = E:\3_semester\fraction

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = E:\3_semester\fraction\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/fraction.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fraction.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fraction.dir/flags.make

CMakeFiles/fraction.dir/main.cpp.obj: CMakeFiles/fraction.dir/flags.make
CMakeFiles/fraction.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\3_semester\fraction\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/fraction.dir/main.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\fraction.dir\main.cpp.obj -c E:\3_semester\fraction\main.cpp

CMakeFiles/fraction.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fraction.dir/main.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\3_semester\fraction\main.cpp > CMakeFiles\fraction.dir\main.cpp.i

CMakeFiles/fraction.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fraction.dir/main.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\3_semester\fraction\main.cpp -o CMakeFiles\fraction.dir\main.cpp.s

CMakeFiles/fraction.dir/rational.cpp.obj: CMakeFiles/fraction.dir/flags.make
CMakeFiles/fraction.dir/rational.cpp.obj: ../rational.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=E:\3_semester\fraction\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/fraction.dir/rational.cpp.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\fraction.dir\rational.cpp.obj -c E:\3_semester\fraction\rational.cpp

CMakeFiles/fraction.dir/rational.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fraction.dir/rational.cpp.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E E:\3_semester\fraction\rational.cpp > CMakeFiles\fraction.dir\rational.cpp.i

CMakeFiles/fraction.dir/rational.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fraction.dir/rational.cpp.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S E:\3_semester\fraction\rational.cpp -o CMakeFiles\fraction.dir\rational.cpp.s

# Object files for target fraction
fraction_OBJECTS = \
"CMakeFiles/fraction.dir/main.cpp.obj" \
"CMakeFiles/fraction.dir/rational.cpp.obj"

# External object files for target fraction
fraction_EXTERNAL_OBJECTS =

fraction.exe: CMakeFiles/fraction.dir/main.cpp.obj
fraction.exe: CMakeFiles/fraction.dir/rational.cpp.obj
fraction.exe: CMakeFiles/fraction.dir/build.make
fraction.exe: CMakeFiles/fraction.dir/linklibs.rsp
fraction.exe: CMakeFiles/fraction.dir/objects1.rsp
fraction.exe: CMakeFiles/fraction.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=E:\3_semester\fraction\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable fraction.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\fraction.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fraction.dir/build: fraction.exe

.PHONY : CMakeFiles/fraction.dir/build

CMakeFiles/fraction.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\fraction.dir\cmake_clean.cmake
.PHONY : CMakeFiles/fraction.dir/clean

CMakeFiles/fraction.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" E:\3_semester\fraction E:\3_semester\fraction E:\3_semester\fraction\cmake-build-debug E:\3_semester\fraction\cmake-build-debug E:\3_semester\fraction\cmake-build-debug\CMakeFiles\fraction.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fraction.dir/depend

