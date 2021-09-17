
extern A1; //将7-19-1中定义的外部变量的作用域扩展到本文本
int power(int n){
    int i,y=1;
    for (i = 1;  i<=n ; i++) {
        y=y*A1;
    }
    return (y);
}

