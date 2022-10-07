/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_s.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 17:47:11 by tvillare          #+#    #+#             */
/*   Updated: 2022/10/07 17:49:53 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"


int	ft_s(va_list	PuntArg)
{
	char	*str;
	int		count;

	count = 0;
	str = va_arg(PuntArg, char *);
	while (str[count] != '\0')
	{
		count += write(1, &str[count], 1);
	}
	return (count);
}

