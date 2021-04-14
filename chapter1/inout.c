#include <stdio.h>

/*copy input to output;1st version*/

main()
{
	int c;

	c = getchar();
	while(c != EOF){ //end of file
		putchar(c);
		c = getchar();
	}
	
}


/*copy input to output;2st version*/

main()
{
	int c;
	
	while((c = getchar()) != EOF)
	putchar(c);
}

