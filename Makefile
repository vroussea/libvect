# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vroussea <vroussea@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/11/24 09:55:27 by vroussea          #+#    #+#              #
#    Updated: 2017/01/19 14:55:06 by vroussea         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#ansi chars
LOG = 	\033[2K
BLUE = 	\033[1;34m
YELLOW =\033[1;33m
GREEN =	\033[1;32m
RED =	\033[1;31m
CLEAR =	\033[0m
BOLD =	\033[1m
UNDERL =\033[4m
SHI =	\xF0\x9F\x9B\xA1
TRA =	\xF0\x9F\x97\x91
LIG =	\xE2\x9A\xA1
BR_V =	\xe2\x95\x91
BR_H =	\xe2\x95\x90
CR_UR =	\xe2\x95\x97
CR_UL =	\xe2\x95\x94
CR_DR =	\xe2\x95\x9d
CR_DL =	\xe2\x95\x9a

# comp
CC =		clang
CFLAGS =	-Wall -Wextra -Werror

# binaries
LIB_A = libvect3d.a

# dir
SRC_DIR =	srcs
OBJ_DIR =	objs
INC_DIR =	includes

# sources
SRC_NAME =	vect3d_rotations.c vect3d_add.c vect3d_mult_scal.c vect3d_fill.c   \
			vect3d_scal_prod.c vect3d_ang.c vect3d_norm.c

# objects
OBJ_NAME =		$(SRC_NAME:.c=.o)

#paths
SRC =		$(addprefix $(SRC_DIR)/, $(SRC_NAME))
OBJ =		$(addprefix $(OBJ_DIR)/, $(OBJ_NAME))
INC =		$(addprefix -I, $(INC_DIR))

all :		$(LIB_A) $(OBJ)
$(LIB_A) :	$(OBJ)
		@ar rc $@ $(OBJ)
		@ranlib $@
		@echo "$(CLEAR)$(LIG)$(BLUE)  Creating Libvect3d $(CLEAR)$(LIG)"
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
		@mkdir -p $(OBJ_DIR) 2> /dev/null || true
		@$(CC) $(CFLAGS) $(INC) -o $@ -c $<
norme :
		@norminette $(SRC) includes/libft.h
meteo :
		@curl http://wttr.in/Paris
clean :
		@echo "$(CLEAR)$(TRA)$(RED)  Cleaning Object $(CLEAR)$(TRA)"
		@$(RM) $(OBJ)
		@rmdir $(OBJ_DIR) 2> /dev/null || true
fclean :	clean
		@echo "$(CLEAR)$(TRA)$(RED)  Removing Library $(CLEAR)$(TRA)"
			@$(RM) $(LIB_A)
re :		fclean all
.PHONY :	all, clean, fclean, re
.SILENT :
