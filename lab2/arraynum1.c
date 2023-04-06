#include<stdio.h>

void main()
{
    int a,w,k;
    int loc;
    printf("base address",a);
    scanf("%d",&a);
    printf("words",w);
    scanf("%d",&w);
    printf("value of k:");
    scanf("%d",&k);
    loc=a+(w*k);
    printf("%d",loc);
    
}

