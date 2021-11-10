#include "qlsv.h"
#include <iostream>
using namespace std;
qlsv::qlsv()
{
    this->_length = 0;
    this->p = nullptr;
}
qlsv::~qlsv()
{
    delete[] this->p;
}
void qlsv::add(const sv &s)
{
    if (this->_length == 0)
    {
        this->p = new sv[this->_length + 1];
        *(this->p + this->_length) = s; 
    }
    else
    {
        sv *temp = new sv[this->_length];
        for (int i = 0; i < this->_length; i++)
            *(temp + i) = *(this->p + i);
        delete[] this->p;
        this->p = new sv[this->_length + 1];
        for (int i = 0; i < this->_length; i++)
            *(this->p + i) = *(temp + i);
        delete[] temp;
        *(this->p + this->_length) = s;
    }
    this->_length++;
}
void qlsv::show()
{
    for (int i = 0; i < this->_length; i++)
        (this->p + i)->show();
}
void qlsv::insert(const sv &s, const int &index)
{
}
int qlsv::indexof(int m)
{
    int index = -1;
    for (int i = 0; i < this->_length; i++)
    {
        if ((this->p + i)->mssv() == m)
        {
            index = i;
            break;
        }
    }
    return index;
}
void qlsv::update(int m)
{
    int index = indexof(m);
    if (index >= 0)
    {
        double d;
        cout << "new dtb= ";
        cin >> d;
        (this->p + index)->dtb(d);
    }
}
void qlsv::Delete(int m)
{
    int index = indexof(m);
    if (index >= 0)
    {
        if (this->_length == 1)
        {
            delete[] this->p;
            this->p = nullptr;
        }
        else
        {
            sv *temp = new sv[this->_length];
            for (int i = 0; i < this->_length; i++)
                *(temp + i) = *(this->p + i);
            delete[] this->p;
            this->p = new sv[this->_length - 1];
            for (int i = 0; i < this->_length - 1; i++)
            {
                if (i < index)
                    *(this->p + i) = *(temp + i);
                else
                    *(this->p + i) = *(temp + i + 1);
            }
            delete[] temp;
        }
        this->_length--;
    }
}