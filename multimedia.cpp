#include "multimedia.h"

Multimedia::Multimedia(): name(""), path(""){}

Multimedia::Multimedia(string name, string path):
    name(name), path(path) {}

Multimedia::~Multimedia()
{
    cout << "The multimedia " << this->getName() << " with Path: " << this->getPath()<< " has been deleted" << endl;
}

void Multimedia::setName(string name)
{
    this->name = name;
}

void Multimedia::setPath(string path)
{
    this->path = path;
}

string Multimedia::getName() const
{
    return name;
}

string Multimedia::getPath() const
{
    return path;
}

//This info will be replaced in case class video or other subclass is called for info
void Multimedia::info(ostream& stream) const
{
    stream << "The name is : "
           << name << endl;
    stream << "The path is : "
           << path << endl;
}
