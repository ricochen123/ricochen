all: lab3-main.exe

lab3-main.o: lab3-main.cc
	g++ -c lab3-main.cc

lab3-main.exe: lab3-main.o
	g++ -o lab3-main.exe  lab3-main.o

clean:
	rm -f *.o *.exe

cleanwin:
	del *.o
	del lab3-main.exe

