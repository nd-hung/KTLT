/* Created by Hung on 24/08/2022.
 * Viết hàm theo khuôn mẫu MaxOfTwo(int, int) trả về số lớn hơn trong hai số nguyên.
 * Sử dụng lại hàm MaxOfTwo(int, int) ở trên để viết hàm theo khuôn mẫu MaxOfFour(int, int, int, int)
 * trả về số lớn nhất trong bốn số nguyên.
 */

#include <iostream>

using namespace std;

int MaxOfTwo(int a, int b) {
    return (a > b) ? a : b;
}

int MaxOfFour(int a, int b, int c, int d) {
    return MaxOfTwo(MaxOfTwo(a, b), MaxOfTwo(c, d));
}

int main() {
    int a = 9, b = 5, c = 1, d = 7;
    cout << "Max = " << MaxOfFour(a, b, c, d);
}