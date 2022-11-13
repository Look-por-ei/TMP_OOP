#ifndef MATRIX_H
#define MATRIX_H

#include <fstream>

using namespace std;

class Matrix {
	int N;
public:
	static Matrix* In_Matrix(ifstream& ifst); //Функция ввода матрицы
	virtual void In_Array(int N, ifstream& ifst) = 0; //Чисто вирутальная функция ввода матрицы,
                                              //она будет определена каждого класса массива
	virtual void Out_Array(int N, ofstream& ofst) = 0; //Чисто вирутальная функция вывода матрицы,
                                              //она будет определена каждого класса массива
	int Get_N(); //Функция получения размерности массива (общее значение)
	virtual void Multi_Method(Matrix* Other, ofstream& ofst) = 0; //Функция мультиметода
	virtual void DiagonalMM(ofstream& ofst) = 0; //Функция мультиметода для диагональной матрицы
	virtual void Two_DimMM(ofstream& ofst) = 0; //Функция мультиметода для двумерного массива
protected:
	Matrix() {};
};

#endif //MATRIX_H