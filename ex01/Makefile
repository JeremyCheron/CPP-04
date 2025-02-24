# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcheron <jcheron@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/02/24 09:03:52 by jcheron           #+#    #+#              #
#    Updated: 2025/02/24 14:12:54 by jcheron          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = g++
CXXFLAGS = -Wall -Werror -Wextra -Iincludes -std=c++98 -g
SRC_DIR = src
OBJ_DIR = obj

SRC = $(SRC_DIR)/main.cpp $(SRC_DIR)/Animal.cpp $(SRC_DIR)/Dog.cpp $(SRC_DIR)/Cat.cpp p $(SRC_DIR)/Brain.cpp
OBJ = $(OBJ_DIR)/main.o $(OBJ_DIR)/Animal.o $(OBJ_DIR)/Dog.o $(OBJ_DIR)/Cat.o $(OBJ_DIR)/Brain.o

NAME = ex01

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
