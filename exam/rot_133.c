/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrajaona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/07/26 16:39:48 by nrajaona          #+#    #+#             */
/*   Updated: 2016/07/27 21:41:16 by nrajaona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rot_13(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = ((((str[i] - 'a') + 13) % 26) + 'a');
		}
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = ((((str[i] - 'A') + 13) % 26) + 'A');
		}
		ft_putchar(str[i++]);
	}
	ft_putchar('\n');
}

int		main(int argc, char **argv)
{
	if (argc == 2)
	{
		rot_13(argv[1]);
	}
	
	ft_putchar('\n');
	return (0);
}
