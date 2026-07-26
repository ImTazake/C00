/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/23 13:18:04 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/25 19:31:13 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	while (a <= 7)
	{
		b = a;
		while (++b <= 8)
		{
			c = b;
			while (++c <= 9)
			{
				write(1, &(char){a + '0'}, 1);
				write(1, &(char){b + '0'}, 1);
				write(1, &(char){c + '0'}, 1);
				if (a != 7)
					write(1, ", ", 2);
			}
		}
		a++;
	}
}

// int main(void)
// {
//     ft_print_comb();
// }