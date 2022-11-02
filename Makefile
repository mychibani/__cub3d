NAME		= cub3D

SRC			= 	main.c	\
				mlx_utils.c	\
				init_cub3d.c	\
				clean.c	\
				parsing.c	\
				quit.c	\

SRCSPATH 	= srcs

INCLUDES	= ./includes/ 

OBJDIR		= all_o

CC			= gcc

LIBFT		=	libft/libft.a

CFLAGS		= -Werror -Wall -Wextra -g3

MLX			=	-L ./mlx/ -lmlx -lXext -lX11 -lm -O3

RM			= rm -rf

SRCS 		= $(addprefix $(SRCSPATH)/,$(SRC))

OBJS        = $(addprefix $(OBJDIR)/,${SRC:.c=.o})

$(OBJDIR)/%.o: $(SRCSPATH)/%.c
	@printf "$(_ORANGE)Compiling : %s\n" $<
	@mkdir -p $(OBJDIR)
	@${MAKE} -C libft > /dev/null
	@${MAKE} -C mlx >/dev/null
	@$(CC) $(CFLAGS) -I $(INCLUDES) -I libft/includes -I mlx -c $< -o $@

all: ${NAME}

${NAME}:	${OBJS}
	@${CC} ${CFLAGS} -I $(INCLUDES) -I libft/includes -I mlx ${OBJS} -o ${NAME} ${LIBFT} ${MLX}
	@printf "$(_GREEN)Compiling DONE !\n"

clean:
	@printf "$(_RED)Removing objects...\n"
	@${RM} ${OBJS} ./all_o/*.o
	@${MAKE} -C libft fclean >/dev/null
	@${MAKE} -C mlx clean >/dev/null

fclean:	clean
	@printf "$(_RED)Removing $(NAME)...\n"
	@${RM} ${NAME} ./all_o/*.o all_o

re:	fclean all

################################################# colors

_WHITE = \e[97m
_GREEN = \e[38;5;118m
_ORANGE = \e[38;5;208m
_RED = \e[38;5;196m
_R = \e[0m

#################################################

.PHONY: all clean fclean re