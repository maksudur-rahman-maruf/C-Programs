#include<stdio.h>
int main()
{
    int n1,n2,a,b,LCM;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);
    a = n1;
    b = n2;
    while(n1!=n2)
    {
        if(n1>n2)
        n1 = n1 - n2;
        else
        n2 = n2 - n1;
    }

    printf("GCD of %d and %d is %d\n",a,b,n1);

    LCM = (a * b)/n1; // lcm = (a * b)/ GCD

    printf("LCM of %d and %d is %d",a,b,LCM);

}
