#include<stdio.h>
int main()
{
	float amt=5000;
	if(amt==1000)
	{
		printf("cost amount:%f",amt+amt*0.2);
	}
	else if(amt==2000)
	{
		printf("cost amount:%f",amt+amt*0.3);
	}
	else if(amt==3000)
	{
		printf("cost amount:%f",amt+amt*0.5);
	}
	else
	{
		printf("cost amount:%f",amt+amt*0.6)
	}
	return 0;
}
