TARGET = algorithms.a

CC = clang
CFLAGS = -Wall -Wextra -O2 -Iinclude

AR = ar
ARFLAGS = rcs

SRCS = $(shell find src -type f -name '*.c')

OBJS = $(SRCS:.c=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET) compile_commands.json
