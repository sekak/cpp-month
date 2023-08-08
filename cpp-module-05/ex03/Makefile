Name= Bureaucrat
Header = Bureaucrat.hpp

File = main.cpp Bureaucrat.cpp Form.cpp ShrubberyCreationForm.cpp RobotomyRequestForm.cpp   PresidentialPardonForm.cpp Intern.cpp
OBJ = $(File:.cpp=.o)

CC = g++ 

all : $(Name) 


%.o: %.c
	$(CC)  -c $< -o $@

$(Name): $(OBJ)
	$(CC) -Wall -Wextra -Werror $(OBJ) -o $(Name)


clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(Name)

re:fclean all
