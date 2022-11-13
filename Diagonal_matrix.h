#ifndef DIAGONAL_MATRIX_H
#define DIAGONAL_MATRIX_H

#include <fstream>

#include "Matrix.h"

using namespace std;

class Diagonal_matrix: public Matrix {
	int* Array; //Массива
public:
	void In_Array(int N, ifstream& ifst); //Функция ввода массива
	void Out_Array(int N, ofstream& ofst); //Функция вывода массива
	void Multi_Method(Matrix* Other, ofstream& ofst); //Функция мультиметода
	void DiagonalMM(ofstream& ofst); //Функция мультиметода для диагональной матрицы
	void Two_DimMM(ofstream& ofst); //Функция мультиметода для двумерного массива
	Diagonal_matrix() {};
};

#endif //DIAGONAL_MATRIX_H