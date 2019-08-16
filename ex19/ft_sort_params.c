/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/09 13:57:54 by bsatou            #+#    #+#             */
/*   Updated: 2019/07/09 16:21:48 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count = count + 1;
	}
}

void	ft_putstrn(char *str)
{
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		ft_putchar(str[count]);
		count = count + 1;
	}
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while ((s1[i] != '\0') && (s2[i] != '\0') && (s1[i] == s2[i]))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(int argc, char *argv[])
{
	int		i;
	int		flag;
	char	*tmp;

	flag = 1;
	while (flag)
	{
		i = 0;
		flag = 0;
		while (++i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = tmp;
				flag = 1;
			}
		}
	}
	i = 0;
	while (++i < argc)
		ft_putstrn(argv[i]);
	return (0);
}
