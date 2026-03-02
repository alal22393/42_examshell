#include <unistd.h>
int	main (int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return 0;
	}

	int i = 0;
	int j = 0;
	int print_wd = 0;
	while (argv[1][i])
	{
		while (argv[2][j])
		{
			if (argv[1][i] == argv[2][j])
			{
				print_wd = 1;
				j++;
			}

		}
	}

	if (print_wd)
	write(1, "\n", 1);
}
