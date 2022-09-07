// Created by Hung on 24/08/2022.
#include<stdio.h>
#define Square(x) x*x
int main()
{
    int a=6, b=2;
    printf("%d", Square(a + b));
    return 0;
}

/*
 * Kết quả khi chạy chương trình là 20.
 * Giải thích: Từ định nghĩa macro, Square(6+2) = 6+2*6+2 = 20.
 */
