/*
Viết chương trình C/C++ gồm các hàm sau:
Hàm đệ quy theo khuôn mẫu int TongChuSo(int k) trả về tổng các chữ số của số nguyên dương k.
Sử dụng hàm TongChuSo() ở trên để viết hàm void InSoBu(int n) in ra màn hình n số bù đầu tiên,
biết số bù là số tự nhiên có tổng các chữ số chia hết cho 10.
Ví dụ:
Input: n = 5
Output: 19  28  37  46  55
 */
#include <iostream>

using namespace std;

int TongChuSo(int k) {
    if (k <= 0) return 0;
    return k % 10 + TongChuSo(k / 10);
}

void InSoBu(int n) {
    int i = 1, count = 0;
    while (count < n) {
        if (TongChuSo(i) % 10 == 0) {
            cout << i << " ";
            count++;
        }
        i++;
    }
}

int main() {
    int n;
    do {
        cout << "n = ";
        cin >> n;
    } while (n <= 0);
    cout << n << " so bu dau tien: " << "\n";
    InSoBu(n);
    return 0;
}
