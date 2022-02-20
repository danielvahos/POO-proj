#ifndef MANAGER_H
#define MANAGER_H

#include "multimedia.h"
#include "groupe.h"
#include "photo.h"
#include "video.h"
#include "film.h"
#include <string>
#include <memory>
#include <map>

using namespace std;
using namespace cppu;

class Manager
{

private:
    map<string,shared_ptr<Multimedia>> multimediaMap;
    map<string,shared_ptr<Groupe>> groupeMap;

public:
    Manager();

    //Creation
    shared_ptr<Photo> createPhoto(string name, string pathname, float latitude, float longitude);

    shared_ptr<Video> createVideo(string name, string pathname, int duration);

    shared_ptr<Film> createFilm(string name, string pathname, int duration, int chaptersNumber, int* chaptersDurations);

    Groupe createGroup(const string groupname);

    
    //Groupe createGroup(const string groupname,initializer_list<shared_ptr<Multimedia>> il);

    //Search (multimedia and groupe)


    void playMedia(string, ostream& stream = cout) const;




    //Information of each one
    void describeMedia(string, ostream& stream = cout) const;
    void describeGroup(string, ostream& stream = cout) const;

    void listGroups(ostream& stream = cout) const;
    void listMedia(ostream& stream = cout) const;
};
#endif