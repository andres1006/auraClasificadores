# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.5

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
CMAKE_SOURCE_DIR = /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build

# Include any dependencies generated for this target.
include src/CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/main.dir/flags.make

src/CMakeFiles/main.dir/main.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/main.c.o: ../src/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/main.dir/main.c.o"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/main.c.o   -c /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/main.c

src/CMakeFiles/main.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/main.c.i"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/main.c > CMakeFiles/main.dir/main.c.i

src/CMakeFiles/main.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/main.c.s"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/main.c -o CMakeFiles/main.dir/main.c.s

src/CMakeFiles/main.dir/main.c.o.requires:

.PHONY : src/CMakeFiles/main.dir/main.c.o.requires

src/CMakeFiles/main.dir/main.c.o.provides: src/CMakeFiles/main.dir/main.c.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/main.c.o.provides.build
.PHONY : src/CMakeFiles/main.dir/main.c.o.provides

src/CMakeFiles/main.dir/main.c.o.provides.build: src/CMakeFiles/main.dir/main.c.o


src/CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.o: ../src/Clasificador_DFT_vs_control.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.o"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.o   -c /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Clasificador_DFT_vs_control.c

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.i"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Clasificador_DFT_vs_control.c > CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.i

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.s"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Clasificador_DFT_vs_control.c -o CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.s

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.o.requires:

.PHONY : src/CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.o.requires

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.o.provides: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.o.provides.build
.PHONY : src/CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.o.provides

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.o.provides.build: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.o


src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.o: ../src/Clasificador_DFT_vs_control_emxAPI.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.o"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.o   -c /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Clasificador_DFT_vs_control_emxAPI.c

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.i"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Clasificador_DFT_vs_control_emxAPI.c > CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.i

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.s"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Clasificador_DFT_vs_control_emxAPI.c -o CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.s

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.o.requires:

.PHONY : src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.o.requires

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.o.provides: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.o.provides.build
.PHONY : src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.o.provides

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.o.provides.build: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.o


src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.o: ../src/Clasificador_DFT_vs_control_emxutil.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.o"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.o   -c /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Clasificador_DFT_vs_control_emxutil.c

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.i"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Clasificador_DFT_vs_control_emxutil.c > CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.i

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.s"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Clasificador_DFT_vs_control_emxutil.c -o CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.s

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.o.requires:

.PHONY : src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.o.requires

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.o.provides: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.o.provides.build
.PHONY : src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.o.provides

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.o.provides.build: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.o


src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.o: ../src/Clasificador_DFT_vs_control_initialize.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.o"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.o   -c /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Clasificador_DFT_vs_control_initialize.c

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.i"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Clasificador_DFT_vs_control_initialize.c > CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.i

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.s"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Clasificador_DFT_vs_control_initialize.c -o CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.s

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.o.requires:

.PHONY : src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.o.requires

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.o.provides: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.o.provides.build
.PHONY : src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.o.provides

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.o.provides.build: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.o


src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.o: ../src/Clasificador_DFT_vs_control_terminate.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.o"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.o   -c /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Clasificador_DFT_vs_control_terminate.c

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.i"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Clasificador_DFT_vs_control_terminate.c > CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.i

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.s"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Clasificador_DFT_vs_control_terminate.c -o CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.s

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.o.requires:

.PHONY : src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.o.requires

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.o.provides: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.o.provides.build
.PHONY : src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.o.provides

src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.o.provides.build: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.o


src/CMakeFiles/main.dir/CompactSVM.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/CompactSVM.c.o: ../src/CompactSVM.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object src/CMakeFiles/main.dir/CompactSVM.c.o"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/CompactSVM.c.o   -c /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/CompactSVM.c

src/CMakeFiles/main.dir/CompactSVM.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/CompactSVM.c.i"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/CompactSVM.c > CMakeFiles/main.dir/CompactSVM.c.i

