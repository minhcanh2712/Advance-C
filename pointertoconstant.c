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