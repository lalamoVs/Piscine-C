/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wong koon wei <wkoon-we@student.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 11:29:54 by wong koon w       #+#    #+#             */
/*   Updated: 2026/04/13 12:01:57 by wong koon w      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	two_digit(int n)
{
	char	buf[2];

	buf[0] = (n / 10) + '0';
	buf[1] = (n % 10) + '0';
	write(1, buf, 2);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			two_digit(a);
			write(1, " ", 1);
			two_digit(b);
			if (!(a == 98 && b == 99))
			{
				write(1, ", ", 2);
			}
			b ++;
		}
		a ++;
	}
}

int	main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
	return (0);
}
