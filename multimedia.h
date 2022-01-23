#ifndef MULTIMEDIA_H
#define MULTIMEDIA_H

#include <string>
#include <iostream>
#include <cstring>

using namespace std;
class Multimedia
{
protected:
    string name;
    string path;

public:
    Multimedia();
    Multimedia(string name, string path);

    virtual ~Multimedia();

    // Functions for setting name and path
    void setName(string name);
    void setPath(string path);

    //Functions for getting name and path
    string getName() const;
    string getPath() const;

    virtual void info(ostream& stream = cout) const;
    virtual void play() {};
};

#endif
