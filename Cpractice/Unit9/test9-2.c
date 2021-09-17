// 输入两个学生的学号、姓名和成绩，输出成绩较高的学生信息
#include<stdio.h>
int main(){
    // 声明结构体类型struct Student
    struct Student{
        //下面4行为结构体的成员
        int num;
        char name[20];
        float score;
    }student1,student2;

    // %s  直接用字符数组名做地址列表，输入一个字符串
    scanf("%d%s%f",&student1.num,student1.name,&student1.score);
    scanf("%d%s%f",&student2.num,student2.name,&student2.score);
    printf("The higher score is:\n");

    if(student1.score>student2.score)
        printf("%d %s %6.2f\n",student1.num,student1.name,student1.score);
    else if(student1.score<student2.score)
        printf("%d %s %6.2f\n",student2.num,student2.name,student2.score);
    else{
        printf("%d %s %6.2f\n",student1.num,student1.name,student1.score);
        printf("%d %s %6.2f\n",student2.num,student2.name,student2.score);
    }

    return 0;
}
