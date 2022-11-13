#include "Matrix.h"
#include "Two_dimensional_array.h"
#include "Diagonal_matrix.h"
#include "Triangular_matrix.h"

int Matrix::Get_N()
{
    return N;
}

Key_out Matrix::Get_K_o()
{
    return K_o;
}

Matrix* Matrix::In_Matrix(ifstream& ifst) {
    Matrix* M; //Ñîçäàåì óêàçàòåëü íà ìàòðèöó
    int K;

    ifst >> K; //Ñ÷èòûâàåì èäåíòèôèêàòîð ìàòðèöû

    if (K == 1)
    {
        M = new Two_dimensional_array; //Ñîçäàåì äâóìåðíûé ìàññèâ

        int Key_out = 0;

        ifst >> Key_out;

        if (Key_out == 1)
        {
            M->K_o= BY_LINE;
        }
        else if (Key_out == 2)
        {
            M->K_o = BY_COLUMN;
        }
        else if (Key_out == 3)
        {
            M->K_o = ONE_DIMENSIONAL;
        }

        ifst >> M->N; //C÷èòûâàåì ðàçìåðíîñòü ìàññèâà
    }
    else if (K == 2)
    {
        M = new Diagonal_matrix; //Ñîçäàåì äèàãîíàëüíóþ ìàòðèöó

        int Key_out = 0;

        ifst >> Key_out;

        if (Key_out == 1)
        {
            M->K_o = BY_LINE;
        }
        else if (Key_out == 2)
        {
            M->K_o = BY_COLUMN;
        }
        else if (Key_out == 3)
        {
            M->K_o = ONE_DIMENSIONAL;
        }

        ifst >> M->N; //C÷èòûâàåì ðàçìåðíîñòü ìàññèâà
    }
    else if (K == 3)
    {
        M = new Triangular_matrix; //Ñîçäàåì òðåóãîëüíóþ ìàòðèöó

        ifst >> M->N; //C÷èòûâàåì ðàçìåðíîñòü ìàññèâà
    }
    else
    {
        return 0;
    }

    M->In_Array(M->N, ifst); //Ñ÷èòûâàåì ýëåìåíòû ìàòðèöû
    
    return M;
}


void Matrix::Out_Only_Two_Dim(int N, ofstream& ofst) {
    ofst << endl;

bool Matrix::Compare(Matrix& Other)
{
    return Sum(N) > Other.Sum(Other.N);

}