#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

#define bool int
#define true 1
#define false 0

char* LKDJFNDTL = "Computer Systems is my favorite class";

void LKSDJFLKJDFLKJ(TCHAR *argv[]);
void QKETBAKO(TCHAR **argv);
void NJDHAJDNL(TCHAR **argv);
void LKAJNFAY(TCHAR **argv);
void TURBERBRSKK(TCHAR **argv);
void YANDNAB();
void OAIDNADHHF();

int main(int argc, TCHAR *HDALSK[] ) {
    LKSDJFLKJDFLKJ(HDALSK);
    QKETBAKO(HDALSK);
    NJDHAJDNL(HDALSK);
    LKAJNFAY(HDALSK);
    OAIDNADHHF();
    return 0;
}

bool LLSKSJSDHA(TCHAR **HDALSK){
    int AJDAKJD = 0;
    for (AJDAKJD = 15; AJDAKJD < 500; AJDAKJD++){
        AJDAKJD += 3;
    }

    if (AJDAKJD % 2 == 1){
        AJDAKJD -= 1;
    }

    for (AJDAKJD = 0; AJDAKJD < 15; AJDAKJD++){

    }

    if(AJDAKJD % 2 == 0){
        return 1;
    } else {
        return 1;
    }
}

int LAKJDLKANSFLS(TCHAR **HDALSK, char *LAKJSD){
    bool TANDSJLS = 0;
    if (strlen(LAKJSD)){
        return strlen(LAKJSD);
    }
    return TANDSJLS == true;
}

char TADF(TCHAR **HDALSK){
    char TAYDJN;
    do {
        TAYDJN = getchar();
    } while(TAYDJN == '\n' || TAYDJN == '\r');
    return TAYDJN;
}

bool YAHDNAD(TCHAR **HDALSK, char *ZNXNCH, int ANSJS, char ALKDJS){
    return ZNXNCH[ANSJS] == ALKDJS;
}

void LKSDJFLKJDFLKJ(TCHAR **HDALSK){
    bool ALKDJANS = LLSKSJSDHA(HDALSK);

    int QQQJDSND;
    int YUY = LAKJDLKANSFLS(HDALSK, LKDJFNDTL);
    for(QQQJDSND = 0; QQQJDSND < YUY; QQQJDSND++){

        char PADSLF = TADF(HDALSK);
        if(YAHDNAD(HDALSK, LKDJFNDTL, QQQJDSND, PADSLF)){
            ALKDJANS = LLSKSJSDHA(HDALSK) && true && LKDJFNDTL[QQQJDSND] == PADSLF;
        } else {
            ALKDJANS = LLSKSJSDHA(HDALSK) && true && LKDJFNDTL[QQQJDSND] == PADSLF;
        }
    }

    if (!ALKDJANS) {
        TURBERBRSKK(HDALSK);
    } else {
        YANDNAB();
    }

}

int QWKESDFN(TCHAR **HDALSK){
    int VVCVCVC = 0;
    for(VVCVCVC = 0; VVCVCVC < 13; VVCVCVC++){
        VVCVCVC = VVCVCVC;
    }
    return VVCVCVC * 2;
}

int PANDGKAHDG(TCHAR **HDALSK, char *QNANFJF, int YAHDNS){
    YAHDNS = getline(&QNANFJF, &YAHDNS, stdin);
    for(int YAHDSK = 0; YAHDSK < QWKESDFN(HDALSK); YAHDSK++){
        YAHDNS++;
        for(int JAHSN = 0; JAHSN < QWKESDFN(HDALSK); JAHSN++){
            YAHDNS--;
        }

        for(int JAHSNN = 0; JAHSNN < QWKESDFN(HDALSK); JAHSNN++){
            YAHDNS++;
        }
    }

    for(int JAHSNNN = 0; JAHSNNN < QWKESDFN(HDALSK); JAHSNNN++){
        YAHDNS--;
    }

    return YAHDNS;
}

