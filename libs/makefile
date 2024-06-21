.PHONY:clean
clean: 
	rm -f *.o *.a secure
encrypt.o: encrypt.c 
	gcc -c encrypt.c -o encrypt.o
checksum.o: checksum.c 
	gcc -c checksum.c -o checksum.o
libsecurity.a: encrypt.o checksum.o
	ar -rcs libsecurity.a encrypt.o checksum.o
secure: secure.c libsecurity.a
	gcc secure.c -I . -L . -lsecurity -o secure
run: secure
	./secure

all: clean encrypt.o checksum.o libsecurity.a secure run


