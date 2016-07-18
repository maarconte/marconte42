/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 23:18:37 by marconte          #+#    #+#             */
/*   Updated: 2016/07/16 23:50:03 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_delime(char str)
{
	if (str == ' ' || str == '\n' || str == '\t' || str == '\v' || str == '\f'
			|| str == '\r')

}

int		ft_strlen(char *str)
{
	int a;
	int s;
	
	s = 0;
	a = 0;
	while (str[a])
	{
		if (ft_delime(str[a]))
			s++;
		a++;
	}
	return (a - s);
}

int		ft_count_words(char *str)
{
	int i;

	if (str == 0)
		return (0);
	i = 0;
	while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		i++;
	if (str[i] == '\0')
		return (0);
	while (str[i] != ' ' && str[i] != '\n' && str[i] != '\t' && str[i] != '\0')
		i++;
	return (1 + ft_count_words(str + i));
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	a = 0;
	while (a != n && src[a])
	{
		dest[a] = src[a];
		a++;
	}
	while (a != n)
	{
		dest[a] = 0;
		a++;
	}
	return (dest);
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		w;
	int		i;
	int		j;
	int		words;

	words = ft_count_words(str);
	array = malloc(sizeof(char*) * (ft_strlen(str +1)));
	w = 0;
	while (w < words)
	{
		i = 0;
		while (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			i++;
		j = 0;
		while (str[i + j] != ' ' && str[i + j] != '\n'
			&& str[i + j] != '\t' && str[i + j] != '\0')
			j++;
		array[w] = (char *)malloc(sizeof(char) * (j + 1));
		*(ft_strncpy(array[w], str + i, j) + j) = '\0';
		str = str + i + j;
		w++;
	}
	array[words] = 0;
	return (array);
}
