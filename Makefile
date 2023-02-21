NAME = mini_link

SRCS = main.c list.c search.c utils.c utils_2.c env.c

HEADER		= -I include

CC = gcc 
CFLAGS = -Wall -Wextra -Werror
FFLAGS = -lreadline

AR = ar rcss
RM = rm -f

OBJS = $(SRCS:.c=.o) 

all:  $(NAME)

$(NAME): $(OBJS)
		@echo "$(GR) ... compiling$(DF)"
		 @$(CC)  ${CFLAGS} ${HEADER} ${SRCS:.c=.o} ${LIBS} -o ${NAME} ${FFLAGS}
		 @echo "$(GR) ... done compiling$(DF)"
		 @clear

clean : 
			@$(RM) ./*.o
			@echo "$(RED)	removing all objs files$(DF)"

fclean:			clean
				@$(RM) $(NAME)
				@echo "$(RED)	removing exec files$(DF)"

re:				fclean $(NAME)

