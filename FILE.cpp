#include <iostream>
#include "FILE.h"

using namespace std;

 void createlistPlayer(list_player &L){
    firstplayer(L) = NULL;
 }
 void createlistCard(list_card &L){
    firstcard(L) = NULL;
 }
adr_player createElmPlayer(infotype_player x){
    adr_player P;
    P = new ELMplayer;
    infoplayer(P) = x;
    nextplayer(P) = NULL;
    nextplayer_relasi(P) = NULL;
    return P;
 }
adr_card createElmCard(infotype_card x){
    adr_card P;
    P = new ELMcard;
    infocard(P) = x;
    nextcard(P) = NULL;
    return P;
 }
 void insertLastPlayer(list_player &L, adr_player P){
    adr_player Q;
    if(firstplayer(L) == NULL){
        firstplayer(L) = P;
    }else{
        Q = firstplayer(L);
        while(nextplayer(Q) != NULL){
            Q = nextplayer(Q);
        }
        nextplayer(Q) = P;
    }
 }
 void insertLastCard(list_card &L, adr_card P){
    adr_card Q;
    if(firstcard(L) == NULL){
        firstcard(L) = P;
    }else{
        Q = firstcard(L);
        while(nextcard(Q) != NULL){
            Q = nextcard(Q);
        }
        nextcard(Q) = P;
    }
 }

 void insertLastRelasi(list_relasi &L, adr_relasi P){
    adr_relasi Q;
    if(firstrelasi(L) == NULL){
        firstrelasi(L) = P;
    }else{
        Q = firstrelasi(L);
        while(nextrelasi(Q) != NULL){
            Q = nextrelasi(Q);
        }
        nextrelasi(Q) = P;
    }
 }

void setCARD(list_player &L1, list_card L2, string nama, string namacard){
    adr_player P;
    adr_card C;
    P = searchPlayer(L1, nama);
    C = searchCard(L2 ,namacard);

    if (P == NULL && C == NULL){
       cout<<"PLAYER & CARD TIDAK DITEMUKAN" << endl;
    }else if (P != NULL && C == NULL){
        cout<<"KARTU TIDAK DITEMUKAN" << endl;
    }else if (P == NULL && C != NULL){
         cout<<"Player TIDAK DITEMUKAN" << endl;
    }else{
        adr_relasi Relasi = new ELMrelasi;
        nextrelasi(Relasi) = NULL;
        nextcard_relasi(Relasi) = NULL;
        if (nextplayer_relasi(P) == NULL){
            nextplayer_relasi(P) = Relasi;
            nextcard_relasi(Relasi) = C;
        }else{
            adr_relasi Relasi1 = nextplayer_relasi(P);
            while(nextrelasi(Relasi1) != NULL ){
                Relasi1 = nextrelasi(Relasi1);
            }
            nextrelasi(Relasi1) = Relasi;
            nextcard_relasi(Relasi) = C;
        }
    }
}
 void deleteFirstPlayer(list_player &L, adr_player &P){
    P = firstplayer(L);
    firstplayer(L) = nextplayer(firstplayer(L));
    nextplayer(P) = NULL;
 }
 void deleteFirstCard(list_card &L, adr_card &P){
    P = firstcard(L);
    firstcard(L) = nextcard(firstcard(L));
    nextcard(P) = NULL;
 }

 adr_player searchPlayer(list_player L, string nama){
    adr_player P = firstplayer(L);
    adr_player keluar = NULL;

    while(P != NULL){
        if(infoplayer(P).nama == nama){
            keluar = P;
        }
        P = nextplayer(P);
    }
    return keluar;
 }
 adr_card searchCard(list_card L,string nama){
    adr_card C = firstcard(L);

    while (C != NULL && nama != infocard(C).nama) {
        C = nextcard(C);
    }

    return C;
 }

void showcard(list_player L, string nama){
    adr_player P = searchPlayer(L, nama);
    if (P != NULL) {
        cout << "USER: " << infoplayer(P).nama << endl;
        cout << "DECK KARTU" << endl;

        adr_relasi X = nextplayer_relasi(P);
        while (X != NULL) {
            adr_card C = nextcard_relasi(X);
            if(C != NULL){
                cout << infocard(C).nama << endl;
            }
            X = nextrelasi(X);

        }
    } else {
        cout << "Player not found!" << endl;
    }
}

void showallPlayer(list_player L){
    adr_player P = firstplayer(L);
    while(P != NULL){
        cout << infoplayer(P).nama << endl;
        P = nextplayer(P);
    }
}

void showallCard(list_card L){
    adr_card P = firstcard(L);
    while(P != NULL){
        cout << infocard(P).nama <<" "<< infocard(P).region << " "<< infocard(P).atk <<" "<<infocard(P).def<<" "<<infocard(P).mp<< endl;
        P = nextcard(P);
    }
}


