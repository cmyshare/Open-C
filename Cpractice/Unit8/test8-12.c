//用指向元素的指针变量输出二维数组各元素的值
#include<stdio.h>
int main(){
    int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
    int *p;//指向各个元素的指针   p指向整型变量
    // 因为二维数组是按行顺序存放，存完一行数据，在存下一行
    //可以通过地址，顺序输出。
    for(p=a[0];p<a[0]+12;p++){
        if ((p-a[0])%4==0) printf("\n");
        printf("%4d",*p);
    }
    printf("\n");
    return 0;
}