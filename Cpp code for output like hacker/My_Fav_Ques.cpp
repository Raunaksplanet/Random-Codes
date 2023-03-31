#include <bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    string Word;
    cout << "Enter a string: ";
    getline (cin, Word);
    string Letters = "abcdefghijklmnopqrstuvwxyz ", target_word;
    int Counter, random_number;

    while (target_word != Word)
    {
        random_number = rand() % Letters.length();
        if (Letters[random_number] == Word[Counter])
        {
            target_word += Word[Counter];
            Counter++;
            this_thread::sleep_for(chrono::duration<double, std::ratio<1, 2>>(0.1));
            cout << target_word << endl;
        }
        else
        {
            this_thread::sleep_for(chrono::duration<double, std::ratio<1, 2>>(0.1));
            cout << target_word + Letters[random_number] << endl;
        }
    }
}
