#include <stdio.h>
#include "power_of_two.h"

int main()
{
	for(int i = 0; i<64; i++)
		printf("power_of_two(%d) = %lu\n",i, power_of_two((char) i));
	return 0;
}
