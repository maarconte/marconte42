/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 14:27:57 by marconte          #+#    #+#             */
/*   Updated: 2016/07/14 16:12:07 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int i;

	i = 0;
	tab = (int*)malloc(sizeof(*tab) * (max - min));
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	while (min < max)
	{
		tab[i] = min;
		i++;
		min++;
	}
	range[i] = 0;
	return (i);
}
