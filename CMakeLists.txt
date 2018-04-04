cmake_minimum_required (VERSION 2.8.12)

# Project step I: Check dependencies
# ------------------------------------------------------------------------------------------------------
include(CheckCXXCompilerFlag)
include(CheckCXXSourceRuns)


# Project step II: Set up project name
# ------------------------------------------------------------------------------------------------------
set(PROJ_MAIN_NAME minilogger)
project(${PROJ_MAIN_NAME})

# Required libraries, flags, and include files for compiling and linking against MINILOGGER (all targets)
set(MINILOGGER_EXTRA_LIBS "")
set(MINILOGGER_EXTRA_DEFS "")
set(MINILOGGER_EXTRA_INCS "")

# Project step III: Add minilogger VAR
# ------------------------------------------------------------------------------------------------------
list(APPEND MINILOGGER_EXTRA_INCS "${CMAKE_CURRENT_SOURCE_DIR}/minilogger/include")
MESSAGE("Using minilogger from: ${MINILOGGER_EXTRA_INCS}")

# Project step IV: Add samples
# ------------------------------------------------------------------------------------------------------
add_subdirectory(samples)
