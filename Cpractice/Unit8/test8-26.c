//对例8.25中学生，找出其中有不及格课程的学生各科成绩及其学生号(指针型函数，返回地址)
#include<stdio.h>
int main(){
    //定义二维数组
    float score[][4]={{60,70,80,90},{56,89,67,88},{34,78,90,66}};
    //声明指针型函数 返回指针型数据  形参：指向float类型一维数组的指针
    float *search(float (*pointer)[4]);
    //定义指向浮点型的指针变量
    float *p;
    int i,j;
    for(i=0;i<3;i++){
        //调用search函数，如果有不及格返回score[i][0]地址,否则返回NULL
        p=search(score+i);
        if(p==*(score+i)){
            //输出学生的序号
            printf("No.%d score:",i);
            //输出学生各科成绩
            for(j=0;j<4;j++)
                printf("%5.2f ",*(p+j));
            printf("\n");
        }
    }
    return 0;

}

float *search(float (*pointer)[4]){
    int i=0;
    float *pt;
    //先使pt=NULL
    pt=NULL;
    for (; i<4 ; i++)
        //返回&score[i][0]=score[i]
        if (*(*pointer+i)<60) pt=*pointer;
    return (pt);
}
