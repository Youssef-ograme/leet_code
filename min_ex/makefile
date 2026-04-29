# CC = gcc 
# OBJ = -Wall -Wextra -Werror
# FIEL = test.c
# DOT = tes

# builde :
# 	$(CC) $(OBJ) $(FIEL) -o $(DOT)
# ################################
# define Display
# 	@echo " 1 is "
# 	@echo " 2 is $1"
# 	@echo " 3 is $2"
# 	@echo " 4 is $@"
# endef

# x = target1
# build :
# 	$(call Display,hello,$(x))
# 	@echo "target is $@"

#################################
 # foreach

# array = hello brother hayyi
# etap = 1 2 3 
# list = $(foreach i, $(array), $(foreach j, $(etap),\n this's $(j) : $(i)))

# play :
# 	@echo "$(list)";

#############################

define Display 
	@echo "$0"
	@echo "$1"
	@echo "$2"
	@echo "$@"
endef

x := target1
build:
	$(call Display,hello,$(x))
	@echo "target is $@"
	
#############################

array = hello bro 
list = $(foreach i , $(array) ,"\nthis's -$(i)")

play :
	@echo $(list)
#############################

file = p01.c
hand:
ifeq '$(file)' 'p01.c'
	@echo "true"
endif

#############################

include test

bul : compile
	$(CC) $(flage) $(file) -o $(programe)
compile :
	$(CC) $(flage) -c $(file)