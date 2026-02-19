#include <unistd.h>
int	main(int argc, char** argv)
{
	if (argc != 2)
	{
		write (1, "\n", 1);
		return 0;
	}
	char *s;
	char c;
	s = argv[1];
	while (*s)
	{
		if (('a' <= *s) && (*s <= 'z'))
		{
			c = *s - 32;
			write (1, &c, 1);
		}
		else if (('A' <= *s) && (*s <= 'Z'))
		{
			c = *s + 32;
			write (1, &c, 1);
		}
		else
			write (1, s, 1);
		s++;
	}
	write (1, "\n", 1);
}
