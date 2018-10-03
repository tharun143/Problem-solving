/* this code is for servant problem in code chef problem no FLOW003 */
#include<stdio.h>
int main()
{
    int i,n,a;
   
    
    // ok good
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
      scanf("%d\n",&a);
      if(a>=10)
      {
          printf("-1\n");
      }
      else
      {
          printf("What an obedient servant you are!\n");
      }
    }
    return 0;
}
