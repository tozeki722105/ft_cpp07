CXX		:=	c++
CXXFLAGS	:=	-Wall -Wextra -Werror -std=c++98
RM		:=	rm -f

INCLUDE_FLAGG := -I ./

TARGET	:=	a.out
SRCS    :=	main.cpp 
OBJS    :=	$(patsubst %.cpp, %.o, $(SRCS))

.PHONY: all clean flean re

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $^ -o $@

%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDE_FLAGG) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(TARGET)

re: fclean all
