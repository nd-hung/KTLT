/*
Viết chương trình C/C++ gồm các hàm sau:
a. Hàm đệ quy theo khuôn mẫu bool ToanChuSoChan(int k) trả về giá trị đúng (true) nếu k chứa toàn chữ số chẵn
 (ví dụ: 8204), ngược lại trả về false. (2đ, không dùng đệ quy: 1đ)
b. Viết hàm theo khuôn dạng void InSoChan(int n) in ra màn hình các số nguyên dương ≤ n (10 ≤ n ≤ 10000)
 thỏa mãn chứa toàn chữ số chẵn, trong hàm này có sử dụng hàm ToanChuSoChan() ở câu a. (1đ)
Ví dụ:
Input: n = 30
Output: 2 4 6 8 20 22 24 26 28
c. Chương trình chính sử dụng hàm trên để minh họa. (0.5đ)
 */
#include <iostream>

using namespace std;

bool ToanChuSoChan(int k) {
    if (k < 10) {
        if (k % 2 == 0) return 1;
        else return 0;
    } else {
        if ((k % 10) % 2 == 0) return ToanChuSoChan(k / 10);
        else return false;
    }
}

void InSoChan(int n) {
    for (int i = 2; i <= n; i++)
        if (ToanChuSoChan(i)) cout << i << " ";
}

int main() {
    int n=30;
    InSoChan(n);
    return 0;
}
