/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot13.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/28 22:45:37 by marconte          #+#    #+#             */
/*   Updated: 2016/07/28 23:10:59 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	ft_rot13(char c)
{
	if ((c >= 'a' && c <= 'm') || (c >= 'A' && c <= 'M'))
		return (c + 13);
	if ((c > 'm' && c <= 'z') || (c > 'M' && c <= 'Z'))
		return (c - 13);
	return (c);
}

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(ft_rot13(*str++));
}

int		main(int ac, char **av)
{
	if (ac ==2)
		ft_putstr(av[1]);
	ft_putchar('\n');
	return (0);
}
