CC=gcc

CCFLAGS=-std=c17 -pedantic -Wall -Wvla -Werror -Wno-unused-variable -D_DEFAULT_SOURCE

ALL= labo client serveur

all: $(ALL)

labo : labo.o  utils.o
	$(CC) $(CCFLAGS) -o labo labo.o utils.o
labo.o: labo.c utils.h
	$(CC) $(CCFLAGS) -c labo.c

serveur : serveur.o utils.o
	$(CC) $(CCFLAGS) -o serveur serveur.o utils.o
serveur.o: serveur.c utils.h
	$(CC) $(CCFLAGS) -c serveur.c

client : client.o utils.o 
	$(CC) $(CCFLAGS) -o client client.o utils.o
client.o: client.c utils.h
	$(CC) $(CCFLAGS) -c client.c

utils.o: utils.c utils.h
	$(CC) $(CCFLAGS) -c utils.c

clean:
	rm -f *.o
	rm -f $(ALL)		