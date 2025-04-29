#include <stdio.h>  
#include <stdlib.h>  
  
int main() {  
    int *pi;  
    int n = 5;  
  
    pi = (int*) calloc(n, sizeof(int));  
    if (pi == NULL) {  
        printf("Memory allocation failed.\n");  
        return 1;  
    }  
  
    // 使用分配的内存空间  
    for (int i = 0; i < n; i++) {  
        pi[i] = i + 1;  
        printf("%d ", pi[i]);  
    }  
    printf("\n");  
  
    // 释放分配的内存空间  
    free(pi);  
  
    return 0;  
}
