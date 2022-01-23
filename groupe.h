#ifndef GROUPE_H
#define GROUPE_H
#include "multimedia.h"
#include <list>
#include <string>
#include <memory>

using namespace std;

class Groupe : public list<shared_ptr<Multimedia>>
{

private:
    string groupname;
public:

    Groupe();
    Groupe(const string groupname);
    virtual ~Groupe();
    void setGroupName(string groupname);
    string getGroupName() const;
    void info(ostream& stream = cout) const;
};
#endif
