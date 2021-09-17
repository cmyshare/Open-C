//用结构体变量和结构体变量的指针作为函数参数
//有n个结构体变量，内含学生学号、姓名、3门课的成绩。要求输出平均成绩最高的学生信息
#include<stdio.h>
#define N 3  //定义字符常量
struct Student{ //建立结构体类型struct Student
    int num;
    char name[20];
    float score[3];
    float aver;
};

int main(){
    void input(struct Student stu[]); //输入函数声明
    struct Student max(struct Student stu[]); //最大值函数声明
    void print(struct Student stu); //输出函数声明
    struct Student stu[N],*p=stu; //定义结构体数组和指针
    input (p); //调用input函数
    print(max(p));//调用print函数,以max函数的返回值struct Student类型作为实参
    return 0;
}

void input(struct Student stu[]){ //定义input函数
    int i;
    printf("请输入各学生的信息：学号、姓名、三门课成绩:\n");
    for(i=0;i<N;i++){
        //输入数据
        scanf("%d %s %f %f %f",&stu[i].num,
              stu[i].name,&stu[i].score[0],
              &stu[i].score[1],&stu[i].score[2]);
        //求平均成绩
        stu[i].aver=(stu[i].score[0]+stu[i].score[1]+stu[i].score[2])/3.0;
    }
}

struct Student max(struct Student stu[]){ //定义max函数
    int i,m=0; //用m存放成绩最高的学生在数组中的序号
    for(i=0;i<N;i++)
        if (stu[i].aver>stu[m].aver) m=i; //找出平均成绩最高的学生在数组中的序号
    return stu[m]; //返回包含该生信息的结构体元素
}

void print(struct Student stud){ //定义print函数
    printf("\n成绩最高的学生是：\n");
    printf("学号：%d\n 姓名：%s\n 三门课成绩：%5.1f %5.1f %5.1f\n 平均成绩：%6.2f\n",
           stud.num,stud.name,stud.score[0],stud.score[1],stud.score[2],stud.aver);
}