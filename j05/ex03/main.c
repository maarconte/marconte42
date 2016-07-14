/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 15:39:10 by marconte          #+#    #+#             */
/*   Updated: 2016/07/12 16:52:11 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char dest[10] = " ";
	char src[10] = "salut";
	
	ft_strcpy(dest, src);
	printf("%s\n", dest);
	return (0);
}
