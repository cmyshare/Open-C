#include <stdio.h>
//*冒泡排序
//int main()
//{
//    int i,j,t,a[11];    //定义变量及数组为基本整型
//    printf("请输入10个数：\n");
//    for(i=1;i<11;i++)
//        scanf("%d",&a[i]);    //从键盘中输入10个数
//    for(i=1;i<10;i++)    //变量i代表比较的趟数
//        for(j=1;j<11-i;j++)    //变最j代表每趟两两比较的次数
//            if(a[j]>a[j+1])
//            {
//                t=a[j];    //产利用中间变童实现两值互换
//                a[j]=a[j+1];
//                a[j+1]=t;
//            }
//    printf("排序后的顺序是：\n");
//    for(i=1;i<=10;i++)
//        printf("%5d",a[i]);    //将胃泡排序后的顺序输出
//    printf("\n");
//    return 0;
//}

////冒泡练习
//int main(){
//    int a[10]={10,9,8,7,6,5,4,3,2,1};
//    for (int i = 0; i < 10-1; ++i) //需要比较n-1次
//    {
//        for (int j = 0; j < 10-1-i; ++j) {
//            if (a[j]>a[j+1]){
//                int temp=a[j];
//                a[j]=a[j+1];
//                a[j+1]=temp;
//            }
//        }
//    }
//
//    for (int i = 0; i < 10; ++i) {
//        printf("%d\t",a[i]);
//    }
//}

//采用引用方式(call by reference)，会改变实参的参数。
//C中参数的传递有两种，一种是按值传递call by value（传递的是具体的值，如基础数据类型），
//另一种是按引用传递call by reference（传递的是对象的引用，即对象的存储地址）。
int calculate(int * x){
    int m=2;
    m=*x * 2;
    *x=m-1;
    return *x+m;
}
int main(){
    int a=5,c;
    c=calculate(&a);
    printf("{%d}",a+c);
    return a+c;
}

//int main(){
//    printf("%d",f());
//}
