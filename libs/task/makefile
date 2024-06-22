.PHONY: clean
clean:
	rm -f *.o elliptical ./libs/libhfcal.a 
hfcal.o: hfcal.c ./includes/hfcal.h
	gcc -I./includes/ -c hfcal.c -o hfcal.o
elliptical.o: elliptical.c ./includes/hfcal.h
	gcc -I./includes/ -c elliptical.c -o elliptical.o
./libs/libhfcal.a: hfcal.o
	ar -rcs ./libs/libhfcal.a hfcal.o
elliptical: elliptical.o hfcal.o
	gcc elliptical.o -L./libs -lhfcal -o elliptical
run: elliptical
		./elliptical

all: hfcal.o elliptical.o ./libs/libhfcal.a elliptical run clean
