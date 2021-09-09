/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <chrisbukuba058@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:58:17 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/09 12:19:35 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_chfr(int a, int b, int c, int d)
{
	char	tab[6];

	tab[0] = a + '0';
	tab[1] = b + '0';
	tab[2] = ' ';
	tab[3] = c + '0';
	tab[4] = d + '0';
	tab[5] = ',';
	write(1, &tab, 6);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = 0;
	while (a <= 9)
	{
		b = 0;
		while (b <= 9)
		{
			c = 0;
			while (c <= 9)
			{
				d = 0;
				while (d <= 9)
				{
					write_chfr(a, b, c, d);
					d ++;
				}
				c ++;
			}
			b ++;
		}
		a++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
