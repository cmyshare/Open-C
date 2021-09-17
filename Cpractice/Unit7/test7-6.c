//递归方法求第五个学生年龄
#include<stdio.h>
int main(){
    int age(int n);
    printf("NO.5,age:%d",age(5));
    return 0;
}

int age(int n){
    //n=5 c=age(4)+2 n=4 c=age(3)+4
    //n=3 c=age(2)+6 n=2 c=age(1)+8  n=1  age(1)=10
    int c;
    if(n==1){
        c=10;
    }else{
        c=age(n-1)+2;
    }
    return(c);
}

