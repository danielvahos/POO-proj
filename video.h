#ifndef VIDEO_H
#define VIDEO_H

#include "multimedia.h"

using namespace std;

class Video : public Multimedia
{
protected:
    int duration;

public:
    Video(string name, string pathname, int duration);
    virtual ~Video();
    void setDuration(int duration);
    int getDuration() const;
    virtual void info(ostream& stream = cout) const override;
    void play() const override;
};

#endif