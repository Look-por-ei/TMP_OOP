#ifndef MATRIX_H
#define MATRIX_H

#include <fstream>

using namespace std;

//Способ вывода матрицы
enum Key_out {
	BY_LINE, //По строкам
	BY_COLUMN, //По столбцам
	ONE_DIMENSIONAL //В виде одномерного массива
};

class Matrix {
	int N; //Размерность матрицы
	Key_out K_o;
public:
	static Matrix* In_Matrix(ifstream& ifst); //Функция ввода матрицы
	virtual void In_Array(int N, ifstream& ifst) = 0; //Чисто вирутальная функция ввода матрицы,
                                              //она будет определена каждого класса массива
	virtual void Out_Array(Key_out K_o, int N, ofstream& ofst) = 0; //Чисто вирутальная функция вывода матрицы,
                                              //она будет определена каждого класса массива
	int Get_N(); //Функция получения размерности массива (общее значение)


	virtual int Sum(int N) = 0;
	bool Compare(Matrix& Other);

	virtual int Sum(int N) = 0;
	Key_out Get_K_o(); //Функция получения способа вывода матрицы
protected:
	Matrix() {};
};

#endif //MATRIX_H