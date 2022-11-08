
#include <stdio.h>
#include "ft_printf.h"
int main(int argc, char const *argv[])
{
	int p = -146688;
	printf("   len = %d\n",ft_printf("%u", p));
	printf("   len = %d",printf("%u", p));
	//printf("\n");
	//printf("   len = %d",printf("%s", (char *)NULL));//printf("]> %d",printf("a%d a",5));
	return 0;
}
