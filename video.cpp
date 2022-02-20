#include "video.h"

//Defines video with its parameters
Video::Video(string name, string path, int duration):
    Multimedia(name, path), duration(duration)
{}

//Shows video
Video::~Video(){
    cout << "Video" << endl;
    this->print(cout);
}

//Sets the duration of the video
void Video::setDuration(int duration)
{
    this->duration = duration;
}

//Gets the duration of the video
int Video::getDuration() const
{
    return this->duration;
}

//Shows main information about the file
void Video::info(ostream& stream) const
{
    Multimedia::info(stream);
    stream << "It's a video " << endl;
    stream << "Duration : " << duration << endl;
}

//Plays the video
void Video::play() const override
{
    system(("mpv " + this->getPath() + '&').c_str());
}
