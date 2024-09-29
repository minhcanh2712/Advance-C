#include <stdio.h>
#include "File1.h"
#include "File2.h"

extern void display1() ;
extern void display2() ;

int main()
{
    a = 27 ;
    printf("%d\n",a);
    b = 12 ;
    printf("%d\n",b);

    display1();
    display2();

    return 0 ;
}