src/CMakeFiles/main.dir/CompactSVM.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/CompactSVM.c.s"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/CompactSVM.c -o CMakeFiles/main.dir/CompactSVM.c.s

src/CMakeFiles/main.dir/CompactSVM.c.o.requires:

.PHONY : src/CMakeFiles/main.dir/CompactSVM.c.o.requires

src/CMakeFiles/main.dir/CompactSVM.c.o.provides: src/CMakeFiles/main.dir/CompactSVM.c.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/CompactSVM.c.o.provides.build
.PHONY : src/CMakeFiles/main.dir/CompactSVM.c.o.provides

src/CMakeFiles/main.dir/CompactSVM.c.o.provides.build: src/CMakeFiles/main.dir/CompactSVM.c.o


src/CMakeFiles/main.dir/Gaussian.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/Gaussian.c.o: ../src/Gaussian.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object src/CMakeFiles/main.dir/Gaussian.c.o"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/Gaussian.c.o   -c /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Gaussian.c

src/CMakeFiles/main.dir/Gaussian.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/Gaussian.c.i"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Gaussian.c > CMakeFiles/main.dir/Gaussian.c.i

src/CMakeFiles/main.dir/Gaussian.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/Gaussian.c.s"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/Gaussian.c -o CMakeFiles/main.dir/Gaussian.c.s

src/CMakeFiles/main.dir/Gaussian.c.o.requires:

.PHONY : src/CMakeFiles/main.dir/Gaussian.c.o.requires

src/CMakeFiles/main.dir/Gaussian.c.o.provides: src/CMakeFiles/main.dir/Gaussian.c.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/Gaussian.c.o.provides.build
.PHONY : src/CMakeFiles/main.dir/Gaussian.c.o.provides

src/CMakeFiles/main.dir/Gaussian.c.o.provides.build: src/CMakeFiles/main.dir/Gaussian.c.o


src/CMakeFiles/main.dir/rtGetInf.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/rtGetInf.c.o: ../src/rtGetInf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object src/CMakeFiles/main.dir/rtGetInf.c.o"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/rtGetInf.c.o   -c /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/rtGetInf.c

src/CMakeFiles/main.dir/rtGetInf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/rtGetInf.c.i"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/rtGetInf.c > CMakeFiles/main.dir/rtGetInf.c.i

src/CMakeFiles/main.dir/rtGetInf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/rtGetInf.c.s"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/rtGetInf.c -o CMakeFiles/main.dir/rtGetInf.c.s

src/CMakeFiles/main.dir/rtGetInf.c.o.requires:

.PHONY : src/CMakeFiles/main.dir/rtGetInf.c.o.requires

src/CMakeFiles/main.dir/rtGetInf.c.o.provides: src/CMakeFiles/main.dir/rtGetInf.c.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/rtGetInf.c.o.provides.build
.PHONY : src/CMakeFiles/main.dir/rtGetInf.c.o.provides

src/CMakeFiles/main.dir/rtGetInf.c.o.provides.build: src/CMakeFiles/main.dir/rtGetInf.c.o


src/CMakeFiles/main.dir/rtGetNaN.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/rtGetNaN.c.o: ../src/rtGetNaN.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object src/CMakeFiles/main.dir/rtGetNaN.c.o"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/rtGetNaN.c.o   -c /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/rtGetNaN.c

src/CMakeFiles/main.dir/rtGetNaN.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/rtGetNaN.c.i"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/rtGetNaN.c > CMakeFiles/main.dir/rtGetNaN.c.i

src/CMakeFiles/main.dir/rtGetNaN.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/rtGetNaN.c.s"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/rtGetNaN.c -o CMakeFiles/main.dir/rtGetNaN.c.s

src/CMakeFiles/main.dir/rtGetNaN.c.o.requires:

.PHONY : src/CMakeFiles/main.dir/rtGetNaN.c.o.requires

