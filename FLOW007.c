/* this code is for Reverse in code chef problem no : FLOW007 */
#include<stdio.h>
int main()
{
    int t,i,a,s,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        s=0;
        while(n>0)
        {
            a=n%10;
            s=s*10+a;
            n=n/10;
        }
        printf("%d\n",s);
    }
   
}
