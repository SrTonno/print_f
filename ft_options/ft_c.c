/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_c.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 16:56:22 by tvillare          #+#    #+#             */
/*   Updated: 2022/10/07 17:46:20 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libftprintf.h"

int	ft_c(va_list	PuntArg)
{
	char	letter;
	int		count;

	letter = va_arg(PuntArg, int);
	count = write(1, &letter, 1);
	return (count);
}

