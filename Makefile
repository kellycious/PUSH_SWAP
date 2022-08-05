# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: khuynh <khuynh@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/13 15:12:48 by khuynh            #+#    #+#              #
#    Updated: 2022/08/05 03:32:28 by khuynh           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a

DSWAP = \
		prep/args_check.c 			\
		prep/initab.c 			    \
		prep/utils.c 	 		    \
		algo/radix.c	 		    \
		algo/smallalgo.c  			\
		operations/pushA.c			\
		operations/pushB.c			\
		operations/reverse_rotate.c	\
		operations/rotate.c  		\
		operations/swap.c			\
		main.c 						  

OBJS = ${DSWAP:.c=.o}
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
BOLDGREEN=    \033[1m\033[32m

all: ${NAME}

.c.o:

	@cc ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME} : ${OBJS}
	@make -C libft
	@cp libft/libft.a .
	@mv libft.a ${NAME}
	@echo "${GREEN}LIBFT COMPILED ${RESET}"	
	@echo "$(MAGENTA)compiling push_swap... $(RESET)"
	@ar rcs ${NAME} ${OBJS}
	@echo "$(YELLOW)archiving push_swap obj... $(RESET)"
	@echo "${GREEN}PUSH_SWAP COMPILED ${RESET}"

clean:
	@rm -f ${OBJS}
	@make clean -C libft
	@echo "${BOLDGREEN}ALL CLEAN ! ${RESET}"

fclean:	clean
	@rm -f ${NAME}
	@rm -f libft/libft.a

re:	fclean all

.PHONY: all clean fclean re