all:
	g++ -I./ -g -o 1.bin -fstack-protector-all 1.cpp
	g++ -I./ -g -o 2.bin -fstack-protector-all 2.cpp
	g++ -I./ -g -o 3.bin -fstack-protector-all 3.cpp
	g++ -I./ -g -o 4.bin -fstack-protector-all 4.cpp
clean:
	rm -f *.bin *.o *.so *_expanded.cpp 
