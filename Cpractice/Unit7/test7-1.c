//函数调用输出字符串
#include <stdio.h>

//int main() {
//    void printf_star();
//    void printf_messager();
//    printf_star();
//    printf_messager();
//    printf_star();
//    return 0;
//}
//
//void printf_star(){
//    printf("*************\n");
//}
//
//void printf_messager(){
//    printf("How do you do!\n");
//}


int main(){
    int a[10]={10,1,3,5,7,9,2,4,6,8};
    int i,j,t;

//    for(i=0;i<9;i++)  //冒泡排序
//        for(j=0;j<9-i;j++)
//            if(a[j]>a[j+1]){
//                t=a[j];
//                a[j]=a[j+1];
//                a[j+1]=t;
//            }
    int min;
    for(i=0;i<9;i++){  //选择排序
        min=i;
        for(j=i+1;j<10;j++){
            if(a[j]<a[min]){
                min=j;
            }
        }
        t=a[i]; a[i]=a[min]; a[min]=t;
        }
         //swap(&arr[min], &arr[i]);    //做交換

    printf("输出数组:\n");
    for(i=0;i<10;i++){
        printf("%d",a[i]);
    }
    return 0;
}

