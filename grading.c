#include <stdio.h>
/**
* main - this function returns grade for scores
* Return: 0 (success)
*/

int main(void)
{
	int score;
	/**
	* This function accepts inputs
	* then outputs grade
	*/

	printf("Enter your score: \n");
	scanf("%i", &score);

	switch (score)
	{
	case 80 ... 100:
		printf("Your grade is 'A'\n");
		break;
	case 70 ... 79:
		printf("Your grade is 'B' \n");
		break;
	case 60 ... 69:
		printf("Your grade is 'C' \n");
		break;
	case 50 ... 59:
		printf("Your grade is 'D' \n");
		break;
	case 40 ... 49:
		printf("Your grade is 'E' \n");
		break;
		default:
		printf("Invalid result \n");
	}

	return (0);
}
