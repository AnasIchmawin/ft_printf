/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printd.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:28:45 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/07 17:28:46 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void printd(int d, int *count)
{
    if (d < 0)
    {
        d = -d;
        printc('-', &count);
    }
    else if (d < 10)
        printc(d, &count);
    else 
    {
        printd(d / 10, &count);
        printd(d % 10, &count);
    }
}