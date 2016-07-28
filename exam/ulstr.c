/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ulstr.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 22:30:12 by marconte          #+#    #+#             */
/*   Updated: 2016/07/28 22:45:02 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_rotate(int str)
{
	if (str >= 'A' && str <= 'Z')
		return (str + 32);
	if (str >= 'a' && str <= 'z')
		return (str - 32);
	return (str);
}

int		main(int ac, char **av)
{
	int i;

	i = 0;
	if ( ac == 2)
		while (av[1][i])
			ft_putchar(ft_rotate(av[1][i++]));
	ft_putchar('\n');
	return (0);
}
