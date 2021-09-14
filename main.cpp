#include <stddef.h> // for size_t
#include <stdint.h> // for uint8_t
#include <stdio.h> // for printf
#include <netinet/in.h>

int main(int argc, char *argv[])
{
	FILE *p;
	uint32_t x, y;

	p = fopen(argv[1], "r");
	fread(&x, sizeof(uint32_t), 1, p);
	
	p = fopen(argv[2], "r");
	fread(&y, sizeof(uint32_t), 1, p);

	x = ntohl(x);
	y = ntohl(y);

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", x, x, y, y, x+y, x+y);
	return 0;
}



