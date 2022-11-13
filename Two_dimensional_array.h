#ifndef TWO_DIMENSIONAL_ARRAY_H
#define TWO_DIMENSIONAL_ARRAY_H

#include <fstream>

#include "Matrix.h"

using namespace std;

class Two_dimensional_array: public Matrix {
	int** Array; //Массив
public:
	void In_Array(int N, ifstream& ifst);  //Функция ввода массива
	void Out_Array(int N, ofstream& ofst); //Функция вывода массива
	void Multi_Method(Matrix* Other, ofstream& ofst); //Функция мультиметода
	void Two_DimMM(ofstream& ofst); //Функция мультиметода для двумерного массива
	void DiagonalMM(ofstream& ofst); //Функция мультиметода для диагональной матрицы
	Two_dimensional_array() {};
};
#endif //TWO_DIMENSIONAL_ARRAY_H