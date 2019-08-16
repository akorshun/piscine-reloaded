/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 14:08:21 by bsatou            #+#    #+#             */
/*   Updated: 2019/07/06 14:11:35 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	long int	test;
	int			result;

	test = 1;
	if (nb > 2147395600 || nb < 0)
		return(0);
	while (test * test <= nb)
	{
		if (test > 46341)
			return (0);
		if (test * test == nb)
			result = test;
		else
			result = 0;
		test++;
	}
	return (result);
}
