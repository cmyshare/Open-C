////使用共用体变量 在数据处理中 对同一段空间安排不同的用途
#include<stdio.h>
//没有定义结构体类型名，不能以结构体类型去定义其他变量
struct{
    int num;
    char name[10];
    char sex;
    char job;
    //没有定义共用体类型名，不能以共用体类型去定义其他变量
    union{
        int clas;
        char position[10];
    }category; //成员category是共用体变量
}person[2]; //定义结构体数组变量 有两个元素

int main(){
    int i;
    for(i=0;i<2;i++){
        printf("please enter the data of person:\n");
        //输入前四项
        scanf("%d %s %c %c",&person[i].num,&person[i].name,&person[i].sex,&person[i].job);
        if (person[i].job=='s')   //如是学生，输入班级
            scanf("%d",&person[i].category.clas);
        else if (person[i].job=='t')   //如是教师，输入职务
            scanf("%s",person[i].category.position);
        else
            printf("Input error!"); //都不是，输入错误
    }
    printf("\n");
    printf("No. name   sex job class/position\n");
    for (i = 0;  i<2 ; i++) {
        if(person[i].job=='s') //若是学生
            printf("%-6d %-10s %-4c %-4c %-10d\n",person[i].num,person[i].name,
                   person[i].sex,person[i].job,person[i].category.clas);
        else //若是教师
            printf("%-6d %-10s %-4c %-4c %-10s\n",person[i].num,person[i].name,
                   person[i].sex,person[i].job,person[i].category.position);
    }
    return 0;
}

