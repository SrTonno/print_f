/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_X.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 18:11:56 by tvillare          #+#    #+#             */
/*   Updated: 2022/10/07 19:57:40 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_X(long n, int count, char *base)
{
	char	tmp;

	if (0 > n)
	{
		n = n * -1;
		count += write(1, "-", 1);
	}
	if (n > 9)
	{
		count += ft_X(n / 16, count, base);
	}
	tmp = (n % 16) + '0';
	count += write(1, &base[tmp], 100);
	return (count);
}
