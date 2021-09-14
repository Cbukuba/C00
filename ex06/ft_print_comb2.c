/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>         +#+  +:+       +#+          */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:58:17 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/11 12:12:44 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	write_chfr(int a, int b)
{
	if (a != b)
	{
		ft_putchar(a / 10 + '0');
		ft_putchar(a % 10 + '0');
		ft_putchar(' ');
		ft_putchar(b / 10 + '0');
		ft_putchar(b % 10 + '0');
	}
	if (a == 97 && b == 99)
		write(1, ", ", 2);
	if (a != 98 && b != 99)
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	b = 1;
	a = 0;
	while (a <= 98)
	{
		while (b <= 99)
		{
			write_chfr(a, b);
			b ++;
		}
		b = a + 1;
		a ++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/