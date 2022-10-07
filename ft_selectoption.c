/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_selectoption.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 18:37:27 by tvillare          #+#    #+#             */
/*   Updated: 2022/10/07 19:54:58 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
//cspdiuxX %
//  https://cplusplus.com/reference/cstdio/printf/

int	ft_selectoption(char letter, va_list	PuntArg)
{
	int count;

	count = 0;
	if (letter == 'c')
		count += ft_c(PuntArg);
	else if (letter == 's')
		count += ft_s(PuntArg);
	//else if (letter == 'p')
		//count += ft_p(PuntArg);
	else if (letter == 'd' || letter == 'i')
		count += ft_di(PuntArg);
	else if (letter == 'u')
		count += ft_u(PuntArg);
	else if (letter == 'X')
		count += ft_X(va_arg(PuntArg, long), 0, "0123456789ABCDEF");
	/*
	else if (letter == 'x')
		count += ft_xX(PuntArg);
		*/
	return (count);
}
