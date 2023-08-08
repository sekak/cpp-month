NAME = main
Header = Array

File = main.cpp 
FileObj = $(File:.cpp=.o)

$(NAME):$(FileObj)
	c++ -Wall -Wextra -Werror $(FileObj) -o $(NAME)

all: $(NAME)

clean:
	rm -rf $(FileObj)

fclean:clean
	rm -rf $(NAME)

re:fclean all