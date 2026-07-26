/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:18:07 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/25 19:32:18 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_put_dbl(int n)
{
	write(1, &(char){n / 10 + '0'}, 1);
	write(1, &(char){n % 10 + '0'}, 1);
}

void	ft_print_pair(int x, int y)
{
	ft_put_dbl (x);
	write (1, " ", 1);
	ft_put_dbl (y);
	if (!(x == 98 && y == 99))
		write (1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		x;
	int		y;

	x = 0;
	while (x <= 98)
	{
		y = x + 1;
		while (y <= 99)
		{
			ft_print_pair (x, y);
			y++;
		}
		x++;
	}
}

/*int main(void)
{
	ft_print_comb2();
}*/