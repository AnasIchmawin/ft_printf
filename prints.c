/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prints.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:29:16 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/20 17:04:02 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	prints(const char *str, int *count)
{
	int	i;

	i = 0;
	if (str == NULL)
	{
		prints("(null)", count);
		return ;
	}
	while (str[i])
	{
		printc(str[i], count);
		i++;
	}
}
