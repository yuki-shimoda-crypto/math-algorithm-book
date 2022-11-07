#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	long long	n, a[100];
	long long	tot;

	tot = 0;
	scanf("%lld", &n);
	for (long long i = 0; i < n; i++)
	{
		scanf("%lld", &a[i]);
		tot += a[i];
	}
	printf("%lld\n", tot);
	return (0);
}
