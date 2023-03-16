#include<stdio.h>
int main(void)
{
	int x = 10;
	long int lx = 20;
	char c = 'm';
	long long int llx = 100;
	float f = 10.0f;
	printf("Size of a char: %lu byte(s)",sizeof(c));
	printf("Size of an int : %lu byte(s)",sizeof(x));
	printf("Size of a long int : %lu byte(s)",sizeof(lx));
	printf("Size of a long long int : %lu byte(s)",sizeof(llx));
	printf("Size of a float : %lu byte(s)",sizeof(f));
	return (0);
}
