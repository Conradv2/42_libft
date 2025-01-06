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
# ar <- utility to create or modify an archive (static library for example)
# r <- replace contents of the archive, if object file exists it is replaced, if it doesnt exist it is created
# c <- creates archive if it doesnt exist, if it does its not overwrote, ar will create or update the archive with new files
# s <- creates index for the archive, faster lookup of symbols inside the archive 
$(NAME): $(OBJS)
		ar rcs $(NAME) $(OBJS)

# Rule for compiling the source files to object files
# -c <- only compile the source file into object file without linking to executable
# $< <- automatic variable, first prerequisite of the rule, it will be replaced with .c that is being compiled
# -o <- name of output file
# $@ <- automatic variable, refers to the target of the rule, so $@ becomes .o corresponding to the .c that is being compiled
%.o: %.c libft.h
	$(CC) $(CFLAGS) -c $< -o $@

# Clean the object files
# f <- force removing files without confirmation
clean:
		rm -f $(OBJS)

# Clean object files and static library
fclean: clean
		rm -f $(NAME)

# Rebuild everything
re: fclean all

# Ensure that the library is always compiled
.PHONY: all clean fclean re