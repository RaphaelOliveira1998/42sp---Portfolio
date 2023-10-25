NAME			= School
HEADER			= CourseFinishedForm.hpp Form.hpp NeedCourseCreationForm.hpp NeedMoreClassRoomForm.hpp SubscriptionToCourseForm.hpp Person.hpp Student.hpp Classroom.hpp Courtyard.hpp HeadmasterOffice.hpp Room.hpp SecretarialOffice.hpp StaffRestRoom.hpp Headmaster.hpp Professor.hpp Secretary.hpp Staff.hpp Course.hpp Event.hpp
FLAGS			= -Wall -Wextra -Werror -std=c++98
OBJ_PATH		= ./objs/
SRC				= main.cpp
OBJ				= $(SRC:%.cpp=$(OBJ_PATH)%.o)

all: $(NAME)

$(OBJ_PATH)%.o: %.cpp $(HEADER)
	mkdir -p $(OBJ_PATH)
	c++ $(FLAGS) -I ./ -c $< -o $@

$(NAME): $(OBJ)
	c++ $(FLAGS) $(OBJ) -o $(NAME)

clean:
	rm -rf $(OBJ_PATH)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re 