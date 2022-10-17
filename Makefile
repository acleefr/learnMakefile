som.o : som.c
	cc -c som.c
prod.o : prod.c 
	cc -c prod.c
prog : ppal.c som.o prod.o 
	cc -o prog ppal.c som.o prod.o
