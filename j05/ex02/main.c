/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 15:38:51 by marconte          #+#    #+#             */
/*   Updated: 2016/07/12 15:37:43 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		ft_atoi(char *str);
int		main(void)
{
	char str[] = "		965";

	int a = ft_atoi(str);

	printf("%d\n", a);
	printf("%d", atoi(str));
	return (0);
}
