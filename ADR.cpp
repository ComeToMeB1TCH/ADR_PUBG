#include <iostream>
using namespace std;

int main() {
    double ADR,S_ADR,adr_10,adr_100,adr_200,adr_300,adr_400,adr_500,damage,damage_10,damage_100,damage_200,damage_300,damage_400,damage_500;
    int matchi,matchi_10,matchi_100,matchi_200,matchi_300,matchi_400,matchi_500;
    int a;
    while(a != 1024){
    cout << "Scol'ko u vas matchey:";
    cin >> matchi;
    cout << "Scol'ko u vas ADR:";
    cin >> ADR;
    cout << "Scol'ko u hotite ADR:";
    cin >> S_ADR;
    damage = matchi * ADR;
    matchi_10 = matchi + 10;
    matchi_100 = matchi + 100;
    matchi_200 = matchi + 200;
    matchi_300 = matchi + 300;
    matchi_400 = matchi + 400;
    matchi_500 = matchi + 500;
    damage_10 = matchi_10 * S_ADR;
    adr_10 = (damage_10 - damage) / 10;
    damage_100 = matchi_100 * S_ADR;
    adr_100 = (damage_100 - damage) / 100;
    damage_200 = matchi_200 * S_ADR;
    adr_200 = (damage_200 - damage) / 200 ;
    damage_300 = matchi_300 * S_ADR;
    adr_300 = (damage_300 - damage) / 300;
    damage_400 = matchi_400 * S_ADR;
    adr_400 = (damage_400 - damage) / 400;
    damage_500 = matchi_500 * S_ADR;
    adr_500 = (damage_500 - damage) / 500;
    cout << "Za 10 matchey " << adr_10 <<" ADR+"<<endl;
    cout << "Za 100 matchey " << adr_100 <<" ADR+"<<endl;
    cout << "Za 200 matchey " << adr_200 <<" ADR+"<<endl;
    cout << "Za 300 matchey " << adr_300 <<" ADR+"<<endl;
    cout << "Za 400 matchey " << adr_400 <<" ADR+"<<endl;
    cout << "Za 500 matchey " << adr_500 <<" ADR+"<<endl;
    cout << "1024 <break>"<<endl;
    cin >>a;
    }
}
