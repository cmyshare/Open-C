//口中有五种颜色的球，每次从口袋中取出三个球，问得到三种不同色的球的可能取法，输出灭种排列情况
//用枚举类型方法
#include<stdio.h>
int main(){
    //声明枚举类型enum Color 初始化时没有给枚举元素固定的值,
    // C语言编译时会按定义时的顺序默认他们的值是0,1,2,3,4,5,6-----
    enum Color{
    red,yellow,blue,white,black
    };
    //定义枚举变量i,j,k,pri
    enum Color i,j,k,pri;
    //定义整型变量n,loop
    int n,loop;
    n=0;
    //外循环使i的值从red到black
    for(i=red;i<=black;i++){
        //中循环使j的值从red到black
        for(j=red;j<=black;j++){
            //如果前两个色不相同
            if(i!=j){
                //内循环使k的值从red到black
                for(k=red;k<=black;k++){
                    //如果三个球颜色不同
                    if ((k!=i)&&(k!=j)){
                        //符合条件的次数加1
                        n=n+1;
                        //输出当前是第几个符合条件的组合
                        printf("%-4d",n);
                        //先后对3个球分别处理
                        for(loop=1;loop<=3;loop++){
                            //loop从1变到3
                            switch (loop) {
                                //当loop的值为1时，把第一个球的颜色给pri
                                case 1:pri=i;break;
                                case 2:pri=j;break;
                                case 3:pri=k;break;
                                default:break;
                            }
                            switch (pri) { //根据球的颜色输出相应的文字
                                case red:printf("%-10s","red");break;
                                case yellow:printf("%-10s","yellow");break;
                                case blue:printf("%-10s","blue");break;
                                case white:printf("%-10s","white");break;
                                case black:printf("%-10s","black");break;
                                default:break;
                            }
                        }
                        printf("\n");
                    }
                }

            }
        }

    }


    //输出满足条件的次数
    printf("\ntotal:%5d\n",n);
    return 0;



}
