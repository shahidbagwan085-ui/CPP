#include <iostream>
#include <string>
using namespace std;


class Artist {
protected:
    string name;
    int rating;
    string country;

public:
    
    virtual ~Artist() {}

   
    virtual void accept() {
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

    virtual void display() {
        cout << "\nArtist Details:\n";
        cout << "Name    : " << name << endl;
        cout << "Rating  : " << rating << endl;
        cout << "Country : " << country << endl;
    }

    
    virtual double calculateTotalIncome() = 0;

    bool isFamous() {
        return rating >= 3;
    }
};


class Painter : public Artist {
private:
    string type;
    int noOfPaintings;
    double paintingRate;

public:
    void accept() override {
        Artist::accept();
        cout << "Enter painter type (decorative/commercial): ";
        getline(cin, type);

        cout << "Enter number of paintings: ";
        cin >> noOfPaintings;

        paintingRate = 5000;
        cin.ignore();
    }

    void display() override {
        Artist::display();
        cout << "Type            : " << type << endl;
        cout << "Paintings       : " << noOfPaintings << endl;
        cout << "Rate/Painting   : " << paintingRate << endl;
    }

    double calculateTotalIncome() override {
        return noOfPaintings * paintingRate;
    }
};


class Singer : public Artist {
private:
    int noOfSongs;
    double ratePerSong;

public:
    void accept() override {
        Artist::accept();
        cout << "Enter number of songs: ";
        cin >> noOfSongs;

        ratePerSong = 5000;
        cin.ignore();
    }

    void display() override {
        Artist::display();
        cout << "Songs        : " << noOfSongs << endl;
        cout << "Rate/Song    : " << ratePerSong << endl;
    }

    double calculateTotalIncome() override {
        return noOfSongs * ratePerSong;
    }
};


int main() {
    Artist* a;

    cout << "\n===== Painter =====\n";
    a = new Painter();
    a->accept();
    a->display();
    cout << "Total Income: " << a->calculateTotalIncome() << endl;
    cout << (a->isFamous() ? "Artist is Famous\n" : "Artist is Not Famous\n");
    delete a;

    cout << "\n=============================\n";

    cout << "\n===== Singer =====\n";
    a = new Singer();
    a->accept();
    a->display();
    cout << "Total Income: " << a->calculateTotalIncome() << endl;
    cout << (a->isFamous() ? "Artist is Famous\n" : "Artist is Not Famous\n");
    delete a;

    return 0;
}

