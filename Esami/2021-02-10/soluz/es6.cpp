#include <iostream>
#include <map>
using namespace std;

void stampaOrdineDEC(map<string, int>& parcheggi) 
{
    // https://cplusplus.com/reference/map/multimap/
    // una multimap è ordinata in ordine decrescente // no ho appena provato ed una multimap 
    // rispetto alla chiave                          //è ordinata in ordine crescente come una map normale
    multimap<int, string> _p;   
    for (auto it = parcheggi.begin(); it != parcheggi.end(); ++it) {
        _p.insert({it->second, it->first});
    }

    for (auto& p : _p) {
        cout << "Nome " << p.second << " posti " << p.first << endl;;
    }
}

int main() {

    map<string, int> parcheggi;
    parcheggi.insert({"FIERA", 200});
    parcheggi.insert({"FLAVIO", 250});
    parcheggi.insert({"FLUENTE", 200});

    stampaOrdineDEC(parcheggi);

    return 0;
}
