#include "sv.h"
class qlsv
{
private:
    sv *p;
    int _length;

public:
    qlsv();
    ~qlsv();
    void add(const sv &);
    void insert(const sv &, const int &);
    void show();
    int indexof(int);
    void update(int);
    void Delete(int);
};