######################################################################
#
# CMAKE build recipe for pc-linux PSP component
#
######################################################################

# This contains the fully platform-specific code to 
# run CFE on this target.

include_directories(inc) 

get_filename_component(HOME_DIR_PATH "~" ABSOLUTE)
configure_file(
  "${CMAKE_CURRENT_SOURCE_DIR}/inc/cfe_psp_config.h.in"
  "${CMAKE_CURRENT_SOURCE_DIR}/inc/cfe_psp_config.h")


# Build the pc-linux implementation as a library
add_library(psp-${CFE_PSP_TARGETNAME}-impl OBJECT
    src/cfe_psp_exception.c
    src/cfe_psp_memory.c
    src/cfe_psp_memtab.c
    src/cfe_psp_ssr.c
    src/cfe_psp_start.c
    src/cfe_psp_support.c
    src/cfe_psp_timer.c
    src/cfe_psp_watchdog.c)

