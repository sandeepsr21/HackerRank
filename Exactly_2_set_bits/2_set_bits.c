#include <stdio.h>

int main()
{
 	int t,k;
 	unsigned long long int n,s=0,i,j;
 	scanf("%d%",&t);
 	for(k=0;k<t;k++)
 	{
 		s=0;
 		scanf("%llu",&n);
	 	for(i=2;i<n;i=i*2)
	 	{
	 		for(j=1;j<i;j=j*2)
	 		{
	 			if(i+j<=n)
	 			{
	 				s=(s+i+j)%1000000007;
	 			}
	 		}
	 	}
	 	printf("%llu\n",s);
 	}
 
    return 0;
}
