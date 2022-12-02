/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:27:35 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/20 14:25:16 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

void	testnext(va_list arg, char str, int *count)
{
	if (str == '%')
		printc('%', count);
	if (str == 'c')
		printc(va_arg(arg, int), count);
	if (str == 'd' || str == 'i')
		printd(va_arg(arg, int), count);
	if (str == 'u')
		printu(va_arg(arg, unsigned int), count);
	if (str == 's')
		prints(va_arg(arg, char *), count);
	if (str == 'x' || str == 'X')
		printx(va_arg(arg, int), count, str);
	if (str == 'p')
		printp(va_arg(arg, void *), count);
}

int	ft_printf(const char *str, ...)
{
	va_list	arg;
	int		i;
	int		count;

	i = 0;
	count = 0;
	va_start(arg, str);
	while (str[i])
	{
		if (str[i] != '%')
		{
			if (write(1, &str[i], 1) < 0)
			{	
				count=-1;
				break;
			}
			else
				count++;
		}
		else
		{
			i++;
			testnext (arg, str[i], &count);
			if(count < 0)
				break;
		}
		i++;
	}
	va_end(arg);
	return (count);
}
// int main()
// {
// 	close(1);
// 	assert(ft_printf("sdzhbdfz")==-1);
// }
