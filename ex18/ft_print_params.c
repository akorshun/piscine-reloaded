void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			ft_putstr(argv[i]);
			ft_putstr("\n");
			i++;
		}
	}
	return (0);
}
