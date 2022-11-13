#include "Container.h"

Container::Container() : Len(0) {};

void Container::In_Container(ifstream& ifst) 
{
    while (!ifst.eof()) 
    {
        if ((Cont[Len] = Matrix::In_Matrix(ifst)) != 0) //Ñ÷èòûâàåì î÷åðåäíóþ ìàòðèöó
        {
            Len++;

            if (Len == Max_len) //Ïðîâåðêà íà ïåðåïîëíåíèå êîíòåéíåðà
            {
                break;
            }
        }
    }
}

void Container::Out_Container(ofstream& ofst) {
    ofst << "Container contents " << Len
        << " elements." << endl; //Âûâîäèì ÷èñëî ýëåìåíòîâ ìàññèâà

    //Ïðîâåðêà íà ïåðåïîëíåíèå
    if (Len == Max_len)
    {
        ofst << endl << "Conteiner is full (" << Max_len << " elemets)!" << endl <<
            "It can't accommodate more elements." << endl;
    }

    //Âûâîäèì íîìåðà ìàòðèö è ñàìè ýòè ìàòðèöû
    for (int i = 0; i < Len; i++) 
    {
        ofst << i << ": ";

        Cont[i]->Out_Array(Cont[i]->Get_N(), ofst);

        ofst << "Sum of matrix elements = " << Cont[i]->Sum(Cont[i]->Get_N()) << endl;

        Cont[i]->Out_Array(Cont[i]->Get_N(), ofst);

        ofst << "Sum of matrix elements = " << Cont[i]->Sum(Cont[i]->Get_N()) << endl;
        Cont[i]->Out_Array(Cont[i]->Get_K_o(), Cont[i]->Get_N(), ofst);

    }
}

void Container::Clear_Container() 
{
    for (int i = 0; i < Len; i++) 
    {
        delete Cont[i]; //Î÷èùàåì ïàìÿòü, âûëåëåííóþ äëÿ êàæäîé ìàòðèöû
    }
    
    Len = 0;
}


void Container::Out_Only_Two_Dim(ofstream& ofst) {
    ofst << endl << "Only Two Dimensional arrays." << endl;

    for (int i = 0; i < Len; i++)
    {
        ofst << i << ": ";
        Cont[i]->Out_Only_Two_Dim(Cont[i]->Get_N(), ofst);

void Container::Sort() {
    if (Len > 1)
    {
        for (int i = 0; i < Len - 1; i++) 
        { 
            for (int j = i + 1; j < Len; j++) 
            { 
                if (Cont[i]->Compare((*Cont[j]))) 
                { 
                    Matrix* Temp = Cont[i]; 
                    Cont[i] = Cont[j]; 
                    Cont[j] = Temp; 
                } 
            } 
        }

    }
}