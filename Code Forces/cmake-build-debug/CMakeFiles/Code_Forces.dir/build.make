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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.5\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "D:\Problem Solving\Problem_Solving\Code Forces"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "D:\Problem Solving\Problem_Solving\Code Forces\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Code_Forces.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Code_Forces.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Code_Forces.dir/flags.make

CMakeFiles/Code_Forces.dir/main.cpp.obj: CMakeFiles/Code_Forces.dir/flags.make
CMakeFiles/Code_Forces.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="D:\Problem Solving\Problem_Solving\Code Forces\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Code_Forces.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\Code_Forces.dir\main.cpp.obj -c "D:\Problem Solving\Problem_Solving\Code Forces\main.cpp"

CMakeFiles/Code_Forces.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Code_Forces.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "D:\Problem Solving\Problem_Solving\Code Forces\main.cpp" > CMakeFiles\Code_Forces.dir\main.cpp.i

CMakeFiles/Code_Forces.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Code_Forces.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "D:\Problem Solving\Problem_Solving\Code Forces\main.cpp" -o CMakeFiles\Code_Forces.dir\main.cpp.s

# Object files for target Code_Forces
Code_Forces_OBJECTS = \
"CMakeFiles/Code_Forces.dir/main.cpp.obj"

# External object files for target Code_Forces
Code_Forces_EXTERNAL_OBJECTS =

Code_Forces.exe: CMakeFiles/Code_Forces.dir/main.cpp.obj
Code_Forces.exe: CMakeFiles/Code_Forces.dir/build.make
Code_Forces.exe: CMakeFiles/Code_Forces.dir/linklibs.rsp
Code_Forces.exe: CMakeFiles/Code_Forces.dir/objects1.rsp
Code_Forces.exe: CMakeFiles/Code_Forces.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="D:\Problem Solving\Problem_Solving\Code Forces\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Code_Forces.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\Code_Forces.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Code_Forces.dir/build: Code_Forces.exe

.PHONY : CMakeFiles/Code_Forces.dir/build

CMakeFiles/Code_Forces.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\Code_Forces.dir\cmake_clean.cmake
.PHONY : CMakeFiles/Code_Forces.dir/clean

CMakeFiles/Code_Forces.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "D:\Problem Solving\Problem_Solving\Code Forces" "D:\Problem Solving\Problem_Solving\Code Forces" "D:\Problem Solving\Problem_Solving\Code Forces\cmake-build-debug" "D:\Problem Solving\Problem_Solving\Code Forces\cmake-build-debug" "D:\Problem Solving\Problem_Solving\Code Forces\cmake-build-debug\CMakeFiles\Code_Forces.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Code_Forces.dir/depend

