CC=gcc
CFLAGS=-I.

DEPS=server.h http.h file.h compare.h
OBJ=server.o http.o file.o compare.o

USERID=123456789

%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

all: server
server: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

clean:
	rm -rf *.o server *.tar.gz *.swp

dist: tarball
tarball: clean
	tar -cvzf /tmp/$(USERID).tar.gz --exclude=./.vagrant . && mv /tmp/$(USERID).tar.gz .