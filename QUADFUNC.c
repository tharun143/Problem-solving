 /* this code is for quadractic functions in codechef problem no QUADFUNC */

   #include<stdio.h>
    #include<math.h>
     
    long long int module(long long int x){
    	if(x<0)
    		x=0-x;
    	return x;
    }
     
    int main(){
    	long long int t,a,b,c,d,e,f,l,r,x,i,k=6;
    	long long int result;
    	scanf("%lld",&t);
    	while(t--){
    		k=6;
    		scanf("%lld%lld%lld%lld%lld%lld%lld%lld",&a,&b,&c,&d,&e,&f,&l,&r);
    		x=(2*(a-d)*(pow(r, 3)-pow(l, 3)))+(3*(b-e)*(pow(r, 2)-pow(l, 2)))+(6*(c-f)*(r-l));
    		result=module(x);
    		//printf("result=%lld k=%d\n",result,k);
    		for(i=2; i<=6; i++){
    			if((result%i==0)&&(k%i==0)){
    				result=result/i; k=k/i;
    				}
    			}
    		//if(k!=1)
    		printf("%lld/%lld\n",result,k);
    		//else
    		//printf("%lld\n",result);
    	}
    return 0;
    }     
