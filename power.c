#include<stdio.h>
#include<conio.h>
int main()
{
int i,n1,n2,result=1;
printf("enter the numbers");
scanf("%d%d",&n1,&n2);
for(i=1;i<=n2;i++)
{
result=result*n1;    
}
printf("%d",result);
getch();
}
