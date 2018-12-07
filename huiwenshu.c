#include <stdio.h>
int main()
{
	int n,i,a,t,b,s=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a);
		b=a;
		do
		{
			t=a%10;
			s=s*10+t;
			a=a/10;
		}
		while(a!=0);
		if(s==b)
		{
			printf("yes\n");
		}
		else
		{
	    	printf("no\n");	
		} 
	}
}
