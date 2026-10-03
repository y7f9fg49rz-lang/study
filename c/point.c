#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "zh_CN.UTF-8");
    int a = 100;
    int *pointer_a;
    pointer_a = &a;
    printf("a的值: %d\n", a);
    printf("a的内存地址: %p\n", &a);
    printf("pointer_a存储的地址 = %p\n", pointer_a);
    printf("通过指针取出a的值 = %d\n", *pointer_a);    

    int b = 200;
    printf("b的值: %d\n", b);
    printf("b的内存地址: %p\n", &b);
    b = 300;
    printf("b的内存地址: %p\n", &b);
    return 0;
}