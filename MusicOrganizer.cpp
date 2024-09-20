#include<iostream>
using namespace std;

class Artist{
    private: 
        string name;
        string birthdate;
        string nationality;

    
    public:

        Artist(){}

        Artist(string name , string birthday , string nationality) : name(name) , birthdate(birthdate) , nationality(nationality){}

        string getName(){return name;}

        void setName(string name){this->name = name;}

        string getBirthDate(){return birthdate;}

        void setBirthDate(string birthdate){this->birthdate = birthdate;}

        string getNationality(){return nationality;}

        void setNationality(string nationality){this->nationality = nationality;}
};

class Genre{
    private: 
        string name;
        string desc;

    public: 
        Genre(){}

        Genre(string name , string desc){   
            this->name = name;
            this->desc = desc;
        }


        string getName(){
            return name;
        }

        void setName(string name){
            this->name = name;
        }

        string getDesc(){
            return desc;
        }

        void setDesc(string desc){
            this->desc = desc;
        }
};



class Track{
    private:
        string title;
        int duration;
        int releaseYear;
        Artist artist;
        Genre genre;


    public:

        Track(){}

        Track(string title , int duration , int releaseYear , Artist artist , Genre genre){
            this->title = title;
            this->duration = duration;
            this->releaseYear = releaseYear;
            this->artist = artist;
            this->genre = genre;
        }

        string getTitle(){
            return title;
        }

        void setTitle(string title){
            this->title = title;
        }

        int getDuration(){
            return duration;
        }

        void setDuration(int duration){
            this->duration = duration;
        }


        int getRealeaseYear(){
            return releaseYear;
        }

        void setReleaseYear(int releaseYear){
            this->releaseYear = releaseYear;
        }


        Artist getArtist(){
            return artist;
        }

        void setArtist(Artist artist){
            this->artist = artist;
        }



        Genre getGenre(){
            return genre;
        }

        void setGenre(Genre genre){
            this->genre = genre;
        }



};



class MusicLibrary{
    private: 
        static const int max_tracks = 50;
        Track tracks[max_tracks];
        int numTracks;

    public: 

    MusicLibrary(){
        numTracks = 0;
    }


    bool addTrack(Track track){
        if(numTracks < max_tracks){
            for (int i = 0; i < numTracks; i++){
                if (tracks[i].getTitle() == track.getTitle()){
                    cout << "Track already exists in the library." << endl;
                    return false;
                }
                
            }

            tracks[numTracks++] = track;
            return true;
        }else{
            cout << "Error: Music library is full. Cannot add more Tracks." << endl;
            return false;
        }
    }

    bool removeTrackByTitle(string title){
        for (int i = 0; i < numTracks; i++){
            if (tracks[i].getTitle() == title){
                for (int j = i; j < numTracks -1; j++){
                    tracks[j] = tracks[j+1];
                }
                numTracks--;
                return true;
            }
        }

        cout << "Track with title '" << title << "' not found in the library." << endl;
        return false;
        
    }


    void displayLibrary(){
        if (numTracks == 0){
            cout << "The music library is empty." << endl;
            return;
        }


        cout << "Music Library: " << endl;

        for (int i = 0; i < numTracks; i++){
            Track track = tracks[i];

            cout << "Title: " << track.getTitle() << ", Artist: " << track.getArtist().getName() << ", Genre: " << track.getGenre().getName() << ", Year: " << track.getRealeaseYear() << ", Duration: " << track.getDuration() << endl;
        }
        
        
    }

};



int main(){
    MusicLibrary library;

    Artist artist("Arijit Singh" , "21-3-3322" , "India");
    Genre genre("Sad" , "a song on mother's love");

    Track track("O mahi" , 120 , 2000 ,artist , genre );
    Track track1("song1" , 120 , 2000 ,artist , genre );
    Track track2("song2" , 120 , 2000 ,artist , genre );
    Track track3("song3" , 120 , 2000 ,artist , genre );

    library.addTrack(track);
    library.addTrack(track1);
    library.addTrack(track2);
    library.addTrack(track3);
    

    library.displayLibrary();


    cout <<"\n\n\n";

    library.removeTrackByTitle("song");


    library.displayLibrary();
}