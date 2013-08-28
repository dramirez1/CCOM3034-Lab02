//===============================
//sweetArray.h
//Por: David A. Ramirez, 26 de Agosto de 2013
//
//Implementaciones de las funciones miembro nuevos de operativos
//de suma, union e interseccion de la clase sweetArray.
//================================

#ifndef SWEET_H
#define SWEET_H

#include <iostream>

using namespace std;

class SweetArray {

private:	

	int *array ;
	int size ;

public:

	SweetArray() ;
	SweetArray(int n) ;
	int& operator[](int i);
	SweetArray operator+(const SweetArray S) ;	
	SweetArray operator&(const SweetArray S) ;
	SweetArray operator|(const SweetArray S) ;

friend ostream& operator<<(ostream& out, SweetArray S);

};

#endif
