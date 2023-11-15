#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main() {

    // Vector
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    // Map
    map<int, string> m;
    m[1] = "uno";
    m[2] = "dos";
    m[3] = "tres";

    // Set
    set<string> s;
    s.insert("uno");
    s.insert("dos");
    s.insert("tres");

    // Imprimimos los elementos de cada contenedor

    cout << "Vector: ";
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    cout << "Map: ";
    for (auto it = m.begin(); it != m.end(); it++) {
        cout << it->first << " => " << it->second << " ";
    }
    cout << endl;

    cout << "Set: ";
    for (auto it = s.begin(); it != s.end(); it++) {
        cout << *it << " ";
    }
    cout << endl;

    // Eliminamos el elemento 2 del vector

    v.erase(v.begin() + 1);

    // Buscamos el elemento 3 en el map

    auto it = m.find(3);
    if (it != m.end()) {
        cout << "El elemento 3 está en el map con el valor " << it->second << endl;
    } else {
        cout << "El elemento 3 no está en el map" << endl;
    }

    return 0;
}
