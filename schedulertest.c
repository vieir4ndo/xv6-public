//A Simple C program
#include "types.h"
#include "stat.h"
#include "user.h"
#include "syscall.h"
#define N 50000

//passing command line arguments

int aux[N], C[N];


void setArray(int dst[], int src[], int n){
    for(int i=0;i<n;i++){
        dst[i] = src[i];
    }
}

void generateRandDscArray(int randArray[], int n)
{
    for(int i=0;i<n;i++){
        randArray[i]=n-i;
    }
}

void swapValue(int *src, int *dst)
{
    int temp = *src;
    *src = *dst;
    *dst = temp;
}

long insertionSort(int A[], int n)
{
    int i, j, p;
    long comp = 0;

    for (i = 1; i < n; i++)
    {
        p = A[i];
        for (j = i;j > 0; j--)
        {
            comp++;
            if (p < A[j - 1])
                A[j] = A[j - 1];
            else
                break;
        }
        A[j] = p;
    }

    return comp;
}

int generateAndOrderArray(void) {
    generateRandDscArray(aux, N);

    setArray(C, aux, N);
    insertionSort(C, N);

    return 0;
}

void
schedulertest(void)
{
    int n, pid;

    int tickets[3] = { 100, 5000, 9999 };

    printf(1, "schedulertest test\n");

    for(n=0; n<3; n++){
        pid = fork(tickets[n]);
        if(pid < 0)
            break;
        if(pid == 0){
            // aqui faz a operação que leva bastante tempo
            // primeiro finaliza quem tem mais bilhetes
            generateAndOrderArray();
            printf(1, "Process #%d with %d tickets finished and was sorted %d times.\n", getpid(), tickets[n], getsortednumber());
            exit();
        }
    }

    for (int i = 0; i < 3; i++) {
        wait();
    }


    printf(1, "schedulertest test OK\n");
    exit();
}

int
main(void)
{
    schedulertest();
    exit();
}

