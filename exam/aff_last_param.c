/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 22:20:10 by marconte          #+#    #+#             */
/*   Updated: 2016/07/26 22:50:37 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while(str[i])
	{
		ft_putchar(str[i]);
		i++;
	}
}
int		main(int ac, char **av)
{
	int	i;
	if (ac >= 2)
	{
		i = ac - 1;
		ft_putstr(av[i]);
	}
	ft_putchar('\n');
	return (0);
}
