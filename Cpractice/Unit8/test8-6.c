#include<stdio.h>
//1 下标法
//int main(){
//    int a[10];
//    int i;
//    printf("please enter 10 integer numbers:");
//    for(i=0;i<10;i++){
//        scanf("%d",&a[i]);
//    }
//    for (i = 0; i < 10; i++) {
//        printf("%d ",a[i]);
//    }
//    printf("\n");
//    return 0;
//}

//2 通过数组名计算数组元素地址，找出元素的值
//int main(){
//    int a[10];
//    int i;
//    printf("please enter 10 integer numbers:");
//    for(i=0;i<10;i++){
//        scanf("%d",a+i); //&a[i]为a[i]的地址，可以用a+i代替
//    }
//    for (i = 0; i < 10; i++) {
//        printf("%d ",*(&a[i]));   //通过数组名和元素序号计算元素地址，再找到该元素
//    }                                 //*(a+i)表示(a+i)所指向的数组元素a[i]
//    printf("\n");    //数组名a等价于数组首元素的地址
//    return 0;
//}

//3 用指针变量指向数组元素
int main(){
    int a[10];
    int *p,i;//定义一个int*的指针变量
    printf("please enter 10 integer numbers:");
    for(i=0;i<10;i++){
        scanf("%d",&a[i]); //&a[i]为a[i]的地址，可以用a+i代替
    }
    for (p=a; p < (a+10); p++) {  //p=a 把数组首元素地址给指针变量p  (a+10)为11个元素地址
        printf("%d ",*p);   //用指针指向当前的数组元素  可以把*p改为p
    }
    printf("\n");
    return 0;
}


