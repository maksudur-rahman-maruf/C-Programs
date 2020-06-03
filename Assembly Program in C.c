#include<stdio.h>
void main()
{
    int a=10, b=20, c;

    asm {
        mov ax,a;   // it runs in Turbo C
        mov bx,b;
        add ax,bx;
        mov c,ax;
    }

    printf("%d",c);
}
