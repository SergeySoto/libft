# nombre del archivo de la biblioteca
NAME = libft.a

# compilador y bandeas de compilacion
CC = cc
CFLAGS = -Wall -Wextra -Werror

# archivos fuente y archivos objeto
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c
OBJ = $(SRC:.c=.o)

# archivo de encabezado
INCLUDE = libft.h

# regla por defecto que compila todo
all: $(NAME)

# regla para crear la biblioteca
$(NAME): $(OBJ)  
	ar rcs $(NAME) $(OBJ)

# pasar archivos .c a .o
%.o: %.c $(INCLUDE)
	$(CC) $(CFLAGS) -c -o $@ $<

ejecutarall:
	$(CC) $(CFLAGS) *.c
		a.out

# regla para eliminar todos los archivos objetos creados
clean:
	rm -f $(OBJ)

# Eliminar todos los archivos .o y .a
fclean: clean
	rm -f $(NAME)

# recompila
re: fclean all

# indica que las siguientes reglas no son archivos reales
.PHONY: all clean fclean re