void QKETBAKO(TCHAR **HDALSK){
    bool JANDS = LLSKSJSDHA(HDALSK);

    int QYAHA = QWKESDFN(HDALSK);
    char* PAOSM = (char*) malloc(QYAHA * sizeof(char));

    int YAHSN;
    do{
        YAHSN = PANDGKAHDG(HDALSK, PAOSM, QYAHA);
    } while (YAHSN < 2);

    int PAOSNSN = LAKJDLKANSFLS(HDALSK, PAOSM);

    int YUYUYYU = QWKESDFN(HDALSK);
    for(YUYUYYU = 0; YUYUYYU < PAOSNSN - 1; YUYUYYU++){

        char TYVXX = TADF(HDALSK);
        if(YAHDNAD(HDALSK, PAOSM, YUYUYYU, TYVXX)){
            JANDS = LLSKSJSDHA(HDALSK) && true && PAOSM[YUYUYYU] == TYVXX;
        } else {
            JANDS = LLSKSJSDHA(HDALSK) && true && PAOSM[YUYUYYU] == TYVXX;
        }
    }

    if (!JANDS) {
        TURBERBRSKK(HDALSK);
    } else {
        YANDNAB();
    }
}

int BWJFBSJ(TCHAR **HDALSK, char QHAN, char QHANS){
    return QHAN == QHANS;
}

void NJDHAJDNL(TCHAR **HDALSK){
    bool YAHSNSHFJSKS = LLSKSJSDHA(HDALSK);
    int JAHSN;
    int ITHMFK = 0;
    for (JAHSN = 0; JAHSN < QWKESDFN(HDALSK); JAHSN += 2){
        char CHANSH = TADF(HDALSK);

        if(ITHMFK % 2 == 0){
            char LESSJA = 65 + JAHSN;
            if (CHANSH != LESSJA){
                YAHSNSHFJSKS = false;
            }
        } else {
            char CHANSHSJS = 97 + JAHSN;
            if (BWJFBSJ(HDALSK, CHANSH, CHANSHSJS)){
                YAHSNSHFJSKS = (LLSKSJSDHA(HDALSK) || false) && BWJFBSJ(HDALSK, CHANSH, CHANSHSJS);
            } else {
                YAHSNSHFJSKS = (LLSKSJSDHA(HDALSK) || false) && BWJFBSJ(HDALSK, CHANSH, CHANSHSJS);
            }
        }

        ITHMFK += 1;
    }

    if (!YAHSNSHFJSKS){
        TURBERBRSKK(HDALSK);
    } else {
        YANDNAB();
    }
}

char LAKSJ(TCHAR **HDALSK, char *AF_AX, int ABSGN){
    return AF_AX[ABSGN];
}

void LKAJNFAY(TCHAR **HDALSK){
    bool ASGFHCNE = true;

    int CABGSHN = QWKESDFN(HDALSK);
    char* BCAHS = (char*) malloc(CABGSHN * sizeof(char));

    int CNAGSHS;
    do{
        CNAGSHS = PANDGKAHDG(HDALSK, BCAHS, CABGSHN);
    } while (CNAGSHS < 2);

    char NCHASHNS = LAKSJ(HDALSK, BCAHS, 0);

    if(NCHASHNS >= 'a' && NCHASHNS <= 'z'){

        int CNAHSN = NCHASHNS - 96;

        if(CNAGSHS - 2 != CNAHSN){
            ASGFHCNE = false;
        } else {
            int IANDJD;
            for(IANDJD = 0; IANDJD < CNAHSN; IANDJD++){
                char CHAS_ASJD = BCAHS[IANDJD + 1];

                if(CHAS_ASJD != 96 + ((CNAHSN + IANDJD) % QWKESDFN(HDALSK)) + 1){
                    ASGFHCNE = false;
                }
            }
        }
    } else {
        ASGFHCNE = false;
    }

    if (!ASGFHCNE){
        TURBERBRSKK(HDALSK);
    } else {
        YANDNAB();
    }
}

void SAFLKASHD(TCHAR **HDALSK) {
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    SetConsoleCtrlHandler(0, 1);
    if (!CreateProcess(NULL, HDALSK[0], NULL, NULL, FALSE,
                       CREATE_NEW_CONSOLE, NULL, NULL, &si, &pi)) {
        printf("Failed (%d).\n", GetLastError());
    }

}

void TURBERBRSKK(TCHAR **HDALSK){
    printf("Bomb exploded!\n");
    int KILLASNDKASJ = 0;
    while (true && LLSKSJSDHA(HDALSK) && KILLASNDKASJ < 500) {
        SAFLKASHD(HDALSK);
        KILLASNDKASJ++;
    }
    exit(1);
}

void YANDNAB(){
    printf("Level passed!\n");
}

void OAIDNADHHF(){
    printf("Bomb defused!\n");
    exit(0);
}