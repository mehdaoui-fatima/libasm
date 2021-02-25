# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: fmehdaou <fmehdaou@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/02/24 09:24:43 by fmehdaou          #+#    #+#              #
#    Updated: 2021/02/25 19:11:30 by fmehdaou         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS =  ft_strlen.s\
		ft_write.s \
		ft_strcmp.s \
		ft_read.s \
		ft_strcpy.s \
		ft_strdup.s
	   
OBJS =  $(SRCS:.s=.o)
	   		
CFLAGS += -fmacho64

all: $(NAME)

$(NAME): $(OBJS)
	 	ar rc $(NAME) $(OBJS)

%.o: %.s
		 nasm $(CFLAGS) $<

clean:
	@/bin/rm -f *.o

fclean:	clean 
		@/bin/rm -f $(NAME)

re: 	fclean all