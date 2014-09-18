proj3 : proj3.o quaternion.o
	g++ -o proj3 proj3.o quaternion.o
proj3.o : proj3.cpp quaternion.h
	g++ -c proj3.cpp
quaternion.o : quaternion.cpp quaternion.h
	g++ -c quaternion.cpp
	
clean : 
	-rm *.o