src/CMakeFiles/main.dir/rtGetNaN.c.o.provides: src/CMakeFiles/main.dir/rtGetNaN.c.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/rtGetNaN.c.o.provides.build
.PHONY : src/CMakeFiles/main.dir/rtGetNaN.c.o.provides

src/CMakeFiles/main.dir/rtGetNaN.c.o.provides.build: src/CMakeFiles/main.dir/rtGetNaN.c.o


src/CMakeFiles/main.dir/rt_nonfinite.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/rt_nonfinite.c.o: ../src/rt_nonfinite.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object src/CMakeFiles/main.dir/rt_nonfinite.c.o"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/rt_nonfinite.c.o   -c /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/rt_nonfinite.c

src/CMakeFiles/main.dir/rt_nonfinite.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/rt_nonfinite.c.i"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/rt_nonfinite.c > CMakeFiles/main.dir/rt_nonfinite.c.i

src/CMakeFiles/main.dir/rt_nonfinite.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/rt_nonfinite.c.s"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && /usr/bin/cc  $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src/rt_nonfinite.c -o CMakeFiles/main.dir/rt_nonfinite.c.s

src/CMakeFiles/main.dir/rt_nonfinite.c.o.requires:

.PHONY : src/CMakeFiles/main.dir/rt_nonfinite.c.o.requires

src/CMakeFiles/main.dir/rt_nonfinite.c.o.provides: src/CMakeFiles/main.dir/rt_nonfinite.c.o.requires
	$(MAKE) -f src/CMakeFiles/main.dir/build.make src/CMakeFiles/main.dir/rt_nonfinite.c.o.provides.build
.PHONY : src/CMakeFiles/main.dir/rt_nonfinite.c.o.provides

src/CMakeFiles/main.dir/rt_nonfinite.c.o.provides.build: src/CMakeFiles/main.dir/rt_nonfinite.c.o


# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.c.o" \
"CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.o" \
"CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.o" \
"CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.o" \
"CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.o" \
"CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.o" \
"CMakeFiles/main.dir/CompactSVM.c.o" \
"CMakeFiles/main.dir/Gaussian.c.o" \
"CMakeFiles/main.dir/rtGetInf.c.o" \
"CMakeFiles/main.dir/rtGetNaN.c.o" \
"CMakeFiles/main.dir/rt_nonfinite.c.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

src/main: src/CMakeFiles/main.dir/main.c.o
src/main: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.o
src/main: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.o
src/main: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.o
src/main: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.o
src/main: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.o
src/main: src/CMakeFiles/main.dir/CompactSVM.c.o
src/main: src/CMakeFiles/main.dir/Gaussian.c.o
src/main: src/CMakeFiles/main.dir/rtGetInf.c.o
src/main: src/CMakeFiles/main.dir/rtGetNaN.c.o
src/main: src/CMakeFiles/main.dir/rt_nonfinite.c.o
src/main: src/CMakeFiles/main.dir/build.make
src/main: src/CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Linking C executable main"
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/main.dir/build: src/main

.PHONY : src/CMakeFiles/main.dir/build

src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/main.c.o.requires
src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control.c.o.requires
src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxAPI.c.o.requires
src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_emxutil.c.o.requires
src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_initialize.c.o.requires
src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/Clasificador_DFT_vs_control_terminate.c.o.requires
src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/CompactSVM.c.o.requires
src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/Gaussian.c.o.requires
src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/rtGetInf.c.o.requires
src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/rtGetNaN.c.o.requires
src/CMakeFiles/main.dir/requires: src/CMakeFiles/main.dir/rt_nonfinite.c.o.requires

.PHONY : src/CMakeFiles/main.dir/requires

src/CMakeFiles/main.dir/clean:
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src && $(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/main.dir/clean

src/CMakeFiles/main.dir/depend:
	cd /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/src /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src /home/MargaretHamilton/Desktop/Clasificador_DFT_vs_control/build/src/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/main.dir/depend

