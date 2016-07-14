/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 18:42:05 by marconte          #+#    #+#             */
/*   Updated: 2016/07/12 18:58:07 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	char dest[10] = " ";
	char src[10] = "salut";
			
	ft_strncpy(dest, src, 3);
	printf("%s\n", dest);
	return (0);
}
