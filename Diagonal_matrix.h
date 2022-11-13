#ifndef DIAGONAL_MATRIX_H
#define DIAGONAL_MATRIX_H

#include <fstream>

#include "Matrix.h"

using namespace std;

class Diagonal_matrix: public Matrix {
	int* Array; //Ìàññèâà
public:
	void In_Array(int N, ifstream& ifst); //Ôóíêöèÿ ââîäà ìàññèâà
	void Out_Array(int N, ofstream& ofst); //Ôóíêöèÿ âûâîäà ìàññèâà
	int Sum(int N); //Ôóíêöèÿ ïîäñ÷åò ñóììû ýëåìåíòîâ ìàòðèöû
	void Out_Array(Key_out K_o, int N, ofstream& ofst); //Ôóíêöèÿ âûâîäà ìàññèâà
	Diagonal_matrix() {};
};

#endif //DIAGONAL_MATRIX_H