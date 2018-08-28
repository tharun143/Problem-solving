/* this code is for weight of numbres in code chef problem no WEIGHT */
    #include <stdio.h>
    #include <stdlib.h>
     
    #define MOD 1000007
    #define S(a) for(a=0; a<=9; a++)
     
    int main()
    {
    int fall, i, j, x1, x2, out, n, w, f[21][201][10];
     
    for(j=1; j<=9; j++)
    	for(f[1][0][j]=i=1; i<=200; f[1][i++][j]=0);
    for(i=2*(!(f[1][0][0]=0)); i<=20; i++)
    	for(j=0; j<=200; j++)S(x1)S(x2)
    		if(j>=abs(x1-x2))
    			f[i][j][x1]=(f[i][j][x1]+f[i-1][j-abs(x1-x2)][x2])%MOD;
    for(scanf("%d",&fall); fall--; printf("%d\n",out))
    	for(out=i=!scanf("%d %d",&n,&w); i<=9; out=(out+f[n][w][i++])%MOD);
     
    return 0;
    } 
