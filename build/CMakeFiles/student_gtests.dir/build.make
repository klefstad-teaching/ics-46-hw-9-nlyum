# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

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
CMAKE_SOURCE_DIR = /home/nlyum/ICS46/HW9

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/nlyum/ICS46/HW9/build

# Include any dependencies generated for this target.
include CMakeFiles/student_gtests.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/student_gtests.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/student_gtests.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/student_gtests.dir/flags.make

CMakeFiles/student_gtests.dir/gtest/gtestmain.cpp.o: CMakeFiles/student_gtests.dir/flags.make
CMakeFiles/student_gtests.dir/gtest/gtestmain.cpp.o: ../gtest/gtestmain.cpp
CMakeFiles/student_gtests.dir/gtest/gtestmain.cpp.o: CMakeFiles/student_gtests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nlyum/ICS46/HW9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/student_gtests.dir/gtest/gtestmain.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/student_gtests.dir/gtest/gtestmain.cpp.o -MF CMakeFiles/student_gtests.dir/gtest/gtestmain.cpp.o.d -o CMakeFiles/student_gtests.dir/gtest/gtestmain.cpp.o -c /home/nlyum/ICS46/HW9/gtest/gtestmain.cpp

CMakeFiles/student_gtests.dir/gtest/gtestmain.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/student_gtests.dir/gtest/gtestmain.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nlyum/ICS46/HW9/gtest/gtestmain.cpp > CMakeFiles/student_gtests.dir/gtest/gtestmain.cpp.i

CMakeFiles/student_gtests.dir/gtest/gtestmain.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/student_gtests.dir/gtest/gtestmain.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nlyum/ICS46/HW9/gtest/gtestmain.cpp -o CMakeFiles/student_gtests.dir/gtest/gtestmain.cpp.s

CMakeFiles/student_gtests.dir/gtest/student_gtests.cpp.o: CMakeFiles/student_gtests.dir/flags.make
CMakeFiles/student_gtests.dir/gtest/student_gtests.cpp.o: ../gtest/student_gtests.cpp
CMakeFiles/student_gtests.dir/gtest/student_gtests.cpp.o: CMakeFiles/student_gtests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nlyum/ICS46/HW9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/student_gtests.dir/gtest/student_gtests.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/student_gtests.dir/gtest/student_gtests.cpp.o -MF CMakeFiles/student_gtests.dir/gtest/student_gtests.cpp.o.d -o CMakeFiles/student_gtests.dir/gtest/student_gtests.cpp.o -c /home/nlyum/ICS46/HW9/gtest/student_gtests.cpp

CMakeFiles/student_gtests.dir/gtest/student_gtests.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/student_gtests.dir/gtest/student_gtests.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nlyum/ICS46/HW9/gtest/student_gtests.cpp > CMakeFiles/student_gtests.dir/gtest/student_gtests.cpp.i

CMakeFiles/student_gtests.dir/gtest/student_gtests.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/student_gtests.dir/gtest/student_gtests.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nlyum/ICS46/HW9/gtest/student_gtests.cpp -o CMakeFiles/student_gtests.dir/gtest/student_gtests.cpp.s

CMakeFiles/student_gtests.dir/src/dijkstras.cpp.o: CMakeFiles/student_gtests.dir/flags.make
CMakeFiles/student_gtests.dir/src/dijkstras.cpp.o: ../src/dijkstras.cpp
CMakeFiles/student_gtests.dir/src/dijkstras.cpp.o: CMakeFiles/student_gtests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nlyum/ICS46/HW9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/student_gtests.dir/src/dijkstras.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/student_gtests.dir/src/dijkstras.cpp.o -MF CMakeFiles/student_gtests.dir/src/dijkstras.cpp.o.d -o CMakeFiles/student_gtests.dir/src/dijkstras.cpp.o -c /home/nlyum/ICS46/HW9/src/dijkstras.cpp

CMakeFiles/student_gtests.dir/src/dijkstras.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/student_gtests.dir/src/dijkstras.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nlyum/ICS46/HW9/src/dijkstras.cpp > CMakeFiles/student_gtests.dir/src/dijkstras.cpp.i

CMakeFiles/student_gtests.dir/src/dijkstras.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/student_gtests.dir/src/dijkstras.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nlyum/ICS46/HW9/src/dijkstras.cpp -o CMakeFiles/student_gtests.dir/src/dijkstras.cpp.s

CMakeFiles/student_gtests.dir/src/ladder.cpp.o: CMakeFiles/student_gtests.dir/flags.make
CMakeFiles/student_gtests.dir/src/ladder.cpp.o: ../src/ladder.cpp
CMakeFiles/student_gtests.dir/src/ladder.cpp.o: CMakeFiles/student_gtests.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/nlyum/ICS46/HW9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/student_gtests.dir/src/ladder.cpp.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/student_gtests.dir/src/ladder.cpp.o -MF CMakeFiles/student_gtests.dir/src/ladder.cpp.o.d -o CMakeFiles/student_gtests.dir/src/ladder.cpp.o -c /home/nlyum/ICS46/HW9/src/ladder.cpp

CMakeFiles/student_gtests.dir/src/ladder.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/student_gtests.dir/src/ladder.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/nlyum/ICS46/HW9/src/ladder.cpp > CMakeFiles/student_gtests.dir/src/ladder.cpp.i

CMakeFiles/student_gtests.dir/src/ladder.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/student_gtests.dir/src/ladder.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/nlyum/ICS46/HW9/src/ladder.cpp -o CMakeFiles/student_gtests.dir/src/ladder.cpp.s

# Object files for target student_gtests
student_gtests_OBJECTS = \
"CMakeFiles/student_gtests.dir/gtest/gtestmain.cpp.o" \
"CMakeFiles/student_gtests.dir/gtest/student_gtests.cpp.o" \
"CMakeFiles/student_gtests.dir/src/dijkstras.cpp.o" \
"CMakeFiles/student_gtests.dir/src/ladder.cpp.o"

# External object files for target student_gtests
student_gtests_EXTERNAL_OBJECTS =

student_gtests: CMakeFiles/student_gtests.dir/gtest/gtestmain.cpp.o
student_gtests: CMakeFiles/student_gtests.dir/gtest/student_gtests.cpp.o
student_gtests: CMakeFiles/student_gtests.dir/src/dijkstras.cpp.o
student_gtests: CMakeFiles/student_gtests.dir/src/ladder.cpp.o
student_gtests: CMakeFiles/student_gtests.dir/build.make
student_gtests: /usr/lib/x86_64-linux-gnu/libgtest.a
student_gtests: CMakeFiles/student_gtests.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/nlyum/ICS46/HW9/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable student_gtests"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/student_gtests.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/student_gtests.dir/build: student_gtests
.PHONY : CMakeFiles/student_gtests.dir/build

CMakeFiles/student_gtests.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/student_gtests.dir/cmake_clean.cmake
.PHONY : CMakeFiles/student_gtests.dir/clean

CMakeFiles/student_gtests.dir/depend:
	cd /home/nlyum/ICS46/HW9/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/nlyum/ICS46/HW9 /home/nlyum/ICS46/HW9 /home/nlyum/ICS46/HW9/build /home/nlyum/ICS46/HW9/build /home/nlyum/ICS46/HW9/build/CMakeFiles/student_gtests.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/student_gtests.dir/depend

