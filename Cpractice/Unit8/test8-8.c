//将数组a中整数按相反顺序存放
#include<stdio.h>
int main(){
//    void inv(int x[],int n); //1用数组名作形参
    void inv(int *x,int n); //2指针变量作形参
    int i,a[10]={3,7,9,11,0,6,7,5,4,2};
    printf("The original array:\n");
    for(i=0;i<10;i++)
        printf("%d",a[i]);
    printf("\n");
    inv(a,10);
    printf("The array has been inverted:\n");
    for(i=0;i<10;i++)
        printf("%d",a[i]);
    printf("\n");
    return 0;
}

//1用数组名作形参
//void inv(int x[],int n){
//    int temp,i,j,m=(n-1)/2;
//    for(i=0;i<=m;i++){
//        j=n-1-i;
//        temp=x[i];x[i]=x[j];x[j]=temp;
//    }
//}

//2指针变量作形参
void inv(int *x,int n){
    int *p,temp,*i,*j,m=(n-1)/2;
    i=x;j=x+n-1;p=x+m;
    for(;i<=p;i++,j--){
        temp=*i;*i=*j;*j=temp;
    }
    return;
}

