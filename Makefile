NAME	= ft_containers

SRCS	= main.cpp test_reverse_iterator.cpp test_is_integral.cpp \
			test_pair.cpp test_stack.cpp
CC		= c++

OBJS	= $(SRCS:.cpp=.o)

DEPS	= $(OBJS:.o=.d)

CFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3 -MMD

IFLAGS	= -Iutils -Istack

all	:	$(NAME)

%.o	:	%.cpp
		$(CC) $(CFLAGS) $(IFLAGS) -c $< -o $@

$(NAME)	:	$(OBJS)
			$(CC) $(CFLAGS) $(OBJS) $(IFLAGS) -o $@

clean	:
		rm -rf $(DEPS)
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)

re	:	fclean
		make

-include $(DEPS)

.PHONY	:	all fclean clean re
