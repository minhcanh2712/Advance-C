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
