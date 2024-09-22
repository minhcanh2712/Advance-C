I.Pointer: là 1 biến chứa địa chỉ của 1 biến khác hay 1 hàm. Kích thước của con trỏ phụ thuộc vào kiến trúc máy tính và trình biên dịch.
Ví dụ: 
#include <stdio.h>

int main(){
int a = 100;
int *ptr; // đang là con trỏ NULL
ptr = &a; // cho ptr trỏ tới a
printf("Dia chi : %p\n", &a);
printf("Dia chi : %p\n", ptr);
printf("Gia tri cua bien a ban dau : %d\n", *ptr);
*ptr = 500; // thay đổi luôn giá trị của a
printf("Gia tri cua bien a luc sau : %d\n", a);
}
Kết quả:
Dia chi : 00000087037FFE04
Dia chi : 00000087037FFE04
Gia tri cua bien a ban dau : 100
Gia tri cua bien a luc sau : 500

II. Void Pointer: thường dùng để trỏ để tới bất kỳ địa chỉ nào mà không cần biết tới kiểu dữ liệu của giá trị tại địa chỉ đó.
Ví dụ:
#include<stdio.h>
int main(){
    void *px, *py; // khai bao con tro kieu void
    int x = 1;
    float y = 0.5;
    px = &x; // gan dia chi con tro x cho con tro void px
    py = &y; // gan dia chi con tro x cho con tro void py
    printf("%d %.2f",*(int*)px,*(float*)py); // ep kieu con tro void thanh con tro int va float de lay gia tri
    return 0;
}

Kết quả: 1 0.50

