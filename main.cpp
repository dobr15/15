////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////

#include <iostream> 
#include <map>

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");
    map <int, int>  street; 
    int n;

    cout << " Êîëè÷åñòâî äîìîâ íà óëèöå:"; 
    cin >> n;      
    cout << " Äîì è ñêîëüêî â íåì æèâåò ëþäåé: " << endl;  

    for (int i = 1; i <= n; i++) 
{
        int house, people;
        cout << i << ") Äîì ";
        cin >> house; 
        cin >> people;  
        street.insert(make_pair(house, people));
    }

    int f;
    cout << endl << "Êîëè÷åñòâî îïåðàöèé: ";
    cin >> f;

    for (int i = 1; i < f; i++) {
        cout << i << " ";
        int a; cin >> a;

        if (a == 0) { 
            int house;
            cout << "Óêàæèòå íîìåð äîìà: ";
            cin >> house;
            if (street.count(house)) {
                cout << "Êîëè÷åñòâî ëþäåé: " << street[house] << endl;
            }
            else {
                cout << "Òàêîãî äîìà íå ñóùåñòâóåò! " << endl;
            }
        }
        if (a == 1) 
        {
            int deleter;
            cout << "Êàêîé äîì óäàëèòü: ";  cin >> deleter;
            if (street.find(deleter) == street.end()) {
                cout << "Åãî íåò â ñïèñêå, âîçìîæíî óæå ðàçðóøåí :)";
            }
            else {
                street.erase(street.find(deleter));
                cout << "Îí óäàëåí! " << endl;
            }
        }

        if (a == 2) 
        { 
            int house, people;
            cout << "Êàêîé äîì äîáàâèòü: "; cin >> house;
            cout << "Êàîå êîëè÷åñòâî ëþäåé òàì ïðîæèâàåò: "; cin >> people;
            street[house] = people;
        }
    }

  system ("pause");
}


