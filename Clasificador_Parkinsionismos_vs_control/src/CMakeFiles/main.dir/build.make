# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control

# Include any dependencies generated for this target.
include src/CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include src/CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include src/CMakeFiles/main.dir/flags.make

src/CMakeFiles/main.dir/main.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/main.c.o: src/main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object src/CMakeFiles/main.dir/main.c.o"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/main.c.o   -c /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/main.c

src/CMakeFiles/main.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/main.c.i"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/main.c > CMakeFiles/main.dir/main.c.i

src/CMakeFiles/main.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/main.c.s"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/main.c -o CMakeFiles/main.dir/main.c.s

src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control.c.o: src/Clasificador_Parkinsionismos_vs_control.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control.c.o"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control.c.o   -c /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/Clasificador_Parkinsionismos_vs_control.c

src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control.c.i"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/Clasificador_Parkinsionismos_vs_control.c > CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control.c.i

src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control.c.s"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/Clasificador_Parkinsionismos_vs_control.c -o CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control.c.s

src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxAPI.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxAPI.c.o: src/Clasificador_Parkinsionismos_vs_control_emxAPI.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxAPI.c.o"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxAPI.c.o   -c /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/Clasificador_Parkinsionismos_vs_control_emxAPI.c

src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxAPI.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxAPI.c.i"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/Clasificador_Parkinsionismos_vs_control_emxAPI.c > CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxAPI.c.i

src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxAPI.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxAPI.c.s"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/Clasificador_Parkinsionismos_vs_control_emxAPI.c -o CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxAPI.c.s

src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxutil.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxutil.c.o: src/Clasificador_Parkinsionismos_vs_control_emxutil.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxutil.c.o"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxutil.c.o   -c /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/Clasificador_Parkinsionismos_vs_control_emxutil.c

src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxutil.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxutil.c.i"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/Clasificador_Parkinsionismos_vs_control_emxutil.c > CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxutil.c.i

src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxutil.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxutil.c.s"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/Clasificador_Parkinsionismos_vs_control_emxutil.c -o CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxutil.c.s

src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_initialize.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_initialize.c.o: src/Clasificador_Parkinsionismos_vs_control_initialize.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_initialize.c.o"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_initialize.c.o   -c /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/Clasificador_Parkinsionismos_vs_control_initialize.c

src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_initialize.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_initialize.c.i"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/Clasificador_Parkinsionismos_vs_control_initialize.c > CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_initialize.c.i

src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_initialize.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_initialize.c.s"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/Clasificador_Parkinsionismos_vs_control_initialize.c -o CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_initialize.c.s

src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_terminate.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_terminate.c.o: src/Clasificador_Parkinsionismos_vs_control_terminate.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_terminate.c.o"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_terminate.c.o   -c /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/Clasificador_Parkinsionismos_vs_control_terminate.c

src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_terminate.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_terminate.c.i"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/Clasificador_Parkinsionismos_vs_control_terminate.c > CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_terminate.c.i

src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_terminate.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_terminate.c.s"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/Clasificador_Parkinsionismos_vs_control_terminate.c -o CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_terminate.c.s

src/CMakeFiles/main.dir/CompactClassificationTree.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/CompactClassificationTree.c.o: src/CompactClassificationTree.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object src/CMakeFiles/main.dir/CompactClassificationTree.c.o"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/CompactClassificationTree.c.o   -c /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/CompactClassificationTree.c

src/CMakeFiles/main.dir/CompactClassificationTree.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/CompactClassificationTree.c.i"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/CompactClassificationTree.c > CMakeFiles/main.dir/CompactClassificationTree.c.i

src/CMakeFiles/main.dir/CompactClassificationTree.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/CompactClassificationTree.c.s"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/CompactClassificationTree.c -o CMakeFiles/main.dir/CompactClassificationTree.c.s

src/CMakeFiles/main.dir/rtGetInf.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/rtGetInf.c.o: src/rtGetInf.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object src/CMakeFiles/main.dir/rtGetInf.c.o"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/rtGetInf.c.o   -c /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/rtGetInf.c

src/CMakeFiles/main.dir/rtGetInf.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/rtGetInf.c.i"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/rtGetInf.c > CMakeFiles/main.dir/rtGetInf.c.i

src/CMakeFiles/main.dir/rtGetInf.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/rtGetInf.c.s"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/rtGetInf.c -o CMakeFiles/main.dir/rtGetInf.c.s

src/CMakeFiles/main.dir/rtGetNaN.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/rtGetNaN.c.o: src/rtGetNaN.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object src/CMakeFiles/main.dir/rtGetNaN.c.o"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/rtGetNaN.c.o   -c /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/rtGetNaN.c

src/CMakeFiles/main.dir/rtGetNaN.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/rtGetNaN.c.i"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/rtGetNaN.c > CMakeFiles/main.dir/rtGetNaN.c.i

src/CMakeFiles/main.dir/rtGetNaN.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/rtGetNaN.c.s"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/rtGetNaN.c -o CMakeFiles/main.dir/rtGetNaN.c.s

src/CMakeFiles/main.dir/rt_nonfinite.c.o: src/CMakeFiles/main.dir/flags.make
src/CMakeFiles/main.dir/rt_nonfinite.c.o: src/rt_nonfinite.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object src/CMakeFiles/main.dir/rt_nonfinite.c.o"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/main.dir/rt_nonfinite.c.o   -c /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/rt_nonfinite.c

src/CMakeFiles/main.dir/rt_nonfinite.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/main.dir/rt_nonfinite.c.i"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/rt_nonfinite.c > CMakeFiles/main.dir/rt_nonfinite.c.i

src/CMakeFiles/main.dir/rt_nonfinite.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/main.dir/rt_nonfinite.c.s"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && /usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/rt_nonfinite.c -o CMakeFiles/main.dir/rt_nonfinite.c.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/main.c.o" \
"CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control.c.o" \
"CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxAPI.c.o" \
"CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxutil.c.o" \
"CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_initialize.c.o" \
"CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_terminate.c.o" \
"CMakeFiles/main.dir/CompactClassificationTree.c.o" \
"CMakeFiles/main.dir/rtGetInf.c.o" \
"CMakeFiles/main.dir/rtGetNaN.c.o" \
"CMakeFiles/main.dir/rt_nonfinite.c.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

src/main: src/CMakeFiles/main.dir/main.c.o
src/main: src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control.c.o
src/main: src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxAPI.c.o
src/main: src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_emxutil.c.o
src/main: src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_initialize.c.o
src/main: src/CMakeFiles/main.dir/Clasificador_Parkinsionismos_vs_control_terminate.c.o
src/main: src/CMakeFiles/main.dir/CompactClassificationTree.c.o
src/main: src/CMakeFiles/main.dir/rtGetInf.c.o
src/main: src/CMakeFiles/main.dir/rtGetNaN.c.o
src/main: src/CMakeFiles/main.dir/rt_nonfinite.c.o
src/main: src/CMakeFiles/main.dir/build.make
src/main: src/CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Linking C executable main"
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
src/CMakeFiles/main.dir/build: src/main

.PHONY : src/CMakeFiles/main.dir/build

src/CMakeFiles/main.dir/clean:
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src && $(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : src/CMakeFiles/main.dir/clean

src/CMakeFiles/main.dir/depend:
	cd /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src /home/andresagudelo/Documentos/OCTAVEproyects/Clasificadores/Clasificador_Parkinsionismos_vs_control/src/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/CMakeFiles/main.dir/depend

