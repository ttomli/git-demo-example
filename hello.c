#include <stdio.h>

int main() {
    printf("Hello, World!!\n");

    
    // ─────── Example 3: Out‐of‐bounds array access ───────
    int arr[3] = {1,2,3};
    arr[5] = 99;     // → SIGSEGV (often a crash)

    return 0;
}

