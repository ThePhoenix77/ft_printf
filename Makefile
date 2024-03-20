cmd = cc
flags = -Wall -Werror -Wextra
SOURCES = ft_printf.c ft_putchar.c ft_putstr.c ft_putpoint.c ft_putint.c ft_putuns.c ft_puthex.c ft_puthexup.c
OBJECTS = ft_printf.o ft_putchar.o ft_putstr.o ft_putpoint.o ft_putint.o ft_putuns.o ft_puthex.o ft_puthexup.o
NAME = libftprintf.a
ar = ar -rc
header = ft_printf.h

# Target: all
# Description: Builds the library
all: $(NAME)

# Rule to compile object files from source files
%.o: %.c $(header)
	$(cmd) $(flags) -c $< -o $@

# Rule to build the library
$(NAME): $(OBJECTS)
	$(ar) $(NAME) $(OBJECTS)

# Target: clean
# Description: Removes object files
clean:
	rm -rf $(OBJECTS)

# Target: fclean
# Description: Removes object files and library
fclean: clean
	rm -rf $(NAME)

# Target: re
# Description: Rebuilds the library
re: fclean all
