NAME= megaphone
CPP= c++
CFLAGS= -Wall -Wextra -Werror
SRC= Megaphone.cpp
OBJ= $(SRC:%.cpp=%.o)

all: $(NAME)

$(NAME) : $(OBJ)
	$(CPP) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CPP) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: clean