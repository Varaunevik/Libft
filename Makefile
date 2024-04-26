NAME = libft.a
CC = gcc
CFLAGS = -Wall -Werror -Wextra
SRCS = ft_lstnew.c ft_strjoin.c ft_atoi.c ft_strlcat.c ft_bzero.c ft_memchr.c ft_strlcpy.c ft_calloc.c ft_memcmp.c ft_strlen.c ft_isalnum.c ft_memcpy.c ft_strmapi.c ft_isalpha.c ft_memmove.c ft_strncmp.c ft_isascii.c ft_memset.c ft_strnstr.c ft_isdigit.c ft_putchar_fd.c ft_strrchr.c ft_isprint.c ft_putendl_fd.c ft_strtrim.c ft_itoa.c ft_putnbr_fd.c ft_substr.c ft_putstr_fd.c ft_tolower.c ft_split.c ft_toupper.c ft_strchr.c ft_strdup.c ft_striteri.c
OBJ = $(SRCS:.c=.o)
SBONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBONUS = $(SBONUS:.c=.o)
RM = rm -f
AR = ar -rcs

.PHONY: all clean fclean re bonus

all: $(NAME)

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

bonus: $(OBJ) $(OBONUS)
	$(AR) $(NAME) $(OBONUS)

.c.o:
	$(CC) -c $(CFLAGS) -o $@ $< -I.

clean:
	$(RM) $(OBJ) $(OBONUS)

fclean: clean
	$(RM) $(NAME)

re: fclean all
