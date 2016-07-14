/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bonacci.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/09 22:12:18 by marconte          #+#    #+#             */
/*   Updated: 2016/07/09 23:25:28 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_bonacci(int index)
{
	if (index < 0)
	{
		return (-1);
	}
	if (index <= 2)
	{
		return (1);
	}
	else
	{
		return (ft_bonacci(index - 1) + ft_bonacci(index - 2));
	}
}
