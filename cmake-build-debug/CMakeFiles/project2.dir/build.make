# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.15

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/kis/CLionProjects/project2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/kis/CLionProjects/project2/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/project2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/project2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/project2.dir/flags.make

CMakeFiles/project2.dir/TweetMgrTest.cpp.o: CMakeFiles/project2.dir/flags.make
CMakeFiles/project2.dir/TweetMgrTest.cpp.o: ../TweetMgrTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kis/CLionProjects/project2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/project2.dir/TweetMgrTest.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project2.dir/TweetMgrTest.cpp.o -c /Users/kis/CLionProjects/project2/TweetMgrTest.cpp

CMakeFiles/project2.dir/TweetMgrTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2.dir/TweetMgrTest.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kis/CLionProjects/project2/TweetMgrTest.cpp > CMakeFiles/project2.dir/TweetMgrTest.cpp.i

CMakeFiles/project2.dir/TweetMgrTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2.dir/TweetMgrTest.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kis/CLionProjects/project2/TweetMgrTest.cpp -o CMakeFiles/project2.dir/TweetMgrTest.cpp.s

CMakeFiles/project2.dir/Tweet.cpp.o: CMakeFiles/project2.dir/flags.make
CMakeFiles/project2.dir/Tweet.cpp.o: ../Tweet.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kis/CLionProjects/project2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/project2.dir/Tweet.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project2.dir/Tweet.cpp.o -c /Users/kis/CLionProjects/project2/Tweet.cpp

CMakeFiles/project2.dir/Tweet.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2.dir/Tweet.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kis/CLionProjects/project2/Tweet.cpp > CMakeFiles/project2.dir/Tweet.cpp.i

CMakeFiles/project2.dir/Tweet.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2.dir/Tweet.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kis/CLionProjects/project2/Tweet.cpp -o CMakeFiles/project2.dir/Tweet.cpp.s

CMakeFiles/project2.dir/TweetMgr.cpp.o: CMakeFiles/project2.dir/flags.make
CMakeFiles/project2.dir/TweetMgr.cpp.o: ../TweetMgr.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/kis/CLionProjects/project2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/project2.dir/TweetMgr.cpp.o"
	/usr/bin/clang++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/project2.dir/TweetMgr.cpp.o -c /Users/kis/CLionProjects/project2/TweetMgr.cpp

CMakeFiles/project2.dir/TweetMgr.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/project2.dir/TweetMgr.cpp.i"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/kis/CLionProjects/project2/TweetMgr.cpp > CMakeFiles/project2.dir/TweetMgr.cpp.i

CMakeFiles/project2.dir/TweetMgr.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/project2.dir/TweetMgr.cpp.s"
	/usr/bin/clang++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/kis/CLionProjects/project2/TweetMgr.cpp -o CMakeFiles/project2.dir/TweetMgr.cpp.s

# Object files for target project2
project2_OBJECTS = \
"CMakeFiles/project2.dir/TweetMgrTest.cpp.o" \
"CMakeFiles/project2.dir/Tweet.cpp.o" \
"CMakeFiles/project2.dir/TweetMgr.cpp.o"

# External object files for target project2
project2_EXTERNAL_OBJECTS =

project2: CMakeFiles/project2.dir/TweetMgrTest.cpp.o
project2: CMakeFiles/project2.dir/Tweet.cpp.o
project2: CMakeFiles/project2.dir/TweetMgr.cpp.o
project2: CMakeFiles/project2.dir/build.make
project2: CMakeFiles/project2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/kis/CLionProjects/project2/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable project2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/project2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/project2.dir/build: project2

.PHONY : CMakeFiles/project2.dir/build

CMakeFiles/project2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/project2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/project2.dir/clean

CMakeFiles/project2.dir/depend:
	cd /Users/kis/CLionProjects/project2/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/kis/CLionProjects/project2 /Users/kis/CLionProjects/project2 /Users/kis/CLionProjects/project2/cmake-build-debug /Users/kis/CLionProjects/project2/cmake-build-debug /Users/kis/CLionProjects/project2/cmake-build-debug/CMakeFiles/project2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/project2.dir/depend
