#include <stdio.h>
int main()
{
	int i=0,a,b[100],s;
	scanf("%d",&a);
	while(a>0)
	{
			b[i]=a%10;
			a=a/10;
			i++;
	}
		for(i=i-1;i>=0;i--)
		{
	    	printf("%d ",b[i]);	
		}
	return 0;
}
