# Makefile intends to automatically produce the commands sequence needed to build the project.
# It uses variables (starting with $) to make the file more manageable.

## An object file is a binary file created by the compiler as a transition before creating an executable.

# Name of the executable obtained after compilation
NAME = libft.a

# Compilation settings
#CC=cc	# Compilator to use 
CC=ar
#CFLAGS=-Wall -Werror -Wextra # Compil flags
DEPS = libft.h # Dependencies

# Source files
SRC = ft_*.c

# Object files (replace the extensions)
OBJ = $(SRC:.c=.o)

# Default rules (compile the executable)
all: $(NAME)

# Rules to create an executable from object files
$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

# Rules to compile all source file .c to object files .o
#   $< = current source file ; $@ = matching object file
# The -c flag asks the compiler not to link the files
# and to produce only the object file.

# NB! REMOVE THE -g debugger!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
%.o: %.c
	$(CC) $(CFLAGS) -c -g $< -o $@ 

# Rule to clean (remove) the object files
clean:
	rm -f $(OBJ)

# Rule to clean (remove) the object files and the executable
fclean: clean
	rm -f $(NAME)

# Rule to recompile everything (execute fclean, then re)
re: fclean all

# Shows that those targets are not files but commands
.PHONY: all clean fclean re
