// #include <limits.h>
// #include <math.h>
// #include <stdbool.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <unistd.h>

// int main(void)
// {
// 	long long	n;
// 	long long	tmp;
// 	char		bin[64];
// 	int			i = 0;

// 	scanf("%lld", &n);
// 	if (!n)
// 	{
// 		printf("%d\n", 0);
// 		return (0);
// 	}
// 	if (n < 0)
// 	{
// 		printf("%c", '-');
// 		n *= -1;
// 	}
// 	tmp = n;
// 	while (tmp)
// 	{
// 		tmp /= 2;
// 		i++;
// 	}
// 	bin[i] = 0;
// 	while (n)
// 	{
// 		i--;
// 		bin[i] = n % 2 + '0';
// 		n /= 2;
// 	}
// 	printf("%s\n", bin);
// 	return (0);
// }
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(void)
{
	long long	n;
	long long	tmp;
	char		bin[64];
	int			i = 0;

	scanf("%lld", &n);
	if (!n)
	{
		printf("%d\n", 0);
		return (0);
	}
	if (n < 0)
	{
		printf("%c", '-');
		n *= -1;
	}
	tmp = n;
	while (tmp)
	{
		tmp /= 3;
		i++;
	}
	bin[i] = 0;
	while (n)
	{
		i--;
		bin[i] = n % 3 + '0';
		n /= 3;
	}
	printf("%s\n", bin);
	return (0);
}
