#include <stdio.h>
#include <string.h>
struct Album
{
    char albumename[12];
    char albumeartist[20];
    char no_of_track[5];
    char albumyear[5];
} album;
//void display(struct Album al);
int main()
{
    strcpy(album.albumename, "aama");
    strcpy(album.albumeartist, "rajendra");
    strcpy(album.no_of_track, "5");
    strcpy(album.albumyear, "2020");
    display(album);
}
void display(struct Album al)
{
    puts(al.albumename);
    puts(al.albumeartist);
    puts(al.no_of_track);
    puts(al.albumyear);
}