#include <stdlib.h>  
  
int main() {  
    int *ptr;  
    int num = 5;  
  
    // �����ڴ�ռ�  
    ptr = (int*)malloc(num * sizeof(int));  
  
    // ����ڴ��Ƿ�ɹ�����  
    if (ptr == NULL) {  
        printf("�ڴ����ʧ��\n");  
        return -1;  
    }  
  
    // ��ʼ��������ڴ�ռ�  
    for (int i = 0; i < num; i++) {  
        ptr[i] = i + 1;  
    }  
  
    // ��ӡ����Ԫ��  
    for (int i = 0; i < num; i++) {  
        printf("%d ", ptr[i]);  
    }  
  
    // �ͷ��ڴ�ռ�  
    free(ptr);  
  
    return 0;  
}
