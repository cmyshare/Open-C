//递归方法数组名作为参数，求两个班级成绩的平均数
#include<stdio.h>
int main(){

    void sort(int array[],int n);
    int a[10],i;
    printf("enter array:\n");
    for(i=0;i<10;i++)
        scanf("%d",&a[i]);

    sort(a,10);

    printf("The sorted array:\n");
    for (i = 0;  i<10 ; i++)
        printf("%d",a[i]);
    printf("\n");
    return 0;
}

void sort(int array[],int n){
    int i,j,k,t;
    for (i = 0; i <n-1; i++){   //比较n-1轮
        k=i;
        for (j = i+1; j < n; j++) {  //筛选对比，把最小值下标给K
            if (array[j]<array[k])
                k=j;
        }
        t=array[k];array[k]=array[i];array[i]=t;  //交换值，筛选出最小值
    }
}




