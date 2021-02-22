main: main.o ktour.o 
	g++ -o main main.o ktour.o

main.o: main.cpp ktour.h

ktour.o: ktour.cpp ktour.h

clean: 
	rm -f main.o ktour.o 
