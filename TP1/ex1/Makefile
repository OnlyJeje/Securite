SRC=main.cpp crack.cpp

OBJ=$(subst .cpp,.o,$(SRC))

NAME= ex1

ALL= $(CC)

CXXFLAGS= -std=c++11 -Wall -Wextra

$(CC):$(OBJ)
	g++ -o $(NAME) $(OBJ) $(CXXFLAGS)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean $(ALL)
