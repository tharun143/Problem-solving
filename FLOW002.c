/*this code is for remainder of a problem in code chef problem FLOW003 */
#include<stdio.h>
int main()
{
    int i,n,a,b,c;
   // it gives remainder right?
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       scanf("%d %d\n",&a,&b);
    c=a%b;
    printf("%d\n",c);
    }
    return 0;
}
