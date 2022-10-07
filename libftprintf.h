/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 13:16:36 by tvillare          #+#    #+#             */
/*   Updated: 2022/10/07 19:55:12 by tvillare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
1.-Sparar texto %
2.-Apricar opciones(cspdiuxX%) y guardar en malloc
3.-Crear nuevo nodo de la lista y almacenar el malloc
4.-formatear texto dependiendo de las flag
5.-Printear
6.- liberar memoria
*/

#ifndef LIBPRINTF_H
# define LIBPRINTF_H
# include <unistd.h>
# include <limits.h>
# include <stdlib.h>
# include <stdarg.h>

typedef struct	s_print
{
	char			*text;
	char			flag;
	char			format;
	struct s_print	*next;
}	t_print;

int		ft_printf(char const *str, ...);
int		ft_count_flag(const char *str);
void	ft_savestruc(t_print *lst, const char str, char *flag, char format);
int		ft_selectoption(char letter, va_list	PuntArg);
int		ft_c(va_list PuntArg);
int		ft_di(va_list PuntArg);
int		ft_u(va_list PuntArg);
int		ft_s(va_list PuntArg);
int		ft_X(long n, int count, char *base);

#endif
