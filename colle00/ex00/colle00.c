/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsoulaba <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/10 15:21:26 by rsoulaba          #+#    #+#             */
/*   Updated: 2016/07/10 19:57:28 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	premiere_ligne(int x, int y)
{
	int l;

	l = 1;
	if (x == 1 && y >= 1)
	{
		ft_putchar('o');
		ft_putchar('\n');
	}
	if (x > 1)
	{
		ft_putchar('o');
		l++;
		while (l != x)
		{
			ft_putchar('-');
			l++;
		}
		if (l == x)
			ft_putchar('o');
		{
			ft_putchar('\n');
		}
	}
}

void	derniere_ligne(int x)
{
	int l;

	l = 1;
	if (x != 0)
		ft_putchar('o');
	if (x > 1)
	{
		l++;
		while (l != x)
		{
			ft_putchar('-');
			l++;
		}
		if (l == x)
			ft_putchar('o');
	}
}

void	lignes_intermediaires(int x)
{
	int l;

	l = 1;
	if (x == 1)
	{
		ft_putchar('|');
		ft_putchar('\n');
	}
	if (x != 1)
	{
		ft_putchar('|');
		l++;
		while (x != l)
		{
			ft_putchar(' ');
			l++;
		}
		if (l == x)
		{
			ft_putchar('|');
			ft_putchar('\n');
		}
	}
}

void	colle00(int x, int y)
{
	int h;

	h = 1;
	premiere_ligne(x, y);
	if (y > 1)
	{
		while ((h != y - 1) && (x != 0))
		{
			lignes_intermediaires(x);
			h++;
		}
		if (h == y - 1)
			derniere_ligne(x);
	}
}
