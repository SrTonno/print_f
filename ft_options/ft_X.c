/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_X.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:11:56 by tvillare          #+#    #+#             */
/*   Updated: 2022/10/09 15:35:45 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_x(long n, int count, char *base)
{
	if (n < 0)
	{
		n = n * -1;
		count += write(1, "-", 1);
	}
	if (n > 15)
		count += ft_x(n / 16, count, base);
	count += ft_putstr(base[n % 16]);
	return (count);
}
