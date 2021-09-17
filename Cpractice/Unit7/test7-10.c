//数组名作为参数，有10个数求平均数
#include<stdio.h>
int main(){

    float average(float array[10]);
    float score[10],aver;
    int i;
    printf("input 10 scores:\n");

    for(i=0;i<10;i++)  //输入10个数，放入数组
        scanf("%f",&score[i]);
    printf("\n");

    aver=average(score);  //调用求平均数函数
    printf("average score is %5.2f\n",aver);
    return 0;
}

float average(float array[10]){
    int i;
    float aver,sum=array[0];
    for (i = 1; i < 10; i++)
        sum=sum+array[i];
    aver=sum/10;
    return (aver);
}




