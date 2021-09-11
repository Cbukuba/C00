/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <chrisbukuba058@gmail.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/08 23:58:17 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/11 12:12:44 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_test(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 99)
	{
		b = 1;
		while (b <= 99)
		{
			ft_putchar(a % 10 + '0');
			ft_putchar(a / 10 + '0');
			ft_putchar(' ');
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
			ft_putchar(',');
			b ++;
		}
		a ++;
	}
}

/*int	main(void)
{
	ft_print_comb2();
	return (0);
}*/