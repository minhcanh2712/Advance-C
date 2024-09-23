#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int value = 27;
    int test = 12;
    int *const const_ptr = &value;// khai bao hang con tro tai dia chi bien value

    printf("value: %d\n", *const_ptr);

    *const_ptr = 7;// hang con tro co the thay doi gia tri cua bien duoc no tro toi
    printf("value: %d\n", *const_ptr);

   // const_ptr = &test; // wrong
    
    return 0;
}