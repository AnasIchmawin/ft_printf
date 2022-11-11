/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:27:35 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/07 17:27:37 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void testnext(va_list arg, char *str, int *count, int *i)
{
    if (str[i] == '%')
    {
        write(1, "%", 1);
        *i++;
    }
    if (str[i] == 'c')
    {
        printc(va_arg(arg, int), &count);
        *i++;
    }
    // if (str[i] == 's')
    // {
    //     prints();
    //     *i++;
    // }
}

int ft_printf(const char *str, ...)
{
    va_list arg;
    int     i;
    int     count;

    i = 0;
    va_start(arg, str);
    while (str[i])
    {
        if(str[i] != '%')
        {
            write(1, &str[i], 1);
            i++;  
        }
        else
        {
            i++;
            testnext(arg,str,&count,&i);
        }
    }
    va_end(arg);
    return 0;
}
// int main()
// {
//     ft_printf("%s anas%cichmawin%c","My name",' ','|');
// }