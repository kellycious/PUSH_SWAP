# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/11 23:10:17 by khuynh            #+#    #+#              #
#    Updated: 2022/08/05 03:31:58 by khuynh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS =  \
		ft_memset.c     \
        ft_memmove.c    \
        ft_memchr.c     \
        ft_memcmp.c     \
        ft_memcpy.c     \
        ft_bzero.c      \
        ft_atoi.c       \
        ft_strlen.c     \
        ft_strlcpy.c    \
        ft_strlcat.c    \
        ft_strchr.c     \
        ft_strrchr.c    \
		ft_striteri.c   \
        ft_strnstr.c    \
        ft_strncmp.c    \
        ft_atoi.c       \
        ft_isalnum.c    \
        ft_isdigit.c    \
        ft_isalpha.c    \
        ft_isascii.c    \
        ft_isprint.c    \
        ft_tolower.c    \
        ft_toupper.c    \
        ft_calloc.c     \
        ft_strdup.c     \
        ft_itoa.c       \
        ft_substr.c     \
        ft_strjoin.c    \
        ft_strtrim.c    \
        ft_split.c      \
        ft_strmapi.c    \
        ft_putchar_fd.c \
        ft_putstr_fd.c  \
        ft_putendl_fd.c \
        ft_putnbr_fd.c

BONUS = \
		ft_lstmap.c		\
		ft_lstlast.c	\
		ft_lstnew.c		\
		ft_lstclear.c	\
		ft_lstdelone.c	\
		ft_lstiter.c	\
		ft_lstsize.c	\
		ft_lstadd_back.c	\
		ft_lstadd_front.c	

OBJS = ${SRCS:.c=.o}
BONUS_OBJS = ${BONUS:.c=.o}
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# COLORS
RESET=        \033[0m
DARK=        \033[1;32m
RED=        \033[31m
GREEN=        \033[32m
YELLOW=        \033[33m
BLUE=        \033[34m
MAGENTA=    \033[35m
CYAN=        \033[36m
WHITE=        \033[37m
BOLDBLACK=    \033[1m\033[30m
BOLDRED=    \033[1m\033[31m
BOLDWHITE=    \033[1m\033[37m

all: $(NAME)

.c.o :
	@echo "$(MAGENTA)compiling libft... $(RESET)"
	@${CC} ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	@echo "$(GREEN)compiling done:$(BOLDWHITE) 100% $(RESET)"
	@echo "$(YELLOW)archiving libft obj... $(RESET)"
	@ar rcs ${NAME} ${OBJS}
	@echo "$(GREEN)archiving done:$(BOLDWHITE) 100% $(RESET)"

bonus: ${BONUS_OBJS}
	@echo "$(YELLOW)archiving bonus object files... $(RESET)"
	@ar rcs ${NAME} ${BONUS_OBJS}
	@echo "$(GREEN)archiving done:$(BOLDWHITE) 100% $(RESET)"

clean:
	@echo "$(CYAN)cleaning... $(RESET)"
	@rm -f ${OBJS} ${BONUS_OBJS}
	@echo "$(GREEN)cleaning done:$(BOLDWHITE) 100% $(RESET)"

fclean: clean
	rm -rf ${NAME}

re: fclean all

.PHONY: all clean fclean re bonus
