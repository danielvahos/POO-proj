#include "groupe.h"

Groupe::Groupe()
{}

Groupe::Groupe(const string groupname):
    groupname(groupname)
{}

Groupe::~Groupe()
{
    cout << "The group " << this->getGroupName() << " has been deleted " << endl;
}

//Set the  name of the group
void Groupe::setGroupName(string groupname)
{
    this->groupname = groupname;
}

//Get the  name of the group
string Groupe::getGroupName() const
{
    return this->groupname;
}

void Groupe::info(ostream& stream) const
{
    stream << "Information of the group, Name : " << this->getGroupName() << endl;
    for (auto it = this-> begin(); it != this-> end(); it++)
    {
        (*it)->info(stream);
    }
}