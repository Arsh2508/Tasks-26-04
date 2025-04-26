#include <stdio.h>

float to_celsius(float);
int main()
{
	float far = 0;
	printf("Enter temperatre in fahrenheit: ");
	scanf("%f", &far);

	printf("Temperature in celsius is %.2f\n", to_celsius(far));	
	return 0;
}
