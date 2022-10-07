/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_flag.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:36:11 by tvillare          #+#    #+#             */
/*   Updated: 2022/10/05 18:24:17 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"
#include <stdio.h>

int	ft_count_flag(const char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%' && str[i + 1] != '%')
				count++;
		else if (str[i] == '%' && str[i + 1] == '%' && str[i + 1] != '\0')
			i++;
		i++;
	}
	return (count);
}
/*
int main()
{
	int i;
	i = ft_count_flag("hola  adios  ppp %%");
	printf("%d", i);
}

*/
