SRC=main.cpp md5.cpp list_word.cpp

OBJ=$(subst .cpp,.o,$(SRC))

NAME= tp1_ex2

ALL= $(CC)

CXXFLAGS= -std=c++11 -Wall -Wextra

CXXLIB= -lssl -lcrypto

$(CC):$(OBJ)
	g++ -o $(NAME) $(OBJ) $(CXXFLAGS) $(CXXLIB)


clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean $(ALL)
