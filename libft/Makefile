# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mikegonz <mikegonz@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/16 14:47:05 by mikegonz          #+#    #+#              #
#    Updated: 2024/01/21 20:52:11 by mikegonz         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
files = ft_isalnum \
			ft_isascii \
			ft_strlcat \
			ft_strlen \
			ft_toupper \
			ft_isalpha \
			ft_isdigit \
			ft_isprint \
			ft_strchr \
			ft_strncmp \
			ft_strnstr \
			ft_strrchr \
			ft_tolower \
			ft_memset \
			ft_bzero \
			ft_memcpy \
			ft_memmove \
			ft_strlcpy \
			ft_atoi \
			ft_memchr \
			ft_memcmp \
			ft_strdup \
			ft_calloc \
			ft_substr \
			ft_strjoin \
			ft_strtrim \
			ft_itoa \
			ft_strmapi \
			ft_striteri \
			ft_putchar_fd \
			ft_putstr_fd \
			ft_putendl_fd \
			ft_putnbr_fd \
			ft_split \

bonus = ft_lstadd_back_bonus \
			ft_lstadd_front_bonus \
			ft_lstclear_bonus \
			ft_lstdelone_bonus \
			ft_lstiter_bonus \
			ft_lstlast_bonus \
			ft_lstmap_bonus \
			ft_lstnew_bonus \
			ft_lstsize_bonus \

OFILES = $(files:%=%.o)
BONUSFILES = $(bonus:%=%.o)

$(NAME): $(OFILES)
	ar rcs $@ $?

%.o: %.c
	gcc $(CFLAGS) -c $< -o $@

all: $(NAME)

bonus: $(OFILES) $(BONUSFILES)
	ar rcs $(NAME) $? $?

clean:
	@rm -rf $(OFILES) $(BONUSFILES)

fclean: clean
	@rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re bonus
