all:
	g++ -I./ -g -o 1.bin -fstack-protector-all 1.cpp
	g++ -I./ -g -o 2.bin -fstack-protector-all 2.cpp
	g++ -I./ -g -o 3.bin -fstack-protector-all 3.cpp
	
	#Note: this only works on systems that have g++ 4.8 or higher as default
	g++ -I./ -g -o 4.bin -fsanitize=address 4.cpp
	g++ -I./ -g -o impossible.bin -ftrapv -fsanitize=address impossible.cpp
	g++ -I./ -g -o 5.bin -fstack-protector-all 5.cpp
	g++ -I./ -g -o 6.bin -fsanitize=address 6.cpp
	g++ -I./ -g -o todo.bin -fsanitize=address todo.cpp
	
	#If you don't have g++ 4.8 or higher as default, use this instead:
	#g++-4.8 -I./ -g -o 4.bin -fsanitize=address 4.cpp
	#g++-4.8 -I./ -g -o impossible.bin -ftrapv -fsanitize=address impossible.cpp
	#g++-4.8 -I./ -g -o 5.bin -fstack-protector-all 5.cpp
	#g++-4.8 -I./ -g -o 6.bin -fsanitize=address 6.cpp
	#g++-4.8 -I./ -g -o todo.bin -fsanitize=address todo.cpp
clean:
	rm -f *.bin *.o *.so *_expanded.cpp 
