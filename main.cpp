//Lab Assignment #2-P2
//Sümeyra Karsavran
//24.10.2021

//kelimedeki harflerin büyüklüklerini tersine çevirme
#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    char character[30];
    int i;
    string a= "Sorry, it is not a letter.";


    cout << "Please enter a character: ";
    cin >> character;

    for (i = 0; i <strlen(character); i++) //karakterin ilk harfinden başla, son karakter 10 dan küçükse 1,1 arttırarak ilerle
    {
        if (int(character[i]) >= 97 && int(character[i]) <= 122) //97 büyük A'dır ASCII'da yani büyük harfler 97den başlar, küçükler 65den
        {
            character[i] = char(int(character[i] - 32));
            cout<<character[i];
            
        }
        else if(int(character[i]) >= 65 && int(character[i]) <= 90)
        {
            character[i] = char(int(character[i] + 32));
            cout<<character[i];
        }
        else 
        {
            cout<< " Sorry, it is not a letter.";
        }

    }

    
    return 0;




}