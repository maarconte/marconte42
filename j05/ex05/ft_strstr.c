/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 18:58:54 by marconte          #+#    #+#             */
/*   Updated: 2016/07/12 23:14:23 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;
	k = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		k = i;
		j = 0;
		while (str[i] == to_find[j])
		{
			j++;
			k++;
			if (to_find[j] == '\0')
			{
				return (char*)(&str[j]);
			}
			i++;
		}
	}
	return (0);
}
