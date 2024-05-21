numc : main.o particle.o lvec.o lmatrix.o neutrino.o constants.o
	g++ -o numc src/out/main.o src/out/particle.o src/out/lvec.o src/out/lmatrix.o

main.o : src/main.cpp src/particle.h src/lvec.h
	g++ -c src/main.cpp -o src/out/main.o

particle.o : src/particle.cpp src/particle.h
	g++ -c src/particle.cpp -o src/out/particle.o

lvec.o : src/lvec.cpp src/lvec.h
	g++ -c src/lvec.cpp -o src/out/lvec.o

lmatrix.o : src/lmatrix.cpp src/lmatrix.h
	g++ -c src/lmatrix.cpp -o src/out/lmatrix.o

neutrino.o : src/neutrino.cpp src/neutrino.h
	g++ -c src/neutrino.cpp -o src/out/neutrino.o

constants.o : src/constants.cpp src/constants.h
	g++ -c src/constants.cpp -o src/out/constants.o

clean :
	rm numc src/out/main.o src/out/particle.o src/out/lvec.o src/out/lmatrix.o src/out/neutrino.o src/out/constants.o

