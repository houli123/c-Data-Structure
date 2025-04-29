#include <stdlib.h>  
  
int main() {  
    int *ptr;  
    int num = 5;  
  
    // 分配内存空间  
    ptr = (int*)malloc(num * sizeof(int));  
  
    // 检查内存是否成功分配  
    if (ptr == NULL) {  
        printf("内存分配失败\n");  
        return -1;  
    }  
  
    // 初始化分配的内存空间  
    for (int i = 0; i < num; i++) {  
        ptr[i] = i + 1;  
    }  
  
    // 打印数组元素  
    for (int i = 0; i < num; i++) {  
        printf("%d ", ptr[i]);  
    }  
  
    // 释放内存空间  
    free(ptr);  
  
    return 0;  
}
