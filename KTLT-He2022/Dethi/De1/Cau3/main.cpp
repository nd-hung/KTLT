/* Created by Hung on 24/08/2022.
Cho tập tin văn bản chứa dữ liệu mảng một chiều các số nguyên, theo cấu trúc sau:
- Dòng đầu tiên chứa số lượng phần tử của mảng;
- Dòng tiếp theo chứa giá trị các phần tử của mảng, cách nhau bởi khoảng trắng.
Viết chương trình gồm có các hàm sau:
a. Hàm ReadArray(char fname[], int a[], int &n) để đọc mảng một chiều từ tập tin được xác định bởi tham số fname, các phần tử được đưa vào mảng a, số lượng phần tử đưa vào tham số n. (1đ)
b. Hàm đệ quy trả về tổng các phần tử chẵn của mảng. (1đ, nếu giải theo cách không đệ quy: 0.5đ)
c. Hàm tìm và in ra mảng con dài nhất chứa các phần tử tăng dần liên tiếp. (1.5đ)
d. Chương trình chính lần lượt gọi các hàm trên để minh họa. (0.5đ)
*/
#include<stdio.h>

const int MAX = 100;

void ReadArray(char fname[], int a[], int &n) {
    FILE *fp = fopen(fname, "rt");
    if (fp == NULL)
        printf("Khong mo duoc file!");
    else {
        fscanf(fp, "%d", &n);
        for (int i = 0; i < n; i++)
            fscanf(fp, "%d", &a[i]);
        fclose(fp);
    }
}

void PrintArray(int a[], int n, int start, int end) {
    for (int i = start; i <= end; i++)
        printf("%d  ", a[i]);
}

int TongChan(int a[], int n) {
    if (n == 0) return 0;
    else {
        if (a[n - 1] % 2 == 0) return a[n - 1] + TongChan(a, n - 1);
        else return TongChan(a, n - 1);
    }
}

void FindLongestAscendingSubArray(int a[], int n, int &max_start, int &max_end) {
    int max_len = 0, start = 0, end = 0;
    max_start = 0, max_end = 0;
    // Xét lần lượt các phần tử từ đầu đến áp chót
    int i = 0;
    while (i < n - 1)
        // Nếu a[i] > a[i+1] thì xét phần tử kế tiếp
        if (a[i] > a[i + 1])
            i++;
            // Ngược lại, nếu a[i] <= a[i+1] thì i là vị trí bắt đầu của dãy con tăng dần
        else {
            start = i;
            end = start;
            // Tìm vị trí cuối của dãy con tăng dần bắt đầu từ i
            while (a[end] <= a[end + 1] && end < n - 1)
                end++;
            // Nếu dãy con đang xét dài hơn dãy con trước đó thì ghi nhận vị trí & độ dài của nó:
            if (end - start > max_len) {
                max_start = start;
                max_end = end;
                max_len = end - start;
            }
            // Chuyển sang vị trí bắt đầu tìm dãy con tiếp theo:
            i = end;
        }
}

int main() {
    int a[MAX], n;
    int max_arr_start, max_arr_end;
    ReadArray("d:\\array.txt", a, n);
    printf("Mang doc tu file:\n");
    PrintArray(a, n, 0, n - 1);
    printf("\nTong cac phan tu chan = %d\n", TongChan(a, n));
    FindLongestAscendingSubArray(a, n, max_arr_start, max_arr_end);
    printf("\nMang con tang dan dai nhat:\n");
    PrintArray(a, n, max_arr_start, max_arr_end);
}

