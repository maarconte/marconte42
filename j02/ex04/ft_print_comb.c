/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/07 22:01:49 by marconte          #+#    #+#             */
/*   Updated: 2016/07/08 10:42:34 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	ft_putchar(char a);

void	ft_print_comb(void)
{
	char a;
	char b;
	char c;

	a = '0';
	b = '0';
	c = '0';
	while (a <= '9')
	{
		while (b <= '9')
		{
			while (c <= '9')
			{
				if (a < b && b < c)
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(c);
					ft_putchar(',');
					ft_putchar(' ');
				}
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}
