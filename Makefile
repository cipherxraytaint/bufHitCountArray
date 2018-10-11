CC	= gcc
# CF	= -Wall -g -std=c11 -DDEBUG 
# LF	= -g -DDEBUG 
CF	= -Wall -Wno-unused-variable -Wno-unused-function -Wno-unused-label -g -std=c11 
LF	= -g 

OBJS	= main.o bufHitCountArray.o

all	: bufHitCountAry 

bufHitCountAry : $(OBJS) 
	$(CC) $(LF) -o bufHitCountAry $(OBJS) 

main.o : main.c
	$(CC) $(CF)	-c main.c 

bufHitCountArray.o : bufHitCountArray.c
	$(CC) $(CF) -c bufHitCountArray.o

clean	:
	rm -rf *.o bufHitCountAry 
