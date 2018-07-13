CC      = g++
CFLAGS  = -Wall
LDFLAGS = 
TARGET 	= magic
LIB 	= lib

OBJS	= wizard.o headmaster.o deatheater.o darklord.o spell.o $(LIB)/basic_spells.a
DLCS	= $(LIB)/dlc_1.a 

all: main.o $(OBJS)
	g++ $^ $(CFLAGS) -o $(TARGET)

runtest: test
	./test

test: unittest.o $(OBJS)
	g++ $^ $(CFLAGS) -o test && ./test

testv2: unittestv2.o $(OBJS) $(DLCS)
	g++ $^ $(CFLAGS) -o test && ./test

main.o: main.cpp
	$(CC) -c $(CFLAGS) $<

unittest.o: unittest.cpp
	$(CC) -c $(CFLAGS) $<

unittestv2.o: unittestv2.cpp
	$(CC) -c $(CFLAGS) $<



wizard.o: wizard.cpp wizard.h
	$(CC) -c $(CFLAGS) $<

headmaster.o: headmaster.cpp headmaster.h
	$(CC) -c $(CFLAGS) $<

deatheater.o: deatheater.cpp deatheater.h
	$(CC) -c $(CFLAGS) $<

darklord.o: darklord.cpp darklord.h
	$(CC) -c $(CFLAGS) $<



$(LIB)/basic_spells.a: firespell.o darkspell.o lightningspell.o
	ar rcs $@ $^

spell.o: spell.cpp spell.h
	$(CC) -c $(CFLAGS) $<

firespell.o: firespell.cpp firespell.h
	$(CC) -c $(CFLAGS) $<

darkspell.o: darkspell.cpp darkspell.h
	$(CC) -c $(CFLAGS) $<

lightningspell.o: lightningspell.cpp lightningspell.h
	$(CC) -c $(CFLAGS) $<



$(LIB)/dlc_1.a: icespell.o transfigurationspell.o
	ar rcs $@ $^

icespell.o: icespell.cpp icespell.h
	$(CC) -c $(CFLAGS) $<

transfigurationspell.o: transfigurationspell.cpp transfigurationspell.h
	$(CC) -c $(CFLAGS) $<

.PHONY: clean

clean:
	rm -vf *.o $(LIB)/*.a