/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:28:45 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/20 14:55:53 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printd(int n, int *count)
{
	long	d;

	d = n;
	if (d < 0)
	{
		d = -d;
		printc('-', count);
	}
	if (d < 10)
		printc(d + 48, count);
	else
	{
		printd(d / 10, count);
		printd(d % 10, count);
	}
}
