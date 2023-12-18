#include "FILE.h"
#include <iostream>

using namespace std;

void DATACARD(list_card &L){
    infotype_card C;
    C.nama = "GAREN";
    C.region = "DEMACIA";
    C.atk = 5;
    C.def = 5;
    C.mp = 5;
    insertLastCard(L, createElmCard(C));
    C.nama = "FLEETFEATHER_TRACKER";
    C.region = "DEMACIA";
    C.atk = 2;
    C.def = 1;
    C.mp = 1;
    insertLastCard(L, createElmCard(C));
    C.nama = "BRIGHTSTEEL_PROTECTOR";
    C.region = "DEMACIA";
    C.atk = 2;
    C.def = 1;
    C.mp = 2;
    insertLastCard(L, createElmCard(C));
    C.nama = "LAURENT_DUELIST";
    C.region = "DEMACIA";
    C.atk = 2;
    C.def = 2;
    C.mp = 2;
    insertLastCard(L, createElmCard(C));
    C.nama = "SCREECHING_DRAGON";
    C.region = "DEMACIA";
    C.atk = 4;
    C.def = 5;
    C.mp = 5;
    insertLastCard(L, createElmCard(C));
    C.nama = "KADREGRIN_THE_RUINED";
    C.region = "DEMACIA";
    C.atk = 6;
    C.def = 6;
    C.mp = 6;
    insertLastCard(L, createElmCard(C));
}

void DATAPLAYER(list_player &L){
    infotype_player P;
    P.nama = "BOT01";
    insertLastPlayer(L, createElmPlayer(P));
    P.nama = "BOT02";
    insertLastPlayer(L, createElmPlayer(P));
    P.nama = "BOT03";
    insertLastPlayer(L, createElmPlayer(P));
}
