
# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fbittenc <fbittenc@students.42.fr>         +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/05 17:00:32 by fbittenc          #+#    #+#              #
#    Updated: 2022/05/17 16:15:06 by fbittenc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = *.c
OBJS = *.o

$(NAME):
	cc -Wall -Wextra -Werror -c -I. $(SRCS)  
	ar -rcs $(NAME) $(OBJS) 

all: $(NAME)

clean:
	rm -f *.o

fclean: clean
	rm -f $(NAME)

re: clean all
