#include "qlsv.h"
#include <iostream>
using namespace std;
int main()
{
    qlsv db;
    sv s1(1, "NVA", 1.1);
    sv s2(2, "NVB", 2.1);
    sv s3(3, "NVC", 3.1);
    sv s4(4, "NVD", 4.1);
    db.add(s1);
    db.add(s2);
    db.add(s3);
    db.show();
    return 0;
}






#include "qlsv.h"
qlsv::qlsv()
{
    this->head = nullptr;
    this->tail = nullptr;
}
qlsv::~qlsv()
{
}
void qlsv::add(const sv &s)
{
    sv *newsv = new sv;
    *newsv = s;
    if (this->head == nullptr)
    {
        this->head = this->tail = newsv;
    }
    else
    {
        this->tail->next = newsv;
        newsv->prev = this->tail;
        this->tail = newsv;
    }
}
void qlsv::show()
{
    sv *p = this->head;
    while (p != nullptr)
    {
        cout << p->getname() << endl;
        p = p->next;
    }
}
