#include <stdio.h>
#include <unistd.h>
int main(int argc, char **argv)
{
	if (argc == 3)
	{
		// hashtable
		int alph[127];
		int	i;
		int	a;

		i = 0;
		while (argv[1][i])
		{
			a = argv[1][i];
			if (alph[a] != 1)
			{
				write(1, &argv[1][i], 1);
				alph[a] = 1;
			}
			i++;
		}
		i = 0;
		while (argv[2][i])
		{
			a = argv[2][i];
			if (alph[a] != 1)
			{
				write(1, &argv[2][i], 1);
				alph[a] = 1;
			}
			i++;
		}
	}
	write(1, "\n", 1);
}
