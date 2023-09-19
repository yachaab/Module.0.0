TARGET  = megaphone

CC      = c++

CPPFLAG = -Werror -Wall -Wextra -std=c++98 -g3 #-fsanitize=address

SRC     = megaphone.cpp

OBJ     = $(SRC:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CPPFLAG) -o $@ $^

%.o: %.cpp
	$(CC) $(CPPFLAG) -c -o $@ $<

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(TARGET)

re: fclean $(TARGET)

.PHONY: clean fclean re
