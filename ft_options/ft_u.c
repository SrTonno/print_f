/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_u.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 19:04:12 by tvillare          #+#    #+#             */
/*   Updated: 2022/10/07 19:48:27 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "../libftprintf.h"
#include <stdio.h>

static int	ft_putnbr_un(unsigned int n, int count)
{
	char	tmp;

	count = 0;
	if (0 > n)
	{
		n = n * -1;
		count += write(1, "-", 1);
	}
	if (n > 9)
	{
		count += ft_putnbr_un(n / 10, count);
	}
	tmp = (n % 10) + '0';
	count += write(1, &tmp, 1);
	return (count);
}

int	ft_u(va_list PuntArg)
{
	unsigned int	num;
	int 			count;

	num = va_arg(PuntArg, unsigned int);
	count = ft_putnbr_un(num, 0);
	return (count);
}

