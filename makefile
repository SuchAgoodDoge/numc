numc : main.o particle.o lvec.o
	g++ -o numc src/out/main.o src/out/particle.o src/out/lvec.o

main.o : src/main.cpp src/particle.h src/lvec.h
	g++ -c src/main.cpp -o src/out/main.o

particle.o : src/particle.cpp src/particle.h
	g++ -c src/particle.cpp -o src/out/particle.o

lvec.o : src/lvec.cpp src/lvec.h
	g++ -c src/lvec.cpp -o src/out/lvec.o

clean :
	rm numc src/out/main.o src/out/particle.o src/out/lvec.o

