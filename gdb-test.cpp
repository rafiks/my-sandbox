#include <stdio.h>
#include <string.h>

int main(int argc, const char *argv[])
{
	char *input;
	int i=0;
	
	scanf("%s", input);

	for (i = strlen(input); i >= 0; i--) {
		printf("%c", input[i]);
	}
	printf("\n");

	return 0;
}
