/* this code is for Right Triangle in code chef problem no RIGHTTRI */
#include <stdio.h>
    #include <math.h>
    #define ll long long
    int main()
    {
        // ok good but for what
    	int m,h;
    	ll s,a,b;
    	scanf("%d",&m);
    	while(m--)
    	{
    		scanf("%d%lld",&h,&s);
    		a=(ll)h*h-4*s;
    		if(a>=0)
    		{
    			b=(ll)h*h+4*s;
    			printf("%lf %lf %lf\n",(sqrt(b)-sqrt(a))/2,(sqrt(b)+sqrt(a))/2,(double)h);
            }
            else printf("-1\n");
        }
        return 0;
    } 
