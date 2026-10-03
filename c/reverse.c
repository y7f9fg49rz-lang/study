#include <stdio.h>
#include <string.h>

void reverse(char str[10]){
    printf("请输入字符串：");
    scanf("%s", str);
    // 逆序打印
    for (int i = strlen(str)-1; i >= 0; i--) {
        putchar(str[i]);
    }    
}

float add(float a, float b){
    float num = a + b;
    return num;
}

int main() {
    char str[10];
    reverse(str);    

    float r = add(0.1, 0.2);
    printf("%f",r);
    return 0;
}

