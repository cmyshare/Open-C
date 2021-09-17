//编写一个输出链表中各结点的函数print  输出链表
#include<stdio.h>
#include<stdlib.h>
#define LEN sizeof(struct Student) //定义字符常量
//声明结构体类型struct Student
struct Student{
    long num;
    float score;
    struct Student * next;
};

int n; //全局变量

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
    //返回头指针
    return (head);
}




//定义print函数
void print(struct Student * head){
    //在函数中定义struct Student类型的指针变量p
    struct Student*p;
    printf("\nNow,These %d records are:\n",n);
    //p指向第一个结点
    p=head;
    //若不是为空
    if(head!=NULL)
        do {
            //输出一个结点中的学号与成绩
            printf("%ld %5.1f\n",p->num,p->score);
            //p指向下一个结点
            p=p->next;
        }while (p!=NULL);//当p不是空地址
}

void main(){
    struct Student * head;
    //调用creat函数，返回第一个结点的起始地址
    head=creat();
    //调用print函数
    print(head);
}


