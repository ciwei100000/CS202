#include "types.h"
#include "x86.h"
#include "defs.h"
#include "date.h"
#include "param.h"
#include "memlayout.h"
#include "mmu.h"
#include "proc.h"

uint
procinfo(int param)
{
    uint ret = 0;
    if(param == 0 || param > 3)
 	return 0;
    if(param == 1)
	ret = proccount();
    if(param == 2)
	ret = proc->syscallcount;
    if(param == 3)
	ret = (proc->sz / PGSIZE);
    return ret;
}

