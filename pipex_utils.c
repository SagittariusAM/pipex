
int	ft_index(char *str, char c)
{
	int	i;

	i = 0;
	while (*str)
	{
		if (*str == c)
			return (i);
		str++;
		i++;
	}
	return (0);
}

int	ft_getlen(char **array)
{
	int	len;

	len = 0;
	while (*array++)
		len++;
	return (len);
}
