// Created by Hung on 24/08/2022.
#include<stdio.h>
#define Sum(x, y) x+y
int main()
{
    int a=5,b=10,c=15,d=20;
    printf("%d", Sum(a*b, c+d));
    return 0;
}
/*
Ket qua = 85
Giai thich, theo dinh nghia macro, Sum(5*10, 15+20) = 5*10+15+20 = 85
 */