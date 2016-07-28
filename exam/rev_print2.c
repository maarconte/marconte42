/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 17:11:12 by marconte          #+#    #+#             */
/*   Updated: 2016/07/28 17:25:13 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c,1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		main(int ac, char **av)
{
	int len;

	len = ft_strlen(av[1]) - 1;
	if (ac == 2)
	{
		while (len >= 0)
		ft_putchar(av[1][len--]);
	}
	ft_putchar('\n');
	return (0);
}
