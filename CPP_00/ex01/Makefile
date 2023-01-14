NAME = phonebook
CFLAGS = -Wall -Wextra -Werror -std=c++98
CC = c++
RM = rm 

SRCS = Contact.cpp main.cpp Phonebook.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

%.o:%.cpp Contact.hpp Phonebook.hpp
	@$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all