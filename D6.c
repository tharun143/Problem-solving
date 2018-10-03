/* this code is to count the squares in codechef problem no D6 */
        #include<stdio.h>
        #define  z  (d3>=0)&&(d3<=100)&&(a3>=0)&&(a3<=100)&&(point[d3][a3]==1)&&(d4>=0)&&(d4<=100)&&(a4>=0)&&(a4<=100)&&(point[d4][a4]==1)
         
        int main()  {
            
            int numcase,I,i,j,n,count,x[500],y[500],point[101][101];
            int d1,d2,d3,d4,a1,a2,a3,a4;
            
            scanf("%d",&numcase);
            for(I=0;I<numcase;I++)  {
                scanf("%d",&n);
                for(i=0;i<=100;i++)
                    for(j=0;j<=100;j++)  point[i][j]=0;
                for(i=0;i<n;i++)  {
                    scanf("%d%d",&x[i],&y[i]);
                    x[i]+=50;
                    y[i]+=50;
                    point[x[i]][y[i]]=1;
                }
                count=0;
                for(i=0;i<n;i++)  {
                    for(j=0;j<n;j++)  {
                        if(i!=j)  {
        				
                           d1=x[i],a1=y[i];
                           d2=x[j],a2=y[j];
                           
                           d3=d1+a1-a2;
                           a3=a1+d2-d1;
                           
                           d4=d2+a1-a2;
                           a4=a2+d2-d1;
        				   
                           
        if(z)
           count++;
             }}}
                printf("%d\n",count/4);
           }
           return 0;
        }   
// this is my code copied from code chef io know ytahta
