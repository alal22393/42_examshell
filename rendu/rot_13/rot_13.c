#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return 0;
	}

	char *s = argv[1];
	char c;
	while (*s)
	{
		if(('a' <= *s) && (*s <= 'm'))
		{
			c = *s + 13;
			write (1, &c, 1);
		}
		else if(('n' <= *s) && (*s <= 'z'))
		{
			c = *s - 13;
			write (1, &c, 1);
		}
		else if(('A' <= *s) && (*s <= 'M'))
		{
			c = *s + 13;
			write (1, &c, 1);
		}
		else if(('N' <= *s) && (*s <= 'Z'))
		{
			c = *s - 13;
			write (1, &c, 1);
		}
		else
			write (1, s, 1);
		s++;
	}
	write (1, "\n", 1);
}
