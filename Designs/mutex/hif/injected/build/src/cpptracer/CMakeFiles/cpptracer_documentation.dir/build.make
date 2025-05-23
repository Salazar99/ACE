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
CMAKE_SOURCE_DIR = /home/magister/ACE/Designs/mutex/hif/injected

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/magister/ACE/Designs/mutex/hif/injected/build

# Utility rule file for cpptracer_documentation.

# Include any custom commands dependencies for this target.
include src/cpptracer/CMakeFiles/cpptracer_documentation.dir/compiler_depend.make

# Include the progress variables for this target.
include src/cpptracer/CMakeFiles/cpptracer_documentation.dir/progress.make

src/cpptracer/CMakeFiles/cpptracer_documentation: src/cpptracer/Doxyfile.cpptracer_documentation
src/cpptracer/CMakeFiles/cpptracer_documentation: ../src/cpptracer/README.md
src/cpptracer/CMakeFiles/cpptracer_documentation: ../src/cpptracer/LICENSE.md
src/cpptracer/CMakeFiles/cpptracer_documentation: ../src/cpptracer/include/cpptracer/colors.hpp
src/cpptracer/CMakeFiles/cpptracer_documentation: ../src/cpptracer/include/cpptracer/compression.hpp
src/cpptracer/CMakeFiles/cpptracer_documentation: ../src/cpptracer/include/cpptracer/feq.hpp
src/cpptracer/CMakeFiles/cpptracer_documentation: ../src/cpptracer/include/cpptracer/timeScale.hpp
src/cpptracer/CMakeFiles/cpptracer_documentation: ../src/cpptracer/include/cpptracer/trace.hpp
src/cpptracer/CMakeFiles/cpptracer_documentation: ../src/cpptracer/include/cpptracer/tracer.hpp
src/cpptracer/CMakeFiles/cpptracer_documentation: ../src/cpptracer/include/cpptracer/utilities.hpp
src/cpptracer/CMakeFiles/cpptracer_documentation: ../src/cpptracer/include/cpptracer/version.hpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/magister/ACE/Designs/mutex/hif/injected/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Generate API documentation for cpptracer_documentation"
	cd /home/magister/ACE/Designs/mutex/hif/injected/src/cpptracer && /usr/bin/cmake -E make_directory /home/magister/ACE/Designs/mutex/hif/injected/build/src/cpptracer
	cd /home/magister/ACE/Designs/mutex/hif/injected/src/cpptracer && /usr/bin/doxygen /home/magister/ACE/Designs/mutex/hif/injected/build/src/cpptracer/Doxyfile.cpptracer_documentation

cpptracer_documentation: src/cpptracer/CMakeFiles/cpptracer_documentation
cpptracer_documentation: src/cpptracer/CMakeFiles/cpptracer_documentation.dir/build.make
.PHONY : cpptracer_documentation

# Rule to build all files generated by this target.
src/cpptracer/CMakeFiles/cpptracer_documentation.dir/build: cpptracer_documentation
.PHONY : src/cpptracer/CMakeFiles/cpptracer_documentation.dir/build

src/cpptracer/CMakeFiles/cpptracer_documentation.dir/clean:
	cd /home/magister/ACE/Designs/mutex/hif/injected/build/src/cpptracer && $(CMAKE_COMMAND) -P CMakeFiles/cpptracer_documentation.dir/cmake_clean.cmake
.PHONY : src/cpptracer/CMakeFiles/cpptracer_documentation.dir/clean

src/cpptracer/CMakeFiles/cpptracer_documentation.dir/depend:
	cd /home/magister/ACE/Designs/mutex/hif/injected/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/magister/ACE/Designs/mutex/hif/injected /home/magister/ACE/Designs/mutex/hif/injected/src/cpptracer /home/magister/ACE/Designs/mutex/hif/injected/build /home/magister/ACE/Designs/mutex/hif/injected/build/src/cpptracer /home/magister/ACE/Designs/mutex/hif/injected/build/src/cpptracer/CMakeFiles/cpptracer_documentation.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/cpptracer/CMakeFiles/cpptracer_documentation.dir/depend

