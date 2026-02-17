#include <stdio.h>
#include <unistd.h>
int	ft_strlen(const char *s)
{
	int count;

	if (!s)
		return (0);
	count = 0;
	while(*s)
	{
		count++;
		s++;
	}
	return count;
}

int	main(int argc, char** argv)
{
	int i;

	if (argc != 2)
	{
		write (1,"\n",1);
		return 0;
	}
	i = ft_strlen(argv[1]) - 1;
	while (i >= 0)
	{
		write(1, &argv[1][i],1);
		i--;
	}
	write (1,"\n",1);
}
