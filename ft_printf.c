/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:14:52 by tvillare          #+#    #+#             */
/*   Updated: 2022/10/07 19:55:47 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
# include <stdarg.h>
# include <unistd.h>
#include <stdio.h>

int	ft_printf(char const *str, ...)
{
	va_list	PuntArg;
	int		i;
	char	*flag;
	int		count;

	va_start(PuntArg, str);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		flag = (char *)str + i;
		if (str[i] == '%')
		{
			i++;
			if (str[i] == '%')
				count += write(1, "%", 1);
			else
				count += ft_selectoption((char)str[i], PuntArg);
		}
		else
			write(1, flag, 1);
		if (str[i] != '\0')
		i++;
	}
	va_end(PuntArg);
	return (count);
}

int	main()
{
	//char a = 'H';
	//char b = 'B';
	ft_printf("HO%XLA ADIOS P%%ACO MARIA", 1);
	//int i = 123;
	///printf("%x\n", 3e7);
	//printf("%d\n", i);
return 0;
}
