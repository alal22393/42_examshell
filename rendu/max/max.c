int	max(int* tab, unsigned int len)
{
	int	max;
	int idx;
	if (len == 0)
		return 0;
	idx = len -1;
	max = tab[idx];
	idx--;
	while (idx >= 0)
	{
		if (max < tab[idx])
			max = tab[idx];
		idx--;
	}
	return max;
}
