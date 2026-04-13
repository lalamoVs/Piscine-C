/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabert.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wong koon wei <wkoon-we@student.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 08:31:51 by wong koon w       #+#    #+#             */
/*   Updated: 2026/04/13 08:34:06 by wong koon w      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alp;

	alp = 'z';
	while (alp >= 'a')
	{
		write(1, &alp, 1);
		alp --;
	}
}

int	main(void)
{
	ft_print_reverse_alphabet();
	write(1, "\n", 1);
	return (0);
}
