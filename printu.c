/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printu.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:29:30 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/20 17:04:57 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	printu(unsigned int n, int *count)
{
	if (n < 10)
		printc(n + 48, count);
	else
	{
		printd(n / 10, count);
		printd(n % 10, count);
	}
}
