#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	long long	a, b, c;

	scanf("%lld%lld%lld", &a, &b, &c);
	printf("%lld\n", a + b + c);
	return (0);
}
