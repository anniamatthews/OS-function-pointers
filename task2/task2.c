#include <stdio.h>
#include <stdlib.h>

// help from: Benjamin Hoesli

/* IMPLEMENT ME: Declare your functions here */
int add (int a, int b);
int subtract (int a, int b);
int multiply (int a, int b);
int divide (int a, int b);
int exi (int a, int b);



int main (void)
{
	/* IMPLEMENT ME: Insert your algorithm here */
	int a = 6; 
	int b = 3; 

	int selection; 
	int result; 

	int (*p[5]) (int a, int b);
	p[0] = add; 
	p[1] = subtract; 
	p[2] = multiply; 
	p[3] = divide; 
	p[4] = exi; 

	while(1){
		printf("Operand ‘a’ : 6 | Operand ‘b’ : 3 \n");
		printf("Specify the operation to perform (0: add | 1: subtract | 2: multiply | 3: divide | 4: exit) ");
		scanf("%d", &selection);
		result = (*p[selection]) (a,b);
		printf("x = %d\n", result);
		exit(0);

	}

	return 0;
}

/* IMPLEMENT ME: Define your functions here */
int add (int a, int b) { printf ("Adding 'a' and 'b'\n"); return a + b; }
int subtract (int a, int b) { printf("Subtracting...\n"); return a - b; }
int multiply (int a, int b) { printf("Multiplying... \n"); return a * b; }
int divide (int a, int b) { printf("Dividing... \n"); return a / b; }
int exi (int a, int b) { exit(0); }
