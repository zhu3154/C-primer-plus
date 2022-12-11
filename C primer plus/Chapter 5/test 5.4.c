#include<stdio.h>
#define IN_PER_CM 0.3937
#define IN_PER_FT 12
int main(void) 
{
	float h_cm;
	float h_in;
	int ft;
	float in;

	printf("Enter a height in centimeters: ");
	scanf_s("%f", &h_cm);
	while (h_cm > 0)
	{
		h_in = IN_PER_CM * h_cm;
		ft = (int)h_in / IN_PER_FT;
		in = h_in - ft * IN_PER_FT;
		printf("%.1f cm = %d feet, %.1f inches\n", h_cm, ft, in);
		printf("Enter a height in centimeters (<=0 to quit):");
		scanf_s("%f", &h_cm);
	}
	printf("bye");

	return 0;
}