#include<stdio.h>
int main()
{
int g=0,i,a[100],n;
printf("Enter a total numbers to compare");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("Enter element %d : ",i+1);
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
 if(g<a[i])
 g=a[i];
}
printf("Greater no. in the given range is : %d",g);
getch();
clrscr();
return 0;
}