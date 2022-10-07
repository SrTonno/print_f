# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tvillare <tvillare@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/04 11:09:36 by tvillare          #+#    #+#              #
#    Updated: 2022/10/05 17:46:47 by tvillare         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

###############################################################################
#                                                       FILES                 #
###############################################################################
CFILES		= \
			ft_printf.c ft_countparam.c
OBJS	=	${CFILES:.c=.o}

#CBONUS = \
#OBONUS	=	$(CBONUS:.c=.o)
###############################################################################
#                                                   SETTINGS                  #
###############################################################################
NAME = libftprintf.a
HDRS = libftprintf.h

CC = gcc
CFLAGS = -Wall -Werror -Wextra

AR = ar
ARFLAGS = -rcs
RM = rm -f

ifdef WITH_BONUS
	TOTAL_OBJS = $(OBJS) $(OBONUS)
else
	TOTAL_OBJS = $(OBJS)
endif

###############################################################################
#                                                         OPTIONS             #
###############################################################################
all: ${NAME}

#bonus :
#	make WITH_BONUS=1

$(NAME): $(TOTAL_OBJS)
	$(AR) $(ARFLAGS) $@ $^

.c.o:
		 ${CC} ${CFLAGS} -c $< -o ${<:.c=.o} -I ${HDRS}

###############################################################################
clean:
		${RM} ${OBJS}

#bclean: bclean
#		${RM} ${OBONUS}

fclean: clean
		${RM} ${NAME}

re: fclean all

.PHONY = all clean fclean re bonus bclean
