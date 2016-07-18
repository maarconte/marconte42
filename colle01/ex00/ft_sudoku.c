/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/16 22:11:00 by marconte          #+#    #+#             */
/*   Updated: 2016/07/17 23:40:53 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putchar(char c);

void	ft_print_table(int **tab)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (j < 9)
	{
		while (i < 9)
		{
			ft_putchar(tab[j][i] + '0');
			if (i != 8)
				ft_putchar(' ');
			i++;
		}
		ft_putchar('\n');
		i = 0;
		j++;
	}
}

int		**ft_make_table(char **argv)
{
	int j;
	int i;
	int **tab;

	i = 0;
	j = 0;
	tab = malloc(sizeof(int*) * 9);
	while (i < 9)
		tab[i++] = malloc(sizeof(int) * 9);
	i = 0;
	while (j < 9)
	{
		while (i < 9)
		{
			if (argv[j + 1][i] >= '1' && argv[j + 1][i] <= '9')
				tab[j][i] = (argv[j + 1][i]) - '0';
			else if (argv[j + 1][i] == '.')
				tab[j][i] = 0;
			i++;
		}
		i = 0;
		j++;
	}
	return (tab);
}

int		ft_number_check(int **tab, int x, int y, int nbr)
{
	int i;
	int base_x;
	int base_y;

	base_x = (x / 3) * 3;
	base_y = (y / 3) * 3;
	i = 0;
	while (i < 9)
	{
		if (tab[y][i] == nbr)
			return (0);
		else if (tab[i][x] == nbr)
			return (0);
		else if (tab[base_y + (i % 3)][base_x + (i / 3)] == nbr)
			return (0);
		i++;
	}
	return (1);
}

int		ft_sudoku(int **tab, int x, int y)
{
	int i;

	i = 1;
	if (x <= 9 && y <= 9)
	{
		while (tab[y][x] != 0)
		{
			x++;
			if (x == 9)
			{
				x = 0;
				y++;
			}
			if (x == 9 && y == 9)
				return (1);
		}
		while (i <= 9)
		{
			if (ft_number_check(tab, x, y, i))
			{
				tab[y][x] = i;
				if (ft_sudoku(tab, x, y))
					return (1);
			}
			i++;
		}
		return (0);
	}
	else
		return (1);
}

int		main(int argc, char **argv)
{
	int **tab;

	if (argc < 10)
	{
		write(1, "Erreur\n", 7);
		return (0);
	}
	tab = ft_make_table(argv);
	ft_sudoku(tab, 0, 0);
	ft_sudoku(tab, 0, 1);
	ft_sudoku(tab, 0, 2);
	ft_sudoku(tab, 0, 3);
	ft_sudoku(tab, 0, 4);
	ft_sudoku(tab, 0, 5);
	ft_sudoku(tab, 0, 6);
	ft_sudoku(tab, 0, 7);
	ft_sudoku(tab, 0, 8);
	ft_sudoku(tab, 1, 0);
	ft_sudoku(tab, 2, 0);
	ft_sudoku(tab, 3, 0);
	ft_sudoku(tab, 4, 0);
	ft_sudoku(tab, 5, 0);
	ft_sudoku(tab, 6, 0);
	ft_sudoku(tab, 7, 0);
	ft_sudoku(tab, 8, 0);
	ft_print_table(tab);
	return (0);
}
