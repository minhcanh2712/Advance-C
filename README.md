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

III. Funtion Pointer: biến giữ địa chỉ của hàm
Ví dụ:
#include<stdio.h>

void tong(int a, int b){
printf("%d + %d = %d\n ", a, b, a + b );
}
void hieu(int a, int b){
printf("%d - %d = %d\n ", a, b, a - b );
}
void tich(int a, int b){
printf("%d * %d = %d\n ", a, b, a * b );
}
void thuong(int a, int b){
printf("%d / %d = %f\n", a, b, (double)a / b );
}
int main(int argc, char const *argv[]){
    int a = 27, b = 12;
    void(*ptr)(int, int); // khai bao con tro
   
    ptr = tong; // gan dia chi ham tong cho con tro
    ptr(a, b); // goi ham tong
    
    ptr = hieu; // gan dia chi ham hieu cho con tro
    ptr(a, b); // goi ham hieu
    
    ptr = tich; // gan dia chi ham hieu cho con tro
    ptr(a, b); // goi ham tich
    
    ptr = thuong; // gan dia chi ham thuong cho con tro
    ptr(a, b); // goi gam thuong

    return 0;

}

Kết quả:
 27 + 12 = 39
 27 - 12 = 15
 27 * 12 = 324
 27 / 12 = 2.250000

III. Pointer to constant: Là cách định nghĩa một con trỏ không thể thay đổi giá trị tại địa chỉ mà nó trỏ đến thông qua dereference nhưng giá trị tại địa chỉ đó có thể thay đổi.
     Tại đại chỉ con trỏ hằng trỏ đến chỉ có thể đọc được giá trị không thể thay đổi
     Có thể trỏ đến nhều địa chỉ khác nhau
     
Ví dụ:
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int value = 27;
    int test = 12;
    int const *ptr_const = &value; // gia tri con tro hang tai dia chi value

    //*ptr_const = 7; // khong the thay doi gia tri con tro hang
    //ptr_const = &test; // co the tro den nhieu dia chi khac nhau
    
    printf("value: %d\n", *ptr_const);

    value = 14; // chi co the thay doi gia tri con tro hang bang cach thay doi gia tri tai bien duoc khai bao
    printf("value: %d\n", *ptr_const);
    
    return 0;
}
Kết quả:
    value: 27 // giá trị con trỏ hằng trước khi thay đổi giá trị value
    value: 14 // giá trị con trỏ hằng sau khi thay đổi giá trị value
=> chỉ có thể thay đổi giá trị con trỏ hằng bằng cách thay đổi giá trị biến value
