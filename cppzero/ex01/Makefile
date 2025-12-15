# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: msabir <msabir@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/12/15 13:11:10 by msabir            #+#    #+#              #
#    Updated: 2025/12/15 16:33:09 by msabir           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
RM = rm -f

SRCS = main.cpp Contact.cpp PhoneBook.cpp
OBJS = main.o Contact.o PhoneBook.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)

main.o: main.cpp PhoneBook.hpp Contact.hpp
	$(CXX) $(CXXFLAGS) -c main.cpp -o main.o

Contact.o: Contact.cpp Contact.hpp
	$(CXX) $(CXXFLAGS) -c Contact.cpp -o Contact.o

PhoneBook.o: PhoneBook.cpp PhoneBook.hpp Contact.hpp
	$(CXX) $(CXXFLAGS) -c PhoneBook.cpp -o PhoneBook.o

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
