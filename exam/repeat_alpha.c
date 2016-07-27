/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marconte <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/24 18:10:33 by marconte          #+#    #+#             */
/*   Updated: 2016/07/24 18:52:09 by marconte         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_count_index(char letter)
{
	int repeat;
	 repeat = 1;
	 if (letter >= 65 && letter <= 90)
		 repeat = letter - 64;
	 if (letter >= 97 && letter <= 122)
		 repeat = letter - 96;
	 return (repeat);
}

int		main(int argc, char **argv)
{
	int i;
	int j;
	int repeat;

	i = 0;
	j = 0;
	repeat = 0;
	if (argc != 2)
	{
		write(1,"\n",1);
		return (0);
	}
	while (argv[1][i] != '\0')
	{
		repeat = ft_count_index(argv[1][i]);
		while (j < repeat)
		{
			write(1, &argv[1][i],1);
			j++;
		}
		j = 0;
		i++;
	}
	write(1,"\n",1);
	return (0);
}
