/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/12 19:00:18 by marconte          #+#    #+#             */
/*   Updated: 2016/07/12 22:43:34 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	char haystack[20] = "TutorialsPoint";
	char needle[10] = "Point";
	char *ret;

	ret = strstr(haystack, needle);
	printf("%s\n", ret);
	return (0);
}
