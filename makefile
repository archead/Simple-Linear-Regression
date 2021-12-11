
output: main.o sigma.o csv.o
	gcc  main.o sigma.o csv.o -o main -lm

main.o:	main.c
	gcc -c main.c -lm

sigma.o: sigma.h sigma.c
	gcc  -c sigma.c -o sigma.o -lm

csv.o: csv.h csv.c
	gcc  -c csv.c -o csv.o -lm

clean:
	-rm *.o
	-rm main
	