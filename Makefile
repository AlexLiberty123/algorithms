TARGET = libalgorithms.a

CC = clang
CFLAGS = -Wall -Wextra -O2 -Iinclude -MMD -MP

AR = ar
ARFLAGS = rcs

SRCS = $(shell find src -type f -name '*.c')

OBJS = $(SRCS:.c=.o)
DEPS = $(SRCS:.c=.d)

.PHONY: all clean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(AR) $(ARFLAGS) $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(DEPS) $(TARGET) compile_commands.json

-include $(DEPS)
