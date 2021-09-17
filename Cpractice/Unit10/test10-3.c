////从键盘读入若干个字符串，对它们按字母大小的顺序排序，然后把排好序的字符串送到磁盘文件中保存
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    FILE *fp; //定义指向文件型数据的指针变量fp
    char str[3][10],temp[10]; //str是用来存放字符串的二维数组，temp是临时数组
    int i,j,k,n=3;
    printf("Enter strings:\n");//提示输入字符串
    for(i=0;i<n;i++)
    {
        gets(str[i]); //输入字符串
    }

    for(i=0;i<n-1;i++) //用选择法对字符串排序 从小到大
    {
        k=i;  //最小值
        for(j=i+1;j<n;j++){
            if (strcmp(str[k],str[j])>0) //j<k
            {
                k=j;
            }
        }
        if (k!=i){
            strcpy(temp,str[i]);
            strcpy(str[i],str[k]);
            strcpy(str[k],temp);
        }
    }

//    fp=fopen("D:\\CC\\string.dat","w");
    fp=fopen("file3.dat","w"); //打开磁盘文件
    if(fp==NULL){
        printf("can't open file!\n");
        exit(0);
    }

    printf("\nThe new sequence:\n");
    for(i=0;i<n;i++)
    {
    fputs(str[i],fp); fputs("\n",fp); //用fputs函数向磁盘文件写一个字符串,然后输出一个换行符
    printf("%s\n",str[i]); //在屏幕上显示
    }
    fclose(fp); //关闭文件

    ////从string.bat文件中读回字符串
    printf("\n");
    FILE * fp1;
    int i1=0;
    fp1=fopen("file3.dat","r"); //打开磁盘文件
    if(fp==NULL){
        printf("can't open file!\n");
        exit(0);
    }
    while (fgets(str[i],10,fp)!=NULL){
        printf("%s",str[i]);
        i1++;
    }
    fclose(fp1);

    return 0;
}
