//Row major
#include<stdio.h>

void calcAdd2D(int base,int w,int n,int i,int l1,int j,int l2)
{
    int tot;
    tot=base+ w*(n*(i-l1)+(j-l2));
    printf("Total =%d",tot);
}
void main()
{
    int base,w,n,i,l1,j,l2;
    printf("base address , value of w, value of n ,value of i, value of l1, value of j, value of l2:");
    scanf("%d %d %d %d %d %d %d",&base,&w,&n,&i,&l1,&j,&l2);
    calcAdd2D(base,w,n,i,l1,j,l2);
}