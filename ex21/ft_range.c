/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsatou <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/10 12:41:05 by bsatou            #+#    #+#             */
/*   Updated: 2019/07/10 12:58:48 by bsatou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int range_len;
	int *range;
	int i;
	int count;

	if (min >= max)
		return (NULL);
	range_len = max - min;
	range = (int*)malloc(sizeof(*range) * (range_len));
	i = min;
	count = 0;
	while (count < range_len)
	{
		range[count] = i;
		i++;
		count++;
	}
	return (range);
}
