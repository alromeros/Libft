# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alromero <alromero@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/11/11 19:17:06 by alromero          #+#    #+#              #
#    Updated: 2019/11/16 20:44:39 by alromero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRCS = ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c\
ft_isprint.c ft_isascii.c ft_isalnum.c ft_memchr.c ft_memcpy.c ft_memccpy.c\
ft_memcmp.c ft_toupper.c  ft_strncmp.c ft_memmove.c ft_strchr.c ft_strlcat.c ft_strrchr.c ft_strlcpy.c\
ft_tolower.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_strjoin.c ft_itoa.c ft_putchar_fd.c\
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
ft_lstlast.c ft_strtrim.c ft_split.c #ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJS = $(SRCS:.c=.o)
INCLUDES = ./
all: $(NAME)
$(NAME):    $(SRCS) libft.h
			gcc -Wall -Wextra -Werror -I$(INCLUDES) -c $(SRCS)
			ar rc $(NAME) $(OBJS)
			ranlib $(NAME)
clean:
			$(RM) $(OBJS)
fclean: 	clean
			$(RM) $(NAME)
re:         fclean all
