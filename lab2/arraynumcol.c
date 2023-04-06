// Column Major
#include<stdio.h>

void calcAdd2D(int base,int w,int m,int i,int l1,int j,int l2)
{
    int tot;
    tot=base+ m*(w*(j-l2)+(i-l1));
    printf("Total =%d",tot);
}
void main()
{
    int base,m,w,i,l1,j,l2;
    printf("base address , value of m, value of w ,value of i, value of l1, value of j, value of l2:");
    scanf("%d %d %d %d %d %d %d",&base,&m,&w,&i,&l1,&j,&l2);
    calcAdd2D(base,m,w,i,l1,j,l2);
}