#include <stdio.h>
void Func(int a1);
int main()
{
	int a,b,c,d,t[1000],i=0;
	scanf("%d",&a);
	if(a>=100&&a<9999)
	{
		while(a>0)
		{
			t[i]=a%10;
			a=a/10;
			i=i+1;
		}
		for(i=i-1;i>=0;i--)
		{
			b+=t[i];
			c=t[i]*t[i-1];
			d+=t[i]*t[i];
		}
        Func(b);
        Func(c);
        Func(d);
        if(b!=0&&c!=0&&d!=0)
        {
        	printf("%d是素数",a);
		}
		else
		{
			printf("%d不是素数",a);
		}
	}
	return 0;
}
void Func(int a1)
{
	int i,b1;
    for(i=2;i<a1;i++)
	{
		b1=a1%i;
		if(b1==0)
		{
			break;
		} 
	} 
}
	
