#ifndef TWO_DIMENSIONAL_ARRAY_H
#define TWO_DIMENSIONAL_ARRAY_H

#include <fstream>

#include "Matrix.h"

using namespace std;

class Two_dimensional_array: public Matrix {
	int** Array; //Ìàññèâ
public:
	void In_Array(int N, ifstream& ifst);  //Ôóíêöèÿ ââîäà ìàññèâà
	void Out_Array(int N, ofstream& ofst); //Ôóíêöèÿ âûâîäà ìàññèâà
	int Sum(int N); //Ôóíêöèÿ ïîäñ÷åò ñóììû ýëåìåíòîâ ìàòðèöû
	void Out_Array(Key_out K_o, int N, ofstream& ofst); //Ôóíêöèÿ âûâîäà ìàññèâà
	Two_dimensional_array() {};
};
#endif //TWO_DIMENSIONAL_ARRAY_H