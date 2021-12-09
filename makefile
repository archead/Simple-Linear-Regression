
output: main.o sigma.o
	gcc  main.o sigma.o -o main -lm

main.o:	main.c
	gcc -c main.c -lm

sigma.o: sigma.h sigma.c
	gcc  -c sigma.c -o sigma.o -lm

clean:
	-rm *.o
	-rm main
	