#pragma warning(disable:4996)

#include <stdio.h>
#include <conio.h>

/*
	Source by CPlusPlus (https://www.cplusplus.com)
	Modified For Learn by RK
	I.D.E : VS2019
*/

int main() {
	char buffer[50];
	int n, a = 5, b = 3;
	
	n = sprintf(buffer, "%d plus %d is %d", a, b, a + b);
	
	printf("[%s] is a string %d chars long\n", buffer, n);

	_getch();
	return 0;
}