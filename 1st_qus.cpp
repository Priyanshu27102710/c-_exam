#include <iostream>

using namespace std;

class Movie
{
private:

    string title;
    string genre;
    int releasedYear;

public:
    
    void getData()
    {
        cout << "Enter Movie Title = ";
        cin.ignore();
        getline(cin, title);

        cout << "Enter Genre = ";
        getline(cin, genre);

        cout << "Enter Released Year = ";
        cin >> releasedYear;
    }

    
    void displayData()
    {
        cout << "\nMovie Title   = " << title;
        cout << "\nGenre         = " << genre;
        cout << "\nReleased Year = " << releasedYear << endl;
    }
};

int main()
{
    int n;

    cout << "Enter number of movies= ";
    
    cin >> n;

    Movie movies[n];  
    
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of Movie " << i + 1 << endl;

        movies[i].getData();
    }

    cout << "\n Movie Details\n";

    for (int i = 0; i < n; i++)
    {
        cout << "\nMovie " << i + 1 << endl;

        movies[i].displayData();
    }

    cout << "\nall movie details are dispayed successfully..."<<endl;

    return 0;
}