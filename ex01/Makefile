NAME= phonebook
CPP= c++
CFLAGS= -Wall -Wextra -Werror
SRC= main.cpp PhoneBook.cpp Contact.cpp
OBJ= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp PhoneBook.hpp Contact.hpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean