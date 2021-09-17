//通过字符指针变量输出一个字符串
#include<stdio.h>
int main(){
    //定义char*字符型的字符指针变量string，用字符串"I love China"初始化
    //把字符串"I love China"第一个元素的地址赋给字符指针
    char *string={"I love China"};
    //char *string="I love China";
    //输出机制，输出string所指向的字符串第一个字符，然后自动+1，
    // 指向下一个字符，再输出第二个字符，以此内推，直到遇到空字符('\0')结束
    printf("%s\n",string);
    return 0;
}

