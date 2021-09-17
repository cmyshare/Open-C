//指向结构体数组的指针
//有3个学生的信息，放在结构体数组中，输出全部学生信息
#include<stdio.h>
//声明结构体类型struct Student
struct Student{
    int num;
    char name[20];
    char sex;
    int age;
};
//定义结构体数组初始化
struct Student stu[3]={{10101,"Li Lin",'M',18},
        {10102,"Zhang Fang",'M',19},
        {10103,"Wang Min",'F',20}};

int main(){
    //定义指向struct Student结构体变量的指针变量p
    struct Student*p;
    printf("No.    Name                sex age\n");
    //把结构体数组名赋值给p
    for(p=stu;p<stu+3;p++){
        //输出p指向的成员num,sex,age
        printf("%5d %-20s %2c %4d\n",p->num,p->name,p->sex,p->age);
    }
    return 0;
}
