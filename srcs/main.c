#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int	main(void)
{
	int	seed;
	int	old_seed;
	int	answer;

	seed = 0;
	old_seed = 0;
	while (1)
	{
		while (seed == old_seed)
		{
			seed = time(NULL);
			srand(seed);
		}
		int	n1 = rand() % 100 % 10 + 1;
		int	n2 = rand() % 1000 % 10 + 1;
		answer = 0;
		while (answer != n1 * n2)
		{
			printf("%d x %d = ", n1, n2);
			scanf("%d", &answer);
			if (!answer)
				return (1);
		}
		old_seed = seed;
	}
	return (0);
}