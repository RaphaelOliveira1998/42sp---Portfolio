NAME			= School
HEADER			= -I"./" -I"./Person" -I"./Room" -I"./Staff" -I"./Form"
FLAGS			= -Wall -Wextra -Werror -std=c++98
OBJ_PATH		= ./objs/
SRC				= main.cpp Student.cpp Staff.cpp Course.cpp Room.cpp
OBJ				= $(SRC:%.cpp=$(OBJ_PATH)%.o)

all: $(NAME)

$(OBJ_PATH)%.o: %.cpp
	mkdir -p $(OBJ_PATH)
	c++ $(FLAGS) $(HEADER) -c $< -o $@

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) $(HEADER) -o $(NAME)

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re 