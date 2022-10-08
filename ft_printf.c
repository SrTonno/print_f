/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:14:52 by tvillare          #+#    #+#             */
/*   Updated: 2022/10/08 20:16:32 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	ft_printf(char const *str, ...)
{
	va_list	arg;
	int		i;
	char	*flag;
	int		count;

	va_start(arg, str);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		flag = (char *)str + i;
		if (str[i] == '%')
		{
			i++;
			count += ft_selectoption((char)str[i], arg);
		}
		else
			count += write(1, flag, 1);
		if (str[i] != '\0')
		i++;
	}
	va_end(arg);
	return (count);
}

/*
int	main()
{
	//char a = 'H';
	//char b = 'B';
	void	*a;
	int co;
	co = ft_printf("HO/%X/LA/%d/ A/%s/DI/%c/O/%u/S P%%ACO//%p/ M%%ARIA\n", 17, 10, "hola monos", 'a', -10, a);
	ft_printf("%d\n", co);

	co = printf("HO/%X/LA/%d/ A/%s/DI/%c/O/%u/S P%%ACO//%p/ M%%ARIA\n", 17, 10, "hola monos", 'a', -10, a);
	printf("%d\n", co);
	//printf("HO/%X/LA ADI/%p/OS P%%ACO MARIA\n", 17, a);
	//int i = 123;
	///printf("%x\n", 3e7);
	//printf("%d\n", i);
return 0;
}

*/
