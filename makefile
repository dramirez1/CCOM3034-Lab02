client: sweetArray.h sweetArray.cpp client.cpp
	g++ -o client sweetArray.cpp client.cpp

clean: rm *.o client ;
