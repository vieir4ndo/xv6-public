#include "types.h"
#include "stat.h"
#include "user.h"
#include "fcntl.h"

int 
main(int argc, char *argv[]){

    printf(1, "No. of system calls made: %d.\n", csc());
    exit();
}