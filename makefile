CC=gcc



atelier: main.o operateur.o stock.o
	$(CC) -o atelier main.o operateur.o stock.o
	clear	
	./atelier
	gedit TABOP.dat
	cat TABOP.dat 

operateur.o: operateur.c
	$(CC) -o operateur.o -c operateur.c 

stock.o: stock.c
	$(CC) -o stock.o -c stock.c 

main.o: main.c
	$(CC) -o main.o -c main.c

clean:
	rm -rf *.o
 


