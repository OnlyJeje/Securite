SRC=main.cpp enumerator.cpp md5.cpp

OBJ=$(subst .cpp,.o,$(SRC))

NAME= ex2b

ALL= $(CC)

CXXFLAGS= -std=c++11 -Wall -Wextra -fopenmp

CXXLIB= -lssl -lcrypto 

$(CC):$(OBJ)
	g++ -o $(NAME) $(OBJ) $(CXXFLAGS) $(CXXLIB)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(ALL)
