/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cbukuba <cbukuba@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/13 22:00:52 by cbukuba           #+#    #+#             */
/*   Updated: 2021/09/13 22:00:59 by cbukuba          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/*void	ft_putchar(char c)
{
	write(1, &c, 1);
}*/

void	ft_print_combn(int n)
{
	int	i;

	if (n > 0 && n < 10)
	{
		i = 0;
		while (i < 88)
		{
			ft_putchar(n / 10 + '0');
			ft_putchar(n % 10 + '0');
			ft_putchar(',');
			ft_putchar(' ');
			n ++;
			i ++;
		}
	}
}

/*int	main()
{
	int n = 2;
	ft_print_combn(n);
}*/