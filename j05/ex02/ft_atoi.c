/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/11 17:45:36 by marconte          #+#    #+#             */
/*   Updated: 2016/07/12 15:34:40 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int index;
	int result;
	int neg;

	index = 0;
	result = 0;
	neg = 1;
	if (str[0] == '+' || str[index] == ' ')
	{
		index++;
	}
	if (str[0] == '-')
	{
		neg = -1;
		index++;
	}
	while (str[index] >= '0' && str[index] <= '9' && str[index] != '\0')
	{
		result = (result * 10) + (str[index] - '0');
		index++;
	}
	return (result * neg);
}
