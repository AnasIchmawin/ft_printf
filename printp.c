/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:29:03 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/07 17:29:05 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	hex(unsigned long d, int *count)
{
	if (d < 10)
		printd (d, count);
	else if(d < 16)
		printc(d + 87, count);
	else
	{
		hex(d / 16, count);
		hex(d % 16, count);
	}
}

void printp(void *d, int *count)
{
    prints("0x",count);
    hex((unsigned long)d,count);
}