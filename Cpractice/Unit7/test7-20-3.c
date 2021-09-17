#include<stdio.h>
void delete_string(char str[80],char ch){ //定义外部函数，删除字符串
  int i,j;
  for(i=j=0;str[i]!='\0';i++)
      if(str[i]!=ch)
          str[j++]=str[i];
      str[j]='\0';
}

