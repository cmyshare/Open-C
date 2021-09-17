//输出二位数组任一行任一列元素的值，定义一个指向数组的指针变量
#include<stdio.h>
int main(){
    int a[3][4]={1,3,5,7,9,11,13,15,17,19,21,23};
    int (*p)[4],i,j; //指针变量P指向包含4个整形元素的一维数组
    p=a;//p指向二维数组的0行
    printf("please enter row and colum:");
    scanf("%d,%d",&i,&j);
    printf("a[%d,%d]=%d\n",i,j,*(*(p+i)+j));
    return 0;
}
