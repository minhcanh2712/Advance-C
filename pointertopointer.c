#include <stdio.h>

int main() {
    int value = 42;
    int *ptr1 = &value;  // Con tro cap 1 tro den bien value

    int **ptr2 = &ptr1;  // Con tro cap 2 tro den dia chi con tro cap 1

    /*
        **ptr2 = &ptr1 // gia tri tai dia chi con tro ptr1
        ptr2 = &ptr1; // dia chi tai con tro ptr1 
        *ptr2 = ptr1 = &value; // dia chi tai bien value
        **ptr2 = *ptr1 = value // gia tri cua ptr1 = value = 42
    */

    printf("address of value: %p\n", &value);
    printf("value of ptr1: %p\n", ptr1);

    printf("address of ptr1: %p\n", &ptr1);
    printf("value of ptr2: %p\n", ptr2);

    printf("dereference ptr2 first time: %p\n", *ptr2);

    printf("dereference ptr2 second time: %d\n", **ptr2);

    return 0;
}
