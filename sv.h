#include <string>
using namespace std;
class sv
{
private:
    int _mssv;
    string _name;
    double _dtb;

public:
    sv(int = 0, string = "", double = 0.0);
    ~sv();
    void show();
    int mssv();
    void dtb(double);
};