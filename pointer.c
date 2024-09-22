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
