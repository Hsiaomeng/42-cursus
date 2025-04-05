# 变量定义
NAME = libft.a
CC = gcc
CFLAGS = -Wall -Wextra -Werror
SRCS_DIR = srcs
SRCS = $(wildcard $(SRCS_DIR)/*.c)
OBJS = $(SRCS:.c=.o)

# 默认目标
all: $(NAME)

# 创建静态库
$(NAME): $(OBJS)
	ar rc $(NAME) $(OBJS)
	ranlib $(NAME)

# 编译规则
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 清理目标文件
clean:
	rm -f $(OBJS)

# 清理所有生成的文件
fclean: clean
	rm -f $(NAME)

# 重新编译
re: fclean all

# 声明伪目标
.PHONY: all clean fclean re
