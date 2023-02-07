#include <stdio.h>

int main()
{
	int L1, T1, L2, T2;
	
	scanf("%i", &L1);
	scanf("%i", &T1);
	scanf("%i", &L2);
	scanf("%i", &T2);
	

	if(L1 > L2)
	{
		if(T1 > T2)
		{
			printf("Hueso 1");
		}else
		{
			printf("Perrito confundido :( ");
		}
	}else
	{
		if(T2 > T1)
		{
			printf("Hueso 2");
		}else
		{
			printf("Perrito confundido :( ");
		}
	}


}
