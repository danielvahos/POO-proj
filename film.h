#ifndef FILM_H
#define FILM_H
#include "video.h"

class Film : public Video
{
private:
    int chapternum;
    int* chapterduration;
public:

    Film(string name, string path, int duration, int chapternum, int* chapterduration);

    virtual ~Film();
    void info(ostream& stream = cout) const override;
    int * getChapterduration() const;
    int getChapternum() const;
    void setChapterduration(const int* chapterduration,int chapternum);
};

#endif
