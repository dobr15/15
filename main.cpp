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

    cout << " Количество домов на улице:"; 
    cin >> n;      
    cout << " Дом и сколько в нем живет людей: " << endl;  

    for (int i = 1; i <= n; i++) 
{
        int house, people;
        cout << i << ") Дом ";
        cin >> house; 
        cin >> people;  
        street.insert(make_pair(house, people));
    }

    int f;
    cout << endl << "Количество операций: ";
    cin >> f;

    for (int i = 1; i < f; i++) {
        cout << i << " ";
        int a; cin >> a;

        if (a == 0) { 
            int house;
            cout << "Укажите номер дома: ";
            cin >> house;
            if (street.count(house)) {
                cout << "Количество людей: " << street[house] << endl;
            }
            else {
                cout << "Такого дома не существует! " << endl;
            }
        }
        if (a == 1) 
        {
            int deleter;
            cout << "Какой дом удалить: ";  cin >> deleter;
            if (street.find(deleter) == street.end()) {
                cout << "Его нет в списке, возможно уже разрушен :)";
            }
            else {
                street.erase(street.find(deleter));
                cout << "Он удален! " << endl;
            }
        }

        if (a == 2) 
        { 
            int house, people;
            cout << "Какой дом добавить: "; cin >> house;
            cout << "Какое количество людей там проживает: "; cin >> people;
            street[house] = people;
        }
    }

  system ("pause");
}


