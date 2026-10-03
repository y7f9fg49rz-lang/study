#include <stdio.h>

int add(int a, int b){
    return a + b;
}

//一球从100米高度自由落下，每次落地后反跳回原高度的一半；再落下，求它在第10次落地时，共经过多少米？第10次反弹多高？
void ball(){
    float height = 100;
    float total = 0;
    for(int i = 0; i < 10; i++){
        if(i == 0){
            total = total + height;
        } else {
            total = total+ height * 2;
        }
        height = height / 2;
    }
    printf("共经过%f米, 第 10 次反弹：%f",total, height);
}

//猴子吃桃问题：猴子第一天吃了若干个桃子，当即吃了一半，还不解馋，又多吃了一个； 第二天，吃剩下的桃子的一半，还不过瘾，又多吃了一个；以后每天都吃前一天剩下的一半多一个，到第10天想再吃时，只剩下一个桃子了。问第一天共吃了多少个桃子？
void monkey(){

}

int main(){
    ball();
    return 0;
}

