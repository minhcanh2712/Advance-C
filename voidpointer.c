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
