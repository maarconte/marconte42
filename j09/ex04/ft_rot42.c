/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/15 14:25:43 by marconte          #+#    #+#             */
/*   Updated: 2016/07/15 16:59:23 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

void		ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

char		*ft_rot42(char *str)
{
	int j;
	int k;

	j = 0;
	k = 0;
	while (str[j] != '\0')
	{
		if (str[j] >= 65 && str[j] <= 90)
		{
			str[j] += 42;
			while (str[j] > 90)
			{
				str[j] -= 26;
			}
			
		}
		if (str[j] >= 97 && str[j] <= 122)
		{
			str[j] += 42;
			j++;
		}
		else
		{
			ft_putstr(str);
			j++;
		}
	}
		return (str);
}
