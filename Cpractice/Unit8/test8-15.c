//在8-14的基础上，查找有一门以上课程不及格的学生，输出他们全部课程成绩
#include<stdio.h>
int main(){
    //指向具有4个元素的一维数组的指针  为形参
    void search(float (*p)[4],int n);
    //定义一个3行4列的二维数组
    float score[3][4]={{65,57,70,60},{58,87,90,81},{90,99,100,98}};
    //score二维数组名 代表首行地址 n=3为行序号
    search(score,3);
    return 0;
}


//score二维数组名 代表首行地址 n为行序号
void search(float (*p)[4],int n){
    int i,j,flag;
    for(j=0;j<n;j++){ //循环行序号
        flag=0;

        for(i=0;i<4;i++){//循环列序号
//判断二维数组中小于60的元素  所在行列位置  a[j][i]
            if(*(*(p+j)+i)<60){
                flag=1;
            }

            if (flag==1){
                printf("No.%d fails,his scores are:\n",j+1);
                for(i=0;i<4;i++){ //根据行序号，循环列序号
                    //*(p+n)为序号为j的数组的首元素地址   *(*(p+j)+i))为元素值
                    printf("%5.1f",*(*(p+j)+i));
                }
                printf("\n");
            }
        }
    }
}

