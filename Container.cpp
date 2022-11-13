#include "Container.h"

Container::Container() : Len(0) {};

void Container::In_Container(ifstream& ifst) 
{
    while (!ifst.eof()) 
    {
        if ((Cont[Len] = Matrix::In_Matrix(ifst)) != 0) //Считываем очередную матрицу
        {
            Len++;

            if (Len == Max_len) //Проверка на переполнение контейнера
            {
                break;
            }
        }
    }
}

void Container::Out_Container(ofstream& ofst) {
    ofst << "Container contents " << Len
        << " elements." << endl; //Выводим число элементов массива

    //Проверка на переполнение
    if (Len == Max_len)
    {
        ofst << endl << "Conteiner is full (" << Max_len << " elemets)!" << endl <<
            "It can't accommodate more elements." << endl;
    }

    //Выводим номера матриц и сами эти матрицы
    for (int i = 0; i < Len; i++) 
    {
        ofst << i << ": ";
        Cont[i]->Out_Array(Cont[i]->Get_N(), ofst);
    }
}

void Container::Clear_Container() 
{
    for (int i = 0; i < Len; i++) 
    {
        delete Cont[i]; //Очищаем память, вылеленную для каждой матрицы
    }
    
    Len = 0;
}

void Container::Multi_Method_Container(ofstream& ofst) {
    ofst << "Multimethod." << endl; 
    
    for (int i = 0; i < Len - 1; i++) 
    { 
        for (int j = i + 1; j < Len; j++) 
        { 
            Cont[i]->Multi_Method(Cont[j], ofst); 
            Cont[i]->Out_Array(Cont[i]->Get_N(), ofst); 
            Cont[j]->Out_Array(Cont[j]->Get_N(), ofst); 
        } 
    }
}