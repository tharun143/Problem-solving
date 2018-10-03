/* this code is for sum of digits in code chef priblem no FLOW006 */
#include<stdio.h>
int main()
{
    // thius is for sum of digits
    int t,i,a,s,n;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        s=0;
        while(n>0)
        {
            a=n%10;
            s=s+a;
            n=n/10;
        }
        printf("%d\n",s);
    }
   
}
