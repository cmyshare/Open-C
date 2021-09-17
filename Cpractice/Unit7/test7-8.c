//递归方法汉诺塔问题
#include<stdio.h>
int main(){
    void hanoi(int n,char one,char two,char three);
    int m;
    printf("input the number of diskes:");
    scanf("%d",&m);
    printf("the step to move %d diskes:\n",m);
    hanoi(m,'A','B','C');
}

//将n个盘子从one座借助two座，移到three座   n=3
void hanoi(int n,char one,char two,char three){
    void move(char x,char y);

    if(n==1){
        move(one,three);
    }else{
        hanoi(n-1,one,three,two);
        move(one,three);
        hanoi(n-1,two,one,three);
        //h(2,a,b,c) —— h(1,a,b,c) 1 a-b 2 h(1,c,a,b) 3
        //a-c 4
        //h(2,b,a,c) —— h(1,b,c,a) 5 b-c 6 h(1,a,b,c) 7
    }
}

void move(char x,char y){
    printf("%c-->%c\n",x,y);
}


