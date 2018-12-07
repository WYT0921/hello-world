//求解一元二次方程组的解 
#include <stdio.h>
#include <math.h>
void Func(double a1,double b1,double c1);
int main()
{
	double a,b,c;
	scanf("%lf %lf %lf",&a,&b,&c);
	Func(a,b,c);
	return 0;
}
void Func(double a1,double b1,double c1)
{
	double x1,x2,s;
	s=b1*b1-4*a1*c1;
	if(s<0)
	{
		printf("无解");
	}
	else
	{
    	if(s==0)
		{
	    	x1=-(b1/2*a1);
	    	x2=-(b1/2*a1);
		}
		else
		{
            x1=(-b1+sqrt(s))/2*a1;
			x2=(-b1-sqrt(s))/2*a1;		
		}
		printf("%lf %lf",x1,x2);	
	}
}
