# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c99 -g

# Source files
SRCS = ft_atoi.c \
       ft_bzero.c \
       ft_calloc.c \
       ft_isalnum.c \
       ft_isalpha.c \
       ft_isascii.c \
       ft_isdigit.c \
       ft_isprint.c \
       ft_itoa.c \
       ft_memchr.c \
       ft_memcmp.c \
       ft_memcpy.c \
       ft_memmove.c \
       ft_memset.c \
       ft_putchar_fd.c \
       ft_putendl_fd.c \
       ft_putnbr_fd.c \
       ft_putstr_fd.c \
       ft_split.c \
       ft_strchr.c \
       ft_strdup.c \
       ft_striteri.c \
       ft_strjoin.c \
       ft_strlcat.c \
       ft_strlcpy.c \
       ft_strlen.c \
       ft_strmapi.c \
       ft_strncmp.c \
       ft_strnstr.c \
       ft_strrchr.c \
       ft_strtrim.c \
       ft_substr.c \
       ft_tolower.c \
       ft_toupper.c

# Object files (generated from the source files)
OBJS = $(SRCS:.c=.o)

# Name of the library (static library)
NAME = libft.a

# Default target: build the static library
all: $(NAME)

# Rule for building the static library
$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

# Rule for compiling the source files to object files
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean the object files
clean:
		rm -f $(OBJS)

# Clean everything (object files + the static library)
fclean: clean
		rm -f $(NAME)

# Rebuild everything
re: fclean all

# Ensure that the library is always compiled
.PHONY: all clean fclean re