//
// main.cpp
// Created on 21/10/2018
//

#include <iostream>
#include <stdio.h>

#include "multimedia.h"
#include "photo.h"
#include "video.h"
#include "film.h"

using namespace std;

int main(int argc, const char* argv[])
{
    // Step 5

    int numfiles = 2; // quantity of multimedia files
    Multimedia ** medialist = new Multimedia *[numfiles];
    medialist[0] = new Photo("Hobbit1", "./hobbit1.jpg",180, 180);
    medialist[1] = new Video("Hobbit video", "./Hobbitvideo.mp4",15);

    for(int i = 0; i < numfiles; i++) { //cycle 'for' in order to play all multimedia files
        medialist[i]-> play();
	}
    //-----------------------------------------------

    //Step 6, Films
	int chapterDurations[]= {11, 12};
	Film *film = new Film("Hobbit", "./Hobbitvideo.mp4", 10, 12,chapterDurations);
	film->info(cout);
	int newChapterDurations[]= {11, 5, 12};
	film->setChapterduration(newChapterDurations,3);
	film->info(cout);



    /*
    std::cout << "Hello brave new world" << std::endl;
    return 0;
    */
}
