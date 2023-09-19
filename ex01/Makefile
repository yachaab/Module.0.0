TARGET  = phonebook
CC      = c++
CPPFLAG = -Werror -Wall -Wextra -g3 -O0 -std=c++98 #-fsanitize=address
SRC     = main.cpp Contact.cpp PhoneBook.cpp
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