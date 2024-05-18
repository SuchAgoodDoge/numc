numc : src/main.o src/particle.o
	g++ -o numc src/main.o src/particle.o

src/main.o : src/main.cpp src/particle.h
	g++ -c src/main.cpp

src/particle.o : src/particle.cpp src/particle.h
	g++ -c src/particle.cpp

clean :
	rm numc src/main.o src/particle.o