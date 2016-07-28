/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_a.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 21:06:23 by marconte          #+#    #+#             */
/*   Updated: 2016/07/28 17:37:27 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_aff(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 'a')
		{
			write(1,"a",1);
			return (0);
		}
		i++;
	}
	return (1);
}

int		main(int ac, char **av)
{
	if (ac == 2)
		ft_aff(av[1]);
	write(1,"\n", 1);
	return(0);
}
