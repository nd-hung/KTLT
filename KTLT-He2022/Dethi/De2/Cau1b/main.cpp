/* Created by Hung on 24/08/2022.
* Viết hàm có tên Add() trả về tổng của các số nguyên, với số lượng đối số khi gọi hàm có thể thay đổi từ 1 đến 4.
* Sử dụng hàm Add() ở trên để viết hàm SumOfFive() trả về tổng của 5 số nguyên.
 */

#include <iostream>

using namespace std;

int Add(int a, int b = 0, int c = 0, int d = 0)
{
    return a + b + c + d;
}

int SumOfFive(int a, int b, int c, int d, int e) {
    return Add(a,b,c,d)+e;
}

int main() {
    int a = 1, b = 2, c = 3, d = 4, e=5;
    cout << "Sum = " << SumOfFive(a, b, c, d, e);
}