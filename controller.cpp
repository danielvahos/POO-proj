#include "manager.h"

Manager::Manager()
{

}

//Creation

shared_ptr<Photo> Manager::createPhoto(string name, string pathname,float latitude, float longitude)
{
    shared_ptr<Photo> photo_shPtr = make_shared<Photo>(name,pathname,latitude,longitude);
    this->multimediaMap.insert(pair< string, shared_ptr<Photo> >(name,photo_shPtr));
    return photo_shPtr;
}


shared_ptr<Video> Manager::createVideo(string name, string pathname, int duration)
{
    shared_ptr<Video> video_shPtr = make_shared<Video>(name, pathname, duration);
    this->multimediaMap.insert(pair< string, shared_ptr<Video> >(name,video_shPtr));
    return video_shPtr;
}


shared_ptr<Film> Manager::createFilm(string name, string pathname, int duration, int chaptersNumber, int* chaptersDurations)
{
    shared_ptr<Film> film_shPtr = make_shared<Film>(name, pathname, duration, chaptersNumber, chaptersDurations);
    multimediaMap.insert(pair< string, shared_ptr<Film> >(name,film_shPtr));
    return film_shPtr;
}

Groupe Manager::createGroup(const string groupname)
{
    shared_ptr<Groupe> grp_shPtr = make_shared<Groupe>(groupname);
    this->groupeMap.insert(pair< string, shared_ptr<Groupe> >(groupname,grp_shPtr));
    return *(grp_shPtr.get());
}



//Information for groups and medias

void Manager::describeMedia(string nameIndex, ostream& stream) const
{
    if ( this->multimediaMap.count(nameIndex) )
    {
        this->multimediaMap.at(nameIndex)->describe(stream);
    }
    else
    {
        stream << "ERROR: Requested media doesn't exist !" << endl;
    }
}

void Manager::describeGroup(string nameIndex, ostream& stream) const
{
    if ( this->groupeMap.count(nameIndex) )
    {
        this->groupeMap.at(nameIndex)->describe(stream);
    }
    else
    {
        stream << "ERROR: Requested group (" << nameIndex << ") doesn't exist !" << endl;
    }
}



//Play Media

void Manager::playMedia(string nameIndex, ostream& stream) const
{
    if ( this->multimediaMap.count(nameIndex) )
    {
        stream << "Playing media : " << nameIndex << "." << endl;
        this->multimediaMap.at(nameIndex)->play();
    }
    else
    {
        stream << "ERROR: Requested media (" << nameIndex << ") doesn't exist !" << endl;
    }
}




















void Manager::listGroups(ostream& stream) const
{
    for(auto it = this->groupeMap.begin(); it != this->groupeMap.end(); ++it) {
        stream << it->first << ";";
    }
    stream << "\n";
}

void Manager::listMedia(ostream& stream) const
{
    for(auto it = this->multimediaMap.begin(); it != this->multimediaMap.end(); ++it) {
        stream << it->first << ";";
    }
    stream << "\n";
}