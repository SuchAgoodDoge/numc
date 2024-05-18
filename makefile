numc : main.o particle.o 4vec.o
	g++ -o numc main.o particle.o 4vec.o

main.o : src/main.cpp src/particle.h
	g++ -c src/main.cpp

particle.o : src/particle.cpp src/particle.h
	g++ -c src/particle.cpp

4vec.h : src/4vec.h
	g++ -c src/4vec.h

4vec.o : src/4vec.cpp src/4vec.h
	g++ -c src/4vec.cpp

clean :
	rm numc main.o particle.o