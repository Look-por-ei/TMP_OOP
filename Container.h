#ifndef CONTAINER_H
#define CONTAINER_H

#include "Matrix.h"

class Container {
    enum {
        Max_len = 100
    }; // Ìàêñèìàëüíàÿ äëèíà êîíòåéíåðà

    int Len; // Òåêóùàÿ äëèíà
    Matrix* Cont[Max_len]; //Ìàññèâ ìàòðèö
public:
    void In_Container(ifstream& ifst); //Ôóíêöèÿ ââîäà ýëåìåíòîâ â êîíòåéíåð
    void Out_Container(ofstream& ofst); //Ôóíêöèÿ âûâîäà ýëåìåíòîâ êîíòåéíåðà
    void Clear_Container(); //Ôóíêöèÿ î÷èñòêè êîíòåéíåðà

    void Out_Only_Two_Dim(ofstream& ofst); //Ôóíêöèÿ âûâîäà òîëüêî îáû÷íîãî äâóìåðíîãî ìàññèâà

    void Sort(); //Ôóíêöèÿ ñîðòèðîâêè êîíòåéíåðà

    Container(); //Êîíñòðóêòîð
    ~Container() { Clear_Container(); } //Äåñòðóêòîð êîíòåéíåðà
};
#endif //CONTAINER_H