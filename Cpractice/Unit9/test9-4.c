//有n个学生的信息，要求按照成绩的高低顺序输出各学生的信息
#include<stdio.h>
struct Student{
    int num;
    char name[20];
    float score;
};
int main(){
    //定义结构体数组并初始化
  struct Student stu[5]={{10101,"Zhang",78},
          {10103,"Wang",98.5},
          {10102,"Li",86},
          {10104,"Li2",87},
          {10105,"Li3",88}};
  //定义结构体变量temp,用作交换时的临时变量
  struct Student temp;
  //定义常变量n
  const int n=5;
  int i,j,k;
  printf("The order is:\n");
  for(i=0;i<n-1;i++){
      k=i; //最大值索引
      for(j=i+1;j<n;j++){
          //进行成绩的比较
          if(stu[j].score>stu[k].score)
              k=j;
      }
      //stu[k]和stu[i]元素互换
      temp=stu[k]; stu[k]=stu[i]; stu[i]=temp;
  }
  for(i=0;i<n;i++){
      printf("%6d %8s %6.2f\n",stu[i].num,stu[i].name,stu[i].score);
  }
  printf("\n");
    return 0;

}

