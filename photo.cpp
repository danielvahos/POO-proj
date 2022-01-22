#include "photo.h"

Photo::Photo():
    latitude(0), longitude(0)
{}

// Name and Path from multimedia and the latitude and longitude for Photo
Photo::Photo(string name, string path, float latitude, float longitude):
    Multimedia(name, path), latitude(latitude), longitude(longitude)
{}

//
Photo::~Photo(){
    cout << "Photo" << endl;
    this->print(cout);
}


//Set of the parameters
void Photo::setLatitude(float latitude)
{
    this->latitude = latitude;
}

void Photo::setLongitude(float longitude)
{
    this->longitude = longitude;
}


//Get of the parameters
float Photo::getLatitude() const
{
    return this->latitude;
}

float Photo::getLongitude() const
{
    return this->longitude;
}

//Information of the photo
void Photo::info(ostream& stream) const
{
    Multimedia::info(stream);
    stream << "It's a photo " << endl;
    stream << "Longitude : " << longitude << endl;
    stream << "Latitude : " << latitude << endl;
}

//Showing photo, it can be 'gnome-open' or even 'mpv' instead of 'imagej'
void Photo::play() const
{
    system(("imagej " + this->getPath() + '&').c_str());
}
