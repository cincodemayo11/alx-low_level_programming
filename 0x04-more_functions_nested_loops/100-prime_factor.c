#include <stdio.h>

int bytwo(int a);

int main(void)
{
	int i = 1231952;

	for (; i % 2 == 0;  );

	bytwo(i);

	return (0);
}

int bytwo(int a)
{
	
	if ( a % 2 == 0)
	{
		a = a / 2;
		printf("%d", a);
		return (0);
	}
	else
		return (0);
}
