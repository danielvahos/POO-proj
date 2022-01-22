#ifndef PHOTO_H
#define PHOTO_H

#include "multimedia.h"
using namespace std;

class Photo : public Multimedia
{
private:
    float latitude;
    float longitude;
public:
    Photo();
    Photo(string name, string path, float latitude, float longitude);

    virtual ~Photo();

    void setLatitude(float latitude);
    void setLongitude(float longitude);

    float getLatitude() const;
    float getLongitude() const;

    void info(ostream& stream = cout) const override;
    void play() const override;

};

#endif
