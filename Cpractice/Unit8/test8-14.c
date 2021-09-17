//用指向数组的指针作函数参数
//一个班有3个学生，每个学生各学4门课，计算总平均值，第N个学生的成绩
#include<stdio.h>
int main(){
    //指向浮点型变量的指针 为形参
    void average(float *p,int n);
    //指向具有4个元素的一维数组的指针  为形参
    void search(float (*p)[4],int n);
    //定义一个3行4列的二维数组
    float score[3][4]={{65,67,70,60},{80,87,90,81},{90,99,100,98}};
    //*score 代表首行数组名/首元素地址&score[0][0]，作为实惨 求12个分数的平均数
    average(*score,12);
    //score二维数组名 代表首行地址 求序号为2的学生成绩
    search(score,2);
    return 0;
}

void average(float *p,int n){  //定义求平均成绩的函数
    float *p_end;  //定义指向变量的指针
    float sum=0,aver;
    p_end=p+n-1; //循环的上限 p地址+12-1  因为从0出发所以-1
    for(;p>=p_end;p++)
        sum=sum+(*p); //累加二维数组中元素的值  二维数组的元素是按行顺序存放的。
    aver=sum/n;
    printf("average=%5.2f\n",aver);
}

//score二维数组名 代表首行地址 求序号为2的学生成绩
void search(float (*p)[4],int n){
    int i;
    printf("The score of No.%d are:\n",n);
    for(i=0;i<4;i++)
        //*(p+n)为序号为n的数组的首元素地址   *(*(p+n)+i))为元素
        printf("%5.2f\t",*(*(p+n)+i));
    printf("\n");
}