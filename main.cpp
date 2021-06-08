#include <iostream>
#include <cstring>

using namespace std;

class RepString{

public:
    void setZnaki(string ln){
        lancuchZnakowy = ln;
    }


    string setLimitString(int firstLimit, int secondLimit)
    {
        return (lancuchZnakowy = lancuchZnakowy.substr(firstLimit, secondLimit));
    }



    void stringtoCharArray()
    {
        int n = lancuchZnakowy.length();
        char char_array[n+1];

        strcpy(char_array, lancuchZnakowy.c_str());
        for(int i = 0; i < n; i++)
        {
            cout << char_array[i];
            this->char_array[i] = char_array[i];
        }


    }

    void checkAnyChar(char c)
    {
        int length = strlen(char_array);
        int x = 0;
        for(int i = 0; i < length; ++i)
        {
            if(char_array[i] == c)
            {
                printf ("\n1: '%c' rowna sie w pozycji = %d",c,i);
                ++x;
            }
            if(length == x)
            {
                cout << "\n====Wszystkie znaki rownaja sie podanemu znakowi====";
            }

        }
        printf("\n2: '%c' wystepuje %d razy", c, x);
    }

    void reverseCharArray()
    {
        int x = -1;
        int length = strlen(char_array);
        char reversed_array[length];
        for(int i = length;i >= 0; --i)
        {
            reversed_array[i] = char_array[x];
            x++;
        }

        printf("\n3: ");
        for(int i = 0; i < length; ++i)
        {
            cout << reversed_array[i];
        }
    }

    void representCharArray()
    {
        printf("\n5: ");
        int length = strlen(char_array);
        for(int i = 0; i < length; i++) {
            cout << char_array[i];
        }
    }

    
private:
    string lancuchZnakowy;
    char char_array[];
};



int main() {
    RepString lancuchZnakowy;
    lancuchZnakowy.setZnaki("amogus");
    lancuchZnakowy.setLimitString(2,4); //Podpunkt 4 - limit lancucha znakowego
    lancuchZnakowy.stringtoCharArray();
    lancuchZnakowy.checkAnyChar('z');
    lancuchZnakowy.reverseCharArray();
    lancuchZnakowy.representCharArray();

    return 0;
}
