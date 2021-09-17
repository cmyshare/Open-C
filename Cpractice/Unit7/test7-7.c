//递归方法求n!
#include<stdio.h>
int main(){
    int face(int n);
    int n;
    int y;
    printf("input integer number:");
    scanf("%d",&n);
    y=face(n);
    printf("%d!=%d\n",n,y);
    return 0;
}

int face(int n){

    int f;
    if(n<0){   //编译顺序：当face(2)时，f=face(1)*2   当face(1)时 f=1  然后倒着推回去
        //人为理解：f=f(4)*5  f=f(3)*4*5  f=f(2)*3*4*5  f=f(1)*2*3*4*5
        printf("n<0,data error!");
    }else if(n==0||n==1){
        f=1;
    }else
        f=face(n-1)*n;

    return(f);
}

