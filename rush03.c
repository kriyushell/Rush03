/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mehsalma <mehsalma@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 19:50:44 by mehsalma          #+#    #+#             */
/*   Updated: 2026/11/21 20:36:29 by mehsalma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	put_frame(int colm, int row, int x, int y)
{
	if ((colm == 1 && row == 1) || (colm == 1 && row == y))
	{
		ft_putchar('A');
	}
	else if ((colm == x && row == y) || (colm == x && row == 1))
	{
		ft_putchar('C');
	}
	else
	{
		ft_putchar('B');
	}
}

void	rush(int x, int y)
{
	int	row;
	int	colm;

	if (x <= 0 || y <= 0)
		return ;
	row = 1;
	while (row <= y)
	{
		colm = 1;
		while (colm <= x)
		{
			if ((row == 1) || (row == y) || (colm == 1) || (colm == x))
			{
				put_frame(colm, row, x, y);
			}
			else
			{
				ft_putchar(' ');
			}
			colm++;
		}
		ft_putchar('\n');
		row++;
	}
}
