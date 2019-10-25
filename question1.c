#include <stdio.h>
int main(int argc, const char** argv, const char** envp) {

	int eax = 3 * 5;
	int edx = eax;
	eax = 3;
	eax /= 2;

	printf("%d", edx - eax);

	return 0;

}