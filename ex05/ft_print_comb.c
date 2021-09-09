/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <chrisbukuba058@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 14:25:19 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/08 22:04:40 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_chfr(int a, int b, int c)
{
	char	tab[4];

	tab[0] = a + '0';
	tab[1] = b + '0';
	tab[2] = c + '0';
	tab[4] = ',';
	write(1, &tab, 4);
}

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	b = 1;
	c = 2;
	while (a <= 7)
	{
		while (b <= 8)
		{
			while (c <= 9)
			{
				write_chfr(a, b, c);
				c++;
			}
			b++;
			c = b + 1;
		}
		a++;
		b = a + 1;
		c = b + 1;
	}
}

/*int	main(void)
{
	ft_print_comb();
	return (0);
}*/
