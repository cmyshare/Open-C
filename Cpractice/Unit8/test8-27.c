//将若干字符串按字母顺序(由大到小)输出  用指针数组方法
#include<stdio.h>
#include<string.h>
int main(){
    //比较函数 排序
    void sort(char * name[],int n);
    //输出函数 输出字符串
    void print(char * name[],int n);
    //定义一个指针数组，用各字符串对它进行初始化，即把各字符串中第一个字符的地址赋给指针数组的各元素
    //字符型指针数组，存放指针的数组，里面元素是指向字符串中首字符的指针
    char *name[]={"Follow","BASIC","Great Wall","FORTRAN","Computer design"};
    int n=5;
    //调用函数，传入指针数组的数组名，name[i]是一个指针
    sort(name,n);
    print(name,n);
    return 0;
}

void sort(char *name[],int n){
    char * temp;
    int i,j,k;
    //用选择法排序
    for(i=0;i<n-1;i++){
        //最小值索引
        k=i;
        for (j = i+1;  j<n ; j++)
            //字符串比较函数strcmp(字符串1，字符串2)
            if(strcmp(name[k],name[j])>0) k=j;
            //判断索引重复
        if (k!=i){
            temp=name[i];
            name[i]=name[k];
            name[k]=temp;
        }
    }
}

void print(char *name[],int n){
    int i;
    for (i = 0; i <n ; i++) {
        //按指针数组元素的顺序输出它们所指向的字符串，%s格式符,输出一个字符串
        printf("%s\n",name[i]);
    }
}

