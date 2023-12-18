#ifndef FILE_H_INCLUDED
#define FILE_H_INCLUDED
#include <iostream>
#define firstplayer(L) L.firstplayer
#define firstcard(L) L.firstcard
#define firstrelasi(L) L.firstrelasi
#define nextplayer(P) P->nextplayer
#define infocard(P) P->infocard
#define infoplayer(P) P->infoplayer
#define nextcard(P) (P)->nextcard
#define nextplayer_relasi(P) (P)->nextplayer_relasi
#define nextcard_relasi(P) (P)->nextcard_relasi
#define nextrelasi(P) (P)->nextrelasi

using namespace std;
struct card{
    string nama, region, efek;
    int atk, def, mp;
};
 struct player{
    string nama;
    int HP, MP;
 };

 typedef card infotype_card;
 typedef player infotype_player;
 typedef struct ELMcard *adr_card;
 typedef struct ELMplayer *adr_player;
typedef struct ELMrelasi *adr_relasi;
 struct ELMcard{
    infotype_card infocard;
    adr_card nextcard;
 };

 struct ELMplayer{
    infotype_player infoplayer;
    adr_player nextplayer;
    adr_relasi nextplayer_relasi;
 };

 struct ELMrelasi{
     adr_relasi nextrelasi;
     adr_card nextcard_relasi;
 };
 struct list_card{
    adr_card firstcard;
 };

 struct list_player{
    adr_player firstplayer;
 };

 struct list_relasi{
    adr_relasi firstrelasi;
 };

void createlistPlayer(list_player &L);
void createlistCard(list_card &L);

adr_player createElmPlayer(infotype_player x);
adr_card createElmCard(infotype_card x);
void insertLastPlayer(list_player &L, adr_player P);
void insertLastCard(list_card &L, adr_card P);
void deleteFirstPlayer(list_player &L, adr_player &P);
void deleteFirstCard(list_card &L, adr_card &P);
void setCARD(list_player &L1, list_card L2, string nama, string namacard);
void delCARD(list_player &L1, list_card &L2, string namacard);
adr_player searchPlayer(list_player L, string nama);
adr_card searchCard(list_card L,string nama);
void DATACARD(list_card &L);
void DATAPLAYER(list_player &L);
void showcard(list_player L, string nama);
void showallPlayer(list_player L);
void showallCard(list_card L);
#endif // FILE_H_INCLUDED
