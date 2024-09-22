Pointer: là 1 biến chứa địa chỉ của 1 biến khác hay 1 hàm. Kích thước của con trỏ phụ thuộc vào kiến trúc máy tính và trình biên dịch 
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
