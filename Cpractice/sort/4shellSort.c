#include <stdio.h>
//*希尔排序
int shellSort(int s[], int n)    /* 自定义函数 shellSort()*/
{
    /** 10 9 8 7 6 5 4 3 2 1*/
    /** 5 4 3 2 1 10 9 8 7 6*/ //5 相距为5成一组
    /** 3 2 1 4 5 8 7 6 9 10*/ //2 相距为2成一组
    /** 1 2 3 4 5 6 7 8 9 10*/ //1 放在一组中

    int i,j,d,key;

    d=n/2;    //确定固定增量值5 2 1

    while(d>=1)  //当增量d=1，讲所有记录放在一组进行直接插入排序
    {
        for(i=d;i<n;i++)    //数组下标从d开始进行直接插入排序 i=5 n=10 5次
        {
            key=s[i];    //设置监视哨temp=s[5]=5
            j=i-d;    //确定要与监视哨比较的元素下标 j=0
            while( j>=0 && s[j]>key ) //5<10
            {
                s[j+d]=s[j];    //大的数据右移d j[5]=j[0]=10
                j=j-d;    //下标向左移d个位置 j=-5
            }
            s[j + d]=key;    //在确定的位罝插入temp
        }

        d = d/2;    //增里变为原来的一半
    }
    return 0;
}
int main()
{
    int a[10],i;    /*定义数组及变量为基本整型*/
    printf("请输入10个数据：\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);    /*从键盘中输入10个数据*/

    shellSort(a, 10);    /* 调用 shsort()函数*/

    printf("希尔排序后：\n");
    for(i=0;i<10;i++)
        printf("%d \t",a[i]);    /*输出排序后的数组*/

    return 0;
}

