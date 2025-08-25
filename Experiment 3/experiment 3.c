//Write an OpenMP program to print Hello world with thread ID.

#include <stdio.h>
#include <omp.h>

int main(void) {
    #pragma omp parallel
    {
        int tid = omp_get_thread_num();
        int nthreads = omp_get_num_threads();
        printf("Hello World from thread %d of %d\n", tid, nthreads);
    }
    return 0;
}
