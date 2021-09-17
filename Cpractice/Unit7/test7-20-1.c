//有一个字符串，输入一个字符，删除字符串和输入的一样的字符。
//用输入字符串，删除字符串，输出字符串三个函数实现
#include<stdio.h>

int main(){
    extern void enter_string(char str[]);//声明函数，调用外面的函数
    extern void delete_string(char str[],char ch);
    extern void print_string(char str[]);

    char c,str[80];
    enter_string(str);
    scanf("%c",&c);//输入要删除的字符
    delete_string(str,c);
    print_string(str);
    return 0;
}

