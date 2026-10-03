#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    // 随机产生一个 100 以内的整数
    srand(time(0));
    int a=rand()%100+1;   // 1~100

    int guess;
    int count=0;
    printf("我想好了一个1到100之间的数，来猜吧！\n");
    do {
        if (scanf("%d",&guess)!=1){
            printf("输入无效\n");
            return 1;
        }
        count++;
        if (guess>a){
            printf("大了！\n");
        } else if (guess<a){
            printf("小了！\n");
        } else {
            printf("猜对了！你一共猜了%d次\n",count);
        }
    } while (guess!=a);

    return 0;
}