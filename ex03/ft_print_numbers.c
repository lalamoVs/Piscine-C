/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wong koon wei <wkoon-we@student.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 08:35:16 by wong koon w       #+#    #+#             */
/*   Updated: 2026/04/13 08:38:38 by wong koon w      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int		i;
	char	c;

	i = 0;
	while (i < 10)
	{
		c = i + '0';
		write(1, &c, 1);
		i++;
	}
}

int	main(void)
{
	ft_print_numbers();
	write(1, "\n", 1);
	return (0);
}
