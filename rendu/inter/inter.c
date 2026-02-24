#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		write(1, "\n", 1);
		return 0;
	}

	int	str_1;
	int	str_2;
	int	dup_1;

	str_1 = 0;

	while (argv[1][str_1])
	{
		str_2 = 0;
		while (argv[2][str_2])
		{
			if (argv[1][str_1] == argv[2][str_2])
			{
				dup_1 = 0;
				while (argv[1][dup_1] != argv[1][str_1])
					dup_1++;
				if (dup_1 == str_1)
					write(1, &argv[1][str_1], 1);
				break;
			}
			str_2++;
		}
		str_1++;
	}
	write(1, "\n", 1);
}
