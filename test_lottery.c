#include "types.h"
#include "user.h"

int
main(int argc, char *argv[])
{
    int i,k,pid;
    const int loop=40000;
    
    pid = lofork(30);
    if(pid >0){
        pid = lofork(30);
        if(pid > 0)
            pid = lofork(20);
        if(pid > 0)
            pid = lofork(20);
        if(pid > 0)
            pid = lofork(10);
        if(pid > 0)
            pid = lofork(10);
                
    }
    
    if(pid > 0){
        wait();
        wait();
        wait();
        wait();
        wait();
        wait();
    }
    
    if(pid == 0){
    
        for(i=0;i<loop;i++){
	    asm("nop");
    	    for(k=0;k<loop;k++)
	        asm("nop");
        }
        lotterytest();
    }
 
    exit();
}

