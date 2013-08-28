#include <iostream>
#include "sweetArray.h"

using namespace std;

SweetArray::SweetArray() {
	
	array = new int[10];
	size = 10;

}

SweetArray::SweetArray(int n) {

	array = new int[n];
	size = n;

}

int& SweetArray::operator[](int i) {

	return array[i];

}

SweetArray SweetArray::operator+(const SweetArray S){
 
	SweetArray C ;

	C.size = size ;	

	for(int i = 0 ; i < size ; i++){

		C.array[i] = (array[i] + S.array[i]) ;
		}

	return C ;
}

SweetArray SweetArray::operator&(const SweetArray S){

	SweetArray C ;
	int counter = 0 ;

	for(int i = 0 ; i < size ; i++){

		for(int j = 0 ; j < size ; j++){

			if(array[i] == S.array[j]){

				C.array[i] = array[i] ;
				counter++ ;
			}
		}
	}
	
	C.size = counter ;
	return C ;
}

SweetArray SweetArray::operator|(const SweetArray S){

	SweetArray C ;

	int dummy_size = size ;
	bool add = false ;


	for(int i = 0 ; i < size ; i++){

		C.array[i] = array[i] ;
		}

	for(int i = 0 ; i < S.size ; i++){
	
		add = false ;

			for(int j = 0 ; j < S.size ; j++){
		
				if(S.array[i] == array[j]){

					add = true ;
				}	
			}
		
		if(add == false){

			C.array[dummy_size] = S.array[i] ;
			dummy_size++ ;

		}
	}

	C.size = dummy_size ;

	return C ;
} 
			
		
					

			
	

ostream& operator<<(ostream& out, SweetArray S) {

	if (S.size == 0) return out ;

	out << S.array[0];

	for (int i = 1; i < S.size; i++){

		out << ", " << S.array[i];
		}

	return out;
}

