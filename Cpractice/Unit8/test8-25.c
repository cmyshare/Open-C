//有a个学生，每个学生有b门课程的成绩。要求在用户输入学生序号后，能输出该生的全部成绩
//用指针函数来实现
#include<stdio.h>
int main(){
    //定义二维数组
    float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    //声明指针型函数 返回指针型数据
    float *search(float (*pointer)[4],int n);
    //定义指向浮点型的指针变量
    float *p;
    //定义整型变量
    int i,k;
    printf("enter the number of student:");
    //输入要找的学生序号
    scanf("%d",&k);
    printf("The scores of No.%d are:\n",k);
    //调用search函数，返回score[k][0]地址
    p=search(score,k);
    for(i=0;i<4;i++)
        //输出score[k][0]--score[k][3]的值
        printf("%5.2f\t",*(p+i));
    printf("\n");
    return 0;
}

//形参pointer是指向一维数组的指针变量 返回float类型指针变量
float *search(float (*pointer)[4],int n){
    float *pt;
    //pt的值是&score[k][0],因为score指向score[0] 代表score[0]地址
    //第几序号的数据score[n]=*(pointer+n)
    pt=*(pointer+n);
    return (pt);
}
