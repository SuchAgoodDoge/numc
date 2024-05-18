numc : main.o particle.o vec.o
	g++ -o numc src/out/main.o src/out/particle.o src/out/4vec.o

main.o : src/main.cpp src/particle.h
	g++ -c src/main.cpp -o src/out/main.o

particle.o : src/particle.cpp src/particle.h
	g++ -c src/particle.cpp -o src/out/particle.o

vec.o : src/4vec.cpp src/4vec.h
	g++ -c src/4vec.cpp -o src/out/4vec.o

clean :
	rm numc src/out/main.o src/out/particle.o src/out/4vec.o

