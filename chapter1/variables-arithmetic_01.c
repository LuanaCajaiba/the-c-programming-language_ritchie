#include <stdio.h>

/* print Fahrenheit-Celsius talble
	for fahr = 0, 20, ..., 300; floating-point version*/

main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;


	fahr = lower;
	while (fahr <= upper){
	
	celsius = (5.0/9.0) * (fahr-32-0);
	printf("%3.0f %6.1f\n", fahr, celsius);
	fahr = fahr + step;
	}
}

/*
	%d    print as decimal integer
	%6d   print as decimal integer, at least 6 charecters wide
	%f    print as floating point
	%6f   print as floating point, at least 6 characters wide
	%.2f  print as floating point, 2 characters after decimal point
	%6.2f print as floating point, at least 6 wide and 2 after decimal point

*/

