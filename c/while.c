#include <stdio.h>
int main(){
    int x;
    int n=0;
    scanf("%d",&x);
    do{
        x/=10;
        n++;
    }while(x>0);

    printf("该数有%d位\n",n);
    return 0;
}