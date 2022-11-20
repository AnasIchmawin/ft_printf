/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aichmawi <aichmawi@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 17:27:43 by aichmawi          #+#    #+#             */
/*   Updated: 2022/11/20 14:53:58 by aichmawi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int		ft_printf(const char *str, ...);
void	printc(char c, int *count);
void	printd(int d, int *count);
void	prints(const char *str, int *count);
void	printx(unsigned int n, int *count, char c);
void	printu(unsigned int n, int *count);
void	printp(void *d, int *count);
#endif
