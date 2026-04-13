/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wong koon wei <wkoon-we@student.42.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/13 12:13:37 by wong koon w       #+#    #+#             */
/*   Updated: 2026/04/13 16:04:10 by wong koon w      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_comb(int *a, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = a[i] + '0';
		write(1, &c, 1);
		i ++;
	}
	if (a[0] != 10 - n)
		write(1, ", ", 2);
}

int	*inc_index(int index, int n, int*a)
{
	int	j;

	j = index + 1;
	while (j < n)
	{
		a[j] = a[j - 1] + 1;
		j ++;
	}
	return (a);
}

void	ft_print_combn(int n)
{
	int	*a;
	int	i;
	int	j;

	i = 0;
	a = malloc(n * sizeof(int));
	free (a);
	while (i < n)
	{
		a[i] = i;
		i ++;
	}
	while (i + 1)
	{
		print_comb(a, n);
		i = n - 1;
		while (i >= 0 && a[i] == 10 - n + i)
		{
			i--;
		}
		a[i]++;
		inc_index(i, n, a);
	}
}

int	main(void)
{
	ft_print_combn(3);
	write(1, "\n", 1);
	return (0);
}
