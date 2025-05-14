#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Hello, World!!\n");

    // int pointer example
    int* numptr = malloc(sizeof(int));
    *numptr = 11;
    printf("The address of numptr is %p with value %d\n", (void *)numptr, *numptr); 
    printf("numptr + 2 = %d\n", *numptr + 2);
    
    // ─────── Example 3: Out‐of‐bounds array access ───────
    int arr[3] = {1,2,3};
    arr[5] = 99;     // → SIGSEGV (often a crash)

    return 0;
}

