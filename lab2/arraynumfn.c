#include<stdio.h>
void calcAdd(int baseAdd,int w,int k)
{
    int i,tot;
    //printf("Enter 5 values for array\n");
    tot=baseAdd+(w*k);
    printf("Answer=%d",tot);
}

void main()
{
    int baseAdd,w,k;
    printf("enter the base address,size of variable,value of k:");
    scanf("%d %d %d",&baseAdd,&w,&k);
    calcAdd(baseAdd,w,k);
}