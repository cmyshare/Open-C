//写一函数建立一个有3名学生数据得单向动态链表
//实现动态链表，需要用到动态内存分配的知识和有关函数(malloc,calloc,realloc,free)
#include<stdio.h>
#include<stdlib.h>
//sizeof()是一个关键字，它是一个编译时运算符，用于判断变量或数据类型的字节大小。
#define LEN sizeof(struct Student) //定义一个字符常量

//声明结构体类型struct Student
struct Student{
    long num;
    float score;
    struct Student * next;
};

int n;
//定义指针型函数，返回一个指向链表头的指针
struct Student*creat(void){
    //定义指向struct Student类型数据的指针变量head
    struct Student *head;
    //定义指向struct Student类型数据的指针变量p1,p2
    struct Student *p1,*p2;
    //结点个数n
    n=0;
    //开辟新单元，动态内存区，将地址转成struct Student*类型，然后放在p1,p2中
    p1=p2=(struct Student*)malloc(LEN);
    //输入第一个学生的学号和成绩
    scanf("%ld,%f",&p1->num,&p1->score);
    //头指针默认为NULL
    head=NULL;
    //p1,p2一开始都指向第一个结点
    //输入p1->num!=0，则输入第一个结点数据，反之建立链表的过程完成。
    while (p1->num!=0){
        //结点数+1
        n=n+1;
        //判断是否为第一个结点,是p1地址给head
        if(n==1)head=p1;
        //否则把p1给p2的next指针域
        else p2->next=p1;
        //然后让p2指向刚才建立的结点(第二个结点)
        p2=p1;

        //下面的结点添加就以此类推，每次添加完成，p1,p2都指向新添加的结点，为下次添加做准备

        //开辟动态储存区，把起始地址赋给p1,  p1为活动指针 p2为跟进指针
        p1=(struct Student*)malloc(LEN);
        //输入其他学生的学号和成绩
        scanf("%ld,%f",&p1->num,&p1->score);
    }
    //由于p1->num=0  将null赋给p2->next
    p2->next=NULL;
    return (head);
}

//写一个main函数，调用返回链表第一个结点的地址
int main(){
    //定义指向struct Student类型数据的指针变量pt
    struct Student *pt;
    //函数返回链表第一个结点的地址
//    printf("\n NOW，These %d records are:\n",n);
    pt=creat();
    //输出第一个结点的成员值
    printf("\n num:%ld\n score:%5.1f\n",pt->num,pt->score);
    return 0;
}