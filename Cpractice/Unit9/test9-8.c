//建立一个简单的静态链表 它由3个学生数据的节点组成，要求输出各节点中的数据
#include<stdio.h>
struct Student{ //声明结构体类型struct Student
    int num;
    float score;
    struct Student *next;
};

int main(){
    //定义3个结构体变量a,b,c作为链表的节点
    struct Student a,b,c,*head,*p;
    //对结点a,b,c的成员赋值
    a.num=10101; a.score=89.5;
    b.num=10103; b.score=90;
    c.num=10107; c.score=85;
    //将结点a的起始地址赋给头指针head
    head=&a;
    //将结点b的起始地址赋给a结点的next成员
    a.next=&b;
    //将结点c的起始地址赋给a结点的next成员
    b.next=&c;
    //将结点c的next成员设置为NULL
    c.next=NULL;
    //使p也指向a结点  将a结点的地址赋给指针变量p
    p=head;

    do{
        //输出p指向的结点的数据
        printf("%ld %5.1f\n",p->num,p->score);
        //使p指向下一个结点 p->next 等价于 (*p).next
        p=(*p).next;
    }while (p!=NULL); //输出完c结点后p的值为NULL，循环终止
    return 0;
}







