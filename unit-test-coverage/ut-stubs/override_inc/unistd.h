/* PSP coverage stub replacement for unistd.h */
#ifndef OVERRIDE_UNISTD_H
#define OVERRIDE_UNISTD_H

#include "PCS_unistd.h"

/* ----------------------------------------- */
/* mappings for declarations in unistd.h */
/* ----------------------------------------- */

#define SEEK_SET      PCS_SEEK_SET
#define SEEK_CUR      PCS_SEEK_CUR
#define SEEK_END      PCS_SEEK_END
#define STDIN_FILENO  PCS_STDIN_FILENO
#define STDOUT_FILENO PCS_STDOUT_FILENO
#define STDERR_FILENO PCS_STDERR_FILENO

#define close       PCS_close
#define getegid     PCS_getegid
#define geteuid     PCS_geteuid
#define gethostid   PCS_gethostid
#define gethostname PCS_gethostname
#define getpid      PCS_getpid
#define lseek       PCS_lseek
#define read        PCS_read
#define rmdir       PCS_rmdir
#define sysconf     PCS_sysconf
#define write       PCS_write

#endif
