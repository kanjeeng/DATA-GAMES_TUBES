#include <iostream>
#include "FILE.h"
using namespace std;

int main()
{
    list_card L2;
    list_player L1;
    createlistCard(L2);
    createlistPlayer(L1);
    DATACARD(L2);
    DATAPLAYER(L1);
    showallCard(L2);
    cout << endl;
    showallPlayer(L1);
    cout << endl;
    string namaplayer, namakartu;
    cout << "USER : ";
    cin >> namaplayer;
    for(int i = 1; i <= 6; i++){
        cout << "CARD "<< i <<" : ";
        cin >> namakartu;
        setCARD(L1, L2, namaplayer, namakartu);
    }
    showcard(L1, "BOT01");
    return 0;
}
