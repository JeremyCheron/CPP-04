# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 09:03:52 by jcheron           #+#    #+#              #
#    Updated: 2025/02/24 12:06:29 by jcheron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -Iincludes -std=c++98 -g
SRC_DIR = src
OBJ_DIR = obj

SRC = $(SRC_DIR)/main.cpp $(SRC_DIR)/Animal.cpp $(SRC_DIR)/Dog.cpp $(SRC_DIR)/Cat.cpp $(SRC_DIR)/WrongAnimal.cpp $(SRC_DIR)/WrongCat.cpp $(SRC_DIR)/WrongDog.cpp $(SRC_DIR)/Fox.cpp
OBJ = $(OBJ_DIR)/main.o $(OBJ_DIR)/Animal.o $(OBJ_DIR)/Dog.o $(OBJ_DIR)/Cat.o $(OBJ_DIR)/WrongAnimal.o $(OBJ_DIR)/WrongCat.o $(OBJ_DIR)/WrongDog.o $(OBJ_DIR)/Fox.o

NAME = ex00

all: $(NAME)

$(NAME): $(OBJ)
		$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJ)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
		@mkdir -p $(OBJ_DIR)
		$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
		rm -rf $(OBJ_DIR)

fclean: clean
		rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
