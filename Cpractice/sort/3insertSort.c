#include <stdio.h>
//*插入排序
//int insertSort(int s[], int n)    /* 自定义函数 insertSort()*/
//{
//    /** 比较过程*/
//    /**原始 10 9 8 7 6 5 4 3 2 1*/
//    /**第一轮 9 10 8 7 6 5 4 3 2 1*/
//    /**第二轮 9 8 10 7 6 5 4 3 2 1*/ /** 8 9 10 7 6 5 4 3 2 1*/
//    /** .....以此类推*/
//
//    int i,j,key;
//    for(i=1;i<n;i++)    //数组下标从1开始，key做监视哨（待插入值），
//    {
//        key=s[i];    //给监视哨陚值key
//        j=i-1;    //确定要与监视哨比较的元素下标
//        while( j>=0 && s[j]>key )
//        {
//            s[j+1]=s[j];    //数据右移
//            j--;    //下标移向左边一个未比较的数，直至比较结束
//        }
//        s[j+1]=key;    //在确定的下标位置插入key
//    }
//    return 0;
//}

int insertSort2(int arr[],int n){
    int i,j,key;
    for (i = 1; i <n ; ++i) {
        key=arr[i];
        j=i-1;
        while (j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
    return 0;
}

int main()
{
    int a[10],i;    //定义数组及变量为基木整甩

    printf("请输入10个数据：\n");
    for (i=0;i<10;i++)
        scanf("%d",&a[i]);    //接收从键盘输入的10个数据到数组a中

    insertSort2(a,10);    //调用自定义函数 insort()

    printf("直接插入排序：\n");
    for(i=0;i<10;i++)
        printf("%5d",a[i]); //将排序后的数组输出

    return 0;
}

