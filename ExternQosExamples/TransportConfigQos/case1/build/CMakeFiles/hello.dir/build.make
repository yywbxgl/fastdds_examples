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
include CMakeFiles/hello.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/hello.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/hello.dir/flags.make

CMakeFiles/hello.dir/helloPubSubTypes.cxx.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/helloPubSubTypes.cxx.o: ../helloPubSubTypes.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/hello.dir/helloPubSubTypes.cxx.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hello.dir/helloPubSubTypes.cxx.o -c /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/helloPubSubTypes.cxx

CMakeFiles/hello.dir/helloPubSubTypes.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello.dir/helloPubSubTypes.cxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/helloPubSubTypes.cxx > CMakeFiles/hello.dir/helloPubSubTypes.cxx.i

CMakeFiles/hello.dir/helloPubSubTypes.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello.dir/helloPubSubTypes.cxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/helloPubSubTypes.cxx -o CMakeFiles/hello.dir/helloPubSubTypes.cxx.s

CMakeFiles/hello.dir/helloPublisher.cxx.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/helloPublisher.cxx.o: ../helloPublisher.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/hello.dir/helloPublisher.cxx.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hello.dir/helloPublisher.cxx.o -c /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/helloPublisher.cxx

CMakeFiles/hello.dir/helloPublisher.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello.dir/helloPublisher.cxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/helloPublisher.cxx > CMakeFiles/hello.dir/helloPublisher.cxx.i

CMakeFiles/hello.dir/helloPublisher.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello.dir/helloPublisher.cxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/helloPublisher.cxx -o CMakeFiles/hello.dir/helloPublisher.cxx.s

CMakeFiles/hello.dir/helloSubscriber.cxx.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/helloSubscriber.cxx.o: ../helloSubscriber.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/hello.dir/helloSubscriber.cxx.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hello.dir/helloSubscriber.cxx.o -c /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/helloSubscriber.cxx

CMakeFiles/hello.dir/helloSubscriber.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello.dir/helloSubscriber.cxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/helloSubscriber.cxx > CMakeFiles/hello.dir/helloSubscriber.cxx.i

CMakeFiles/hello.dir/helloSubscriber.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello.dir/helloSubscriber.cxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/helloSubscriber.cxx -o CMakeFiles/hello.dir/helloSubscriber.cxx.s

CMakeFiles/hello.dir/helloPubSubMain.cxx.o: CMakeFiles/hello.dir/flags.make
CMakeFiles/hello.dir/helloPubSubMain.cxx.o: ../helloPubSubMain.cxx
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/hello.dir/helloPubSubMain.cxx.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/hello.dir/helloPubSubMain.cxx.o -c /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/helloPubSubMain.cxx

CMakeFiles/hello.dir/helloPubSubMain.cxx.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/hello.dir/helloPubSubMain.cxx.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/helloPubSubMain.cxx > CMakeFiles/hello.dir/helloPubSubMain.cxx.i

CMakeFiles/hello.dir/helloPubSubMain.cxx.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/hello.dir/helloPubSubMain.cxx.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/helloPubSubMain.cxx -o CMakeFiles/hello.dir/helloPubSubMain.cxx.s

# Object files for target hello
hello_OBJECTS = \
"CMakeFiles/hello.dir/helloPubSubTypes.cxx.o" \
"CMakeFiles/hello.dir/helloPublisher.cxx.o" \
"CMakeFiles/hello.dir/helloSubscriber.cxx.o" \
"CMakeFiles/hello.dir/helloPubSubMain.cxx.o"

# External object files for target hello
hello_EXTERNAL_OBJECTS =

hello: CMakeFiles/hello.dir/helloPubSubTypes.cxx.o
hello: CMakeFiles/hello.dir/helloPublisher.cxx.o
hello: CMakeFiles/hello.dir/helloSubscriber.cxx.o
hello: CMakeFiles/hello.dir/helloPubSubMain.cxx.o
hello: CMakeFiles/hello.dir/build.make
hello: libhello_lib.a
hello: /home/qiliang/Fast-DDS/install/fastrtps/lib/libfastrtps.so.2.8.1
hello: /home/qiliang/Fast-DDS/install/fastcdr/lib/libfastcdr.so.1.0.24
hello: /opt/ros/galactic/lib/libfoonathan_memory-0.6.2.a
hello: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
hello: /usr/lib/x86_64-linux-gnu/libtinyxml2.so
hello: /usr/lib/x86_64-linux-gnu/libssl.so
hello: /usr/lib/x86_64-linux-gnu/libcrypto.so
hello: CMakeFiles/hello.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Linking CXX executable hello"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/hello.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/hello.dir/build: hello

.PHONY : CMakeFiles/hello.dir/build

CMakeFiles/hello.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/hello.dir/cmake_clean.cmake
.PHONY : CMakeFiles/hello.dir/clean

CMakeFiles/hello.dir/depend:
	cd /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1 /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1 /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/build /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/build /home/qiliang/fastdds_examples/ExternQosExamples/TransportConfigQos/case1/build/CMakeFiles/hello.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/hello.dir/depend
