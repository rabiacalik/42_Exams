#include <stdlib.h>

int main(int argc, char **argv)
{
	int number1;
	int number2;

	if(argc == 3)
	{ 
		number1 = atoi(argv[1]);
		number2 = atoi(argv[2]);

		if(number1 > 0 && number2 > 0)
		{
			while(number1 != number2)
			{
				if(number1 > number2)
					number1 -= number2;
				else
					number2 -= number1;
			}
			printf("%d", number1);
		}
	}
	printf("\n");
	return (0);
}