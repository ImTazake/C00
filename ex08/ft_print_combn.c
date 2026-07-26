/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tisilva <tisilva@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/22 23:25:47 by tisilva           #+#    #+#             */
/*   Updated: 2026/07/25 19:35:29 by tisilva          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_init_num(int *num, int n)
{
	int		i;

	i = 0;
	while (i < n)
	{
		num[i] = i;
		i++;
	}
}

void	ft_print_num(int *num, int n)
{
	int		i;

	i = 0;
	while (i < n)
		write (1, &(char){num[i++] + '0'}, 1);
}

int	ft_next_num(int *num, int n)
{
	int		i;

	i = n - 1;
	while (i >= 0 && num[i] == 10 - n + i)
		i--;
	if (i < 0)
		return (0);
	num[i]++;
	while (++i < n)
		num[i] = num[i - 1] + 1;
	return (1);
}

void	ft_print_combn(int n)
{
	int		num[10];
	int		next;

	if (n <= 0 || n >= 10)
		return ;
	next = 1;
	ft_init_num (num, n);
	while (next)
	{
		ft_print_num (num, n);
		next = ft_next_num (num, n);
		if (next)
			write (1, ", ", 2);
	}
}

// int main(void)
// {
// 	ft_print_combn(0);
// }