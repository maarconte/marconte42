/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 10:18:11 by marconte          #+#    #+#             */
/*   Updated: 2016/07/14 13:46:08 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int	i;
	int j;
	char *str;

	i = 0;
	j = 0;
	while (src[j])
	{
		j++;
	}
	str = (char*)malloc(sizeof(*str) * (j + 1));
	while (i < j)
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}
