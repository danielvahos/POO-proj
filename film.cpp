#include "film.h"


Film::Film(string name, string path, int duration, int chapternum, int* chaptersArray):
    Video(name, path, duration)
{
    this->chapternum=chapternum;
    this->chapterduration = new int[chapternum];
    for (int i = 0; i < chapternum; i++)
    {
        chapterduration[i] = chaptersArray[i];
    }
}

Film::~Film()
{
    delete chapterduration;
}


void Film::info(ostream& stream) const
{
    Video::info(stream);
    stream << "Information of chapters: " << endl;
    for (int i=0; i < this->chapternum; i++)
    {
        stream << "Chapter " << i+1 << " which duration is " << this->chapterduration[i] << " seconds " << endl;
    }
}


const int* Film::getChapterduration() const
{
    return chapterduration;
}


int Film::getChapternum() const
{
    return this->chapternum;
}

void Film::setChapterduration(const int* chapterduration, int chapternum)
{
    this->chapternum = chapternum;
    delete[] this->chapterduration;
    this->chapterduration = new int[chapternum];

    for(int i = 0; i < chapternum; i++) {
        this->chapterduration[i] = chapterduration[i];
    }
}

// Step 7

Film::Film(const Film& from) : Video(from)
{
    for (int i = 0; i < from.chapternum; i++)
    {
        chapterduration[i] = from.chapterduration[i];
    }
    chapternum = from.chapternum;
}



Film& Film::operator=(const Film& from)
{
    Video::operator=(from);
    if (chapterduration && from.chapterduration)
        *chapterduration = *(from.chapterduration);
    else
    {
        delete chapterduration;
        for (int i = 0; i < from.chapternum; i++)
        {
            chapterduration[i] = from.chapterduration[i];
        }
    }
    chapternum = from.chapternum;
    return *this;
}

//--------------------------------------------
