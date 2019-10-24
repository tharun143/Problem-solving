/* this code is for addittion in codechef problem FLOW001*/
#include<stdio.h>
int main()
{
    int i,n,a,b,c;
   
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       scanf("%d %d\n", &a, &b);
    c=a+b;
    printf("%d\n",c);
    }
    return 0;
}
