RECEPTCOMP.exe: main.o lexer.o symbole.o
	g++ -o RECEPTCOMP.exe main.o lexer.o symbole.o

main.o: main.cpp
	g++ -c main.cpp

lexer.o: lexer.cpp lexer.h symbole.h 
	g++ -c lexer.cpp

symbole.o: symbole.cpp symbole.h
	g++ -c symbole.cpp

clean:
	rm -f *.o *.EXE
