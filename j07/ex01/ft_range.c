/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 13:46:49 by marconte          #+#    #+#             */
/*   Updated: 2016/07/14 14:27:33 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *tab;
	int i;

	i = 0;
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	while (min < max)
	{
		tab[i] = min;
		++min;
		i++;
	}

	tab[i] = 0;
	return (tab);
}
