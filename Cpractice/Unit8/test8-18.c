//将字符串a复制为字符串b，然后输出字符串b  用地址法算出各元素的值
#include<stdio.h>
int main(){
    char a[]="I am student.",b[20];
    int i;
    for(i=0;*(a+i)!='\0';i++)
        *(b+i)=*(a+i); //将a[i]的值赋给b[i]
    *(b+i)='\0'; //在b数组的有效字符后加'\0'
    printf("string a is:%s\n",a); //直接输出a数组中的全部有效字符
    printf("string b is:");
    for(i=0;b[i]!='\0';i++)
        printf("%c",b[i]); //逐个输出b数组中的全部有效字符
    printf("\n");
    return 0;
}

