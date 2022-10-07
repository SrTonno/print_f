/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_savestruc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:27:16 by tvillare          #+#    #+#             */
/*   Updated: 2022/10/06 16:07:36 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_savestruc(t_print *lst, const char str, char *flag, char format)
{
	lst->text = flag;
	lst->format = format;
	lst->flag = str;
	//lst->next = NULL;
}
