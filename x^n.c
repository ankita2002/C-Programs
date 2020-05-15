#include <stdio.h>
int power(int x,int n);
int main() 
{
int x,n,c;
printf("Enter values of x & n");
scanf("%d%d",&x,&n);

c= power(x,n);

printf("%d",c);

    return 0;
}

int power (int x,int n)
{
int i,result;
result=1;
for(i=1;i<=n;i++) 
{
result*=x;
}
return result;
}
