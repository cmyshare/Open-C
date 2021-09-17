//将数组a中整数按相反顺序存放
#include<stdio.h>
int main(){
    void inv(int *x,int n); //3指针变量作实参形参
    int i,a[10],*p=a; //指针变量指向a[0]
    printf("The original array:\n");
    for(i=0;i<10;i++,p++)
        scanf("%d",p);  //输入a数组元素
    printf("\n");
    p=a; //p又重新指向a[0]
    inv(p,10);
    printf("The array has been inverted:\n");
    for(p=a;p<a+10;p++)
        printf("%d",*p);
    printf("\n");
    return 0;
}


//3指针变量作实参形参
void inv(int *x,int n){
    int *p,temp,*i,*j,m=(n-1)/2;
    i=x;j=x+n-1;p=x+m;
    for(;i<=p;i++,j--){
        temp=*i;*i=*j;*j=temp;
    }
    return;
}

