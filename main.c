
#include <stdio.h>
#include "ft_printf.h"
int main(int argc, char const *argv[])
{
	printf("   len = %d",ft_printf("%s", (char *)NULL));
	//printf("\n");
	//printf("   len = %d",printf("%s", (char *)NULL));//printf("]> %d",printf("a%d a",5));
	return 0;
}
