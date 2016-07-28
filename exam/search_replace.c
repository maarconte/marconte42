/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_replace.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 17:25:34 by marconte          #+#    #+#             */
/*   Updated: 2016/07/28 22:26:49 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

int		main (int ac, char **av)
{
	int i;

	i = 0;
	if (ac == 4)
	{
		if (((*av[3] >= 'a' && *av[3] <= 'z')
				|| (*av[3] >= 'A' && *av[3] <= 'Z'))
				&& ((*av[2] >= 'a' && *av[2] <= 'z')
				|| (*av[2] >= 'A' && *av[2] <= 'Z')))
		{
			while (av[2][i])
				i++;
			while (av[3][i])
				i++;
			if (i != 1)
			{
				return (0);
			}
			i = 0;
			while (av[1][i])
			 {
				if (av[1][i] == av[2][0])
					ft_putchar(av[3][0]);
				else
					ft_putchar(av[1][i]);
				i++;
			 }
		}
	}
	ft_putchar('\n');
	return (0);
}
