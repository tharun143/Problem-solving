/* this code is for Copy-Paste in code chef problem no RRCOPY*/ 
#include<stdio.h>
int main()
{
int m,i,j,d,t;
scanf("%d",&t);
while(t--)
{
d=0;
scanf("%d",&m);
int a[1000000];
for(i=0;i<1000000;i++)
a[i]=0;
for(i=0;i<m;i++)
{scanf("%d",&j);
a[j]=1;
}
for(i=0;i<1000000;i++)
if(a[i]==1)
d++;
printf("%d\n",d);
}
return 0;
}

// this code is related to code chef probs
