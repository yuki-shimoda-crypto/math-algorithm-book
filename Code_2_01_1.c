#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	long long	x;

	scanf("%lld", &x);
	printf("%lld\n", 5 + x);
	return (0);
}
