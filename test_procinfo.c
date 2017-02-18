#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    printf(1, "There are %d processes (RUNNING, RUNABLE, SLEEPING, ZOMBIE)\n", procinfo(1));
    printf(1, "Current process has made %d system calls\n", procinfo(2));
    printf(1, "Current process has %d pages\n", procinfo(3));
    exit();
}

