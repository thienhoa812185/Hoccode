#include <iostream>
#include "sv.h"
using namespace std;
sv::sv(int m, string n, double d) : _mssv(m), _name(n), _dtb(d)
{
}
sv::~sv()
{
}
void sv::show()
{
    cout << "MSVS= " << this->_mssv << ",NAME=" << this->_name << ",DTB= " << this->_dtb << endl;
}
int sv::mssv()
{
    return this->_mssv;
}
void sv::dtb(double value)
{
    this->_dtb = value;
}