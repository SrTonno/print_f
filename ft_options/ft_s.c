/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:47:11 by tvillare          #+#    #+#             */
/*   Updated: 2022/10/08 20:13:09 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_printf.h"

int	ft_s(va_list arg)
{
	char	*str;
	int		count;

	count = 0;
	str = va_arg(arg, char *);
	while (str[count] != '\0')
		count += ft_putstr(str[count]);
	return (count);
}
