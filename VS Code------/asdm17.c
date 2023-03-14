#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,a,s,m,d,k;
    printf("Enter the 1st numb");
    scanf("%d",&n1);
    printf("Enter the 2nd numb");
    scanf("%d",&n2);
    a=n1+n2;
    s=n1-n2;
    m=n1*n2;
    d=n1/n2;
    k=n1%n2;
    printf("\n1.Addition %d",a);
    printf("\n2.Subtraction %d",s);
    printf("\n3.Multiplication %d",m);
    printf("\n4.Division %d",d);
    printf("\n5.Modulus %d",k);
    
}