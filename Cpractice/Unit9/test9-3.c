// 编写一个统计票的程序，先后输入被选人的名字，最后输出各备选人得票结果
#include<stdio.h>
#include<string.h>
// 结构体变量与结构体数组区别：不涉及多条数据的处理用结构体变量，反之用结构体数组

struct Person //声明结构体类型struct Person
        {
    char name[20]; //候选人名字
    int count; //得票数
}
leader[3]={"Li",0,"Zhang",0,"Sun",0}; //定义结构体数组并初始化
int main(){
    int i,j;
    char leader_name[20]; //定义字符数组
    printf("候选人名单: Li\t Zhang\t Sun\t");
    for(i=1;i<=10;i++) //选票的次数
    {
        scanf("%s",leader_name); //输入所选的名字
        for(j=0;j<3;j++)
            if(strcmp(leader_name,leader[j].name)==0)leader[j].count++; //判断输入的名字
    }
    printf("\nResult:\n");
    //输出选票结果
    for(i=0;i<3;i++)
        printf("%5s:%d\n",leader[i].name,leader[i].count);
    return 0;
}
