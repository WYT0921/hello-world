//�ж����� 
#include <stdio.h>
int main()
{
	int i,a,b;
	scanf("%d",&a);
	for(i=2;i<a;i++)
	{
		b=a%i;
		if(b==0)
		{
			break;
		} 
	} 
		if(b==0)
		{
			printf("%d��������",a);
		}
		else
		{
			printf("%d������",a);
		}
	return 0;
}
 
