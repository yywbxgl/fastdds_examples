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
CMAKE_SOURCE_DIR = /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/build

# Include any dependencies generated for this target.
include CMakeFiles/hello_lib.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hello_lib.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello_lib.dir/flags.make

CMakeFiles/hello_lib.dir/hello.cxx.o: CMakeFiles/hello_lib.dir/flags.make
CMakeFiles/hello_lib.dir/hello.cxx.o: ../hello.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hello_lib.dir/hello.cxx.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hello_lib.dir/hello.cxx.o -c /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/hello.cxx

CMakeFiles/hello_lib.dir/hello.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello_lib.dir/hello.cxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/hello.cxx > CMakeFiles/hello_lib.dir/hello.cxx.i

CMakeFiles/hello_lib.dir/hello.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello_lib.dir/hello.cxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/hello.cxx -o CMakeFiles/hello_lib.dir/hello.cxx.s

# Object files for target hello_lib
hello_lib_OBJECTS = \
"CMakeFiles/hello_lib.dir/hello.cxx.o"

# External object files for target hello_lib
hello_lib_EXTERNAL_OBJECTS =

libhello_lib.a: CMakeFiles/hello_lib.dir/hello.cxx.o
libhello_lib.a: CMakeFiles/hello_lib.dir/build.make
libhello_lib.a: CMakeFiles/hello_lib.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX static library libhello_lib.a"
	$(CMAKE_COMMAND) -P CMakeFiles/hello_lib.dir/cmake_clean_target.cmake
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello_lib.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hello_lib.dir/build: libhello_lib.a

.PHONY : CMakeFiles/hello_lib.dir/build

CMakeFiles/hello_lib.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hello_lib.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hello_lib.dir/clean

CMakeFiles/hello_lib.dir/depend:
	cd /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1 /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1 /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/build /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/build /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/build/CMakeFiles/hello_lib.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hello_lib.dir/depend

