/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/14 18:44:02 by marconte          #+#    #+#             */
/*   Updated: 2016/07/15 16:58:04 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_takes_place(int hour)
{
	int x;
	int y;

	x = hour;
	y = x + 1;
	write(1, "THE FOLLOWING TAKES PLACE BETWEEN ", 35);
	if (hour < 11)
		printf("%d.00 A.M AND %d.00 A.M", x, y);
	if (hour == 11)
		printf("%d.00 A.M AND %d.00 P.M", x, y);
	if (hour >= 12 && hour < 23)
		printf("%d.00 P.M AND %d.00 P.M", x - 12, y - 12);
	if (hour == 23)
		printf("%d.00 P.M AND %d0.00 A.M", x - 12, y - 24);
	if (hour == 24)
		printf("%d0.00 A.M AND %d.00 A.M", x - 24, x - 23);
}
