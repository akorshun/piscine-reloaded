/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/06 11:11:11 by bsatou            #+#    #+#             */
/*   Updated: 2019/07/06 11:19:36 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int i;
	int result;
	int fack_gg;

	i = 0;
	result = 1;
	fack_gg = 1;
	if ((nb < 0) || (nb > 12))
                return (0);
	if (nb == 1)
		return (1);
	while (i < nb - 1)
	{
		fack_gg = fack_gg + 1;
		result = result * fack_gg;
		i = i + 1;
	}
	return (result);
}
