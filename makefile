CFLAGS = -g

OBJS = list.o \
       cross_point.o \
       main.o

TARGET = run

$(TARGET):$(OBJS)
	gcc $(CFLAGS) -o $(TARGET) $(OBJS)

%.o:%.c
	gcc -c $(CFLAGS) $<

all: $(TARGET)

clean:
	rm -f $(OBJS) $(TARGET)
