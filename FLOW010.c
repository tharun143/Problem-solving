/* this code is for Id and Ship in codechef problem no FLOW010*/
#include<stdio.h>
int main()
{
    //this code is for id and ship problem
    int i,n;
    char a;
   
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
      scanf("%c\n",&a);
      
      if(a=='B'||a=='b')
      {
          printf("BattleShip\n");
      }
      else if(a=='C'|| a=='c')
      {
          printf("Cruiser\n");
      }
      else if(a=='D'|| a=='d')
      {
          printf("Destroyer\n");
      }
      else if(a=='F'|| a=='f')
      {
          printf("Frigate\n");
      }
    }
}
