#include <iostream>
#include <string>
using namespace std;


class Artist {
protected:
    string name;
    int rating;      
    
    string country;

public:
    void acceptArtistData() {
        cout << "Enter artist name: ";
        getline(cin, name);

        do {
            cout << "Enter rating (1 to 4): ";
            cin >> rating;
            if (rating < 1 || rating > 4)
                cout << "Invalid rating! Try again.\n";
        } while (rating < 1 || rating > 4);

        cin.ignore();   
        cout << "Enter country: ";
        getline(cin, country);
    }

    void printArtistData() {
        cout << "\nArtist Details:\n";
        cout << "Name    : " << name << endl;
        cout << "Rating  : " << rating << endl;
        cout << "Country : " << country << endl;
    }

  
    virtual double calculateTotalIncome() {
        return 0;
    }

    bool isFamous() {
        return (rating >= 3);
    }
};


class Painter : public Artist {
private:
    string type;          
    float paintingRate;  
    int noOfPaintings;

public:
    void acceptPainterData() {
        acceptArtistData();
        cout << "Enter painter type (decorative/commercial): ";
        getline(cin, type);

        cout << "Enter number of paintings: ";
        cin >> noOfPaintings;

        paintingRate = 5000;
        cin.ignore();   
    }

    void printPainterData() {
        printArtistData();
        cout << "Type             : " << type << endl;
        cout << "No of Paintings  : " << noOfPaintings << endl;
        cout << "Painting Rate   : " << paintingRate << endl;
    }

    double calculateTotalIncome() override {
        return noOfPaintings * paintingRate;
    }
};


class Singer : public Artist {
private:
    int noOfSongs;
    float ratePerSong;   

public:
    void acceptSingerData() {
        cin.ignore();    
        acceptArtistData();

        cout << "Enter number of songs: ";
        cin >> noOfSongs;

        ratePerSong = 5000;
        cin.ignore();  
    }

    void printSingerData() {
        printArtistData();
        cout << "No of Songs  : " << noOfSongs << endl;
        cout << "Rate/Song   : " << ratePerSong << endl;
    }

    double calculateTotalIncome() override {
        return noOfSongs * ratePerSong;
    }
};


int main() {

    Artist* a;   

    cout << "\n=== Painter Details ===\n";
    Painter p;
    a = &p;      
    p.acceptPainterData();
    p.printPainterData();

    cout << "Total Income: " << a->calculateTotalIncome() << endl;
    cout << (a->isFamous() ? "Artist is Famous\n" : "Artist is Not Famous\n");

    cout << "\n--------------------------\n";

    cout << "\n=== Singer Details ===\n";
    Singer s;
    a = &s;      
    s.acceptSingerData();
    s.printSingerData();

    cout << "Total Income: " << a->calculateTotalIncome() << endl;
    cout << (a->isFamous() ? "Artist is Famous\n" : "Artist is Not Famous\n");

    return 0;
}

