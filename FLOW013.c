/* the given code is for validity of triangles in codechef problem number FLOW013 */
#include<stdio.h>
int main()
{
    int i,n,a,b,c,d;
   
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
       scanf("%d %d %d\n", &a, &b, &c);
       d=a+b+c;
    if(a!=0&&b!=0&&c!=0&&d==180)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    }
    return 0;
}
