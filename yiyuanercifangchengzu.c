//解二元一次方程组 
#include <stdio.h>
int main()
{
	double a,b,c,d,e,f,x,y;
	scanf("%lf %lf %lf %lf %lf %lf",&a,&b,&c,&d,&e,&f);
	if(a*e==b*d&&a*f!=c*d)
	{
		printf("无解");
	}
	else
	{
		if(a*e!=b*d)
		{
			x=(c*e-f*b)/(a*e-b*d);
			y=(a*f-c*d)/(a*e-b*d);
			printf("%lf %lf",x,y);
		}
		if(a*e==b*d&&a*f==c*d)
		{
			printf("有无穷解");
		}
	}
	return 0;
}
