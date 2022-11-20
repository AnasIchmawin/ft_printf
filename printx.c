/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printx.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:29:39 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/20 17:05:33 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printx(unsigned int d, int *count, char c)
{
	if (d < 10)
		printd (d, count);
	else if (d < 16)
	{
		if (c == 'x')
			printc(d + 87, count);
		else if (c == 'X')
			printc(d + 55, count);
	}
	else
	{
		printx(d / 16, count, c);
		printx(d % 16, count, c);
	}
}
