/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wong koon wei <wkoon-we@student.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:20:50 by wong koon w       #+#    #+#             */
/*   Updated: 2026/04/13 11:29:25 by wong koon w      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_putchar(int a, int b)
{
	int		c;
	char	convert;

	c = b + 1;
	convert = a + '0';
	while (c <= 9)
	{
		write(1, &convert, 1);
		convert = b + '0';
		write(1, &convert, 1);
		convert = c + '0';
		write(1, &convert, 1);
		if (a != 7 || b != 8 || c != 9)
			write(1, ", ", 2);
		c ++;
	}
	if (b <= 8)
	{
		b ++;
		ft_putchar(a, b);
	}
}

void	ft_print_comb(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 7)
	{
		b = a + 1;
		ft_putchar(a, b);
		a++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}
