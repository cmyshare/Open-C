#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

////第一
//int sums(char *s){
//    int sum=0;
//    while(*s){
//        if(isdigit(*s)){
//            //printf("%c",*s);
//            sum+=*s-'0';
////C 库函数 int atoi(const char *str) 把参数 str 所指向的字符串转换为一个整数（类型为 int 型）。
//        }
//        s++;
//    }
//    return sum;
//}
//
//
//int main() {
//    int sums(char  *s);
//    char str[10];
//    gets(str);
//    int sumall=sums(str);
//    printf("%d",sumall);
//    return 0;
//}


//////第三
//#define N 16
//typedef struct{
//    char name[10];
//    int s;
//}STU;
//
//int fun(STU *a,STU *b,int min,int max){
//    int sum=0;
//    int i;
//    //int j=0;
//    for(i=0;i<N;i++){
//        if(a[i].s>=min && a[i].s<=max){
//
//            b[i]=a[i];
//            sum++;
//            //j++;
//        }
//    }
//    return sum;
//}
//
//int main(){
//    STU a[N]={{"ab1",10},{"ab2",20},{"ab3",30},{"ab4",40},
//              {"ab5",50},{"ab6",60},{"ab7",70},{"ab8",80},
//              {"ab9",90},{"ab100",100},{"ab11",110},{"ab2",120},
//              {"ab13",130},{"ab14",140},{"ab15",150},{"ab16",160}};
//    STU b[N]={};
//    int min,max;
//    printf("请输入范围\n");
//    scanf("%d%d",&min,&max);
//    int sums=fun(a,b,min,max);
//
//    printf("统计的个数：%d\n",sums);
//
//    printf("输出结构体数组B:\n");
//    for (int i = 0; i < sums; i++) {
//        printf("%s %d\n",b[i].name,b[i].s);
//    }
//    return 0;
//
//
//}
//
////////测试第三
//int main(){
//    int a[10]={0,1,2,3,4,5,6,7,8,9};
//    int b[]={};
//    int c,d;
//    printf("请输入范围\n");
//    scanf("%d%d",&c,&d);
//    int sum=0;
////    int j=0;
//    for (int i = 0; i <10 ; i++) {
//        if(a[i]>=c && a[i]<=d){
//           b[i]=a[i]; //放在新数组b中 b的位置应该  所有数组的取值放值都是从0开始
////           j++;
//           sum++;
//        }
//    }
//    printf("输出结构体数组B:\n");
//    for(int i=0;i<sum;i++){
//        printf("%d",b[i]);
//    }
//
//    return 0;
//}


#define   N   12
typedef  struct
{  char  num[10];
    double  s;
} STREC;
double  fun( STREC  *a, STREC *b, int *n )
{
    int i;
    double av=0.0;
    *n=0;
    for(i=0;i<N;i++){
        av=av+a[i].s;
    }
    av=av/N;
    int j=0;
    for(i=0;i<N;i++){
        if(av<=a[i].s){
            b[j]=a[i];
            j++;
            *n=*n+1;
        }
    }

    return av;


}

int main()
{  STREC  s[N]={{"GA05",85},{"GA03",76},{"GA02",69},{"GA04",85},
                {"GA01",91},{"GA07",72},{"GA08",64},{"GA06",87},
                {"GA09",60},{"GA11",79},{"GA12",73},{"GA10",90}};
    STREC  h[N], t;FILE *out ;
    int  i,j,n;  double  ave;
    ave=fun( s,h,&n );
    printf("The %d student data which is higher than %7.3f:\n",n,ave);
    for(i=0;i<n; i++)
        printf("%s  %4.1f\n",h[i].num,h[i].s);
    printf("\n");
    out = fopen("out.dat","w") ;
    fprintf(out, "%d\n%7.3f\n", n, ave);
    for(i=0;i<n-1;i++)
        for(j=i+1;j<n;j++)
            if(h[i].s<h[j].s) {t=h[i] ;h[i]=h[j]; h[j]=t;}
    for(i=0;i<n; i++)
        fprintf(out,"%4.1f\n",h[i].s);
    fclose(out);
}







