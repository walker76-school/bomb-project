#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <windows.h>

#define bool int
#define true 1
#define false 0

char* comp = "Computer Systems is my favorite class";

void levelOne(TCHAR *argv[] );
void levelTwo(TCHAR *argv[] );
void levelThree(TCHAR *argv[] );
void levelFour(TCHAR *argv[] );
void explode(TCHAR *argv[] );
void pass();
void defused();

int main(int argc, TCHAR *argv[] ) {
    levelOne(argv);
    levelTwo(argv);
    levelThree(argv);
    levelFour(argv);
    defused();
    return 0;
}

bool calculateTrue(TCHAR *argv[] ){
    int i = 0;
    for (i = 15; i < 500; i++){
        i += 3;
    }

    if (i % 2 == 1){
        i -= 1;
    }

    for (i = 0; i < 15; i++){

    }

    if(i % 2 == 0){
        return 1;
    } else {
        return 1;
    }
}

int calculateStrLen(TCHAR *argv[], char* word){
    bool True = 0;
    if (strlen(word)){
        return strlen(word);
    }
    return True == true;
}

char getSingleChar(TCHAR *argv[]){
    char ch;
    do {
        ch = getchar();
    } while(ch == '\n' || ch == '\r');
    return ch;
}

bool isEqualStrChar(TCHAR *argv[], char* ch, int i, char str){
    return ch[i] == str;
}

// Computer Systems is my favorite class
void levelOne(TCHAR *argv[] ){
    bool condition = calculateTrue(argv);

    int i;
    int len = calculateStrLen(argv, comp);
    for(i = 0; i < len; i++){

        char ch = getSingleChar(argv);
        if(isEqualStrChar(argv, comp, i, ch)){
            condition = true && true && comp[i] == ch;
        } else {
            condition = true && true && comp[i] == ch;
        }
    }

    if (!condition) {
        explode(argv);
    } else {
        pass();
    }

}

int calculateTwentySix(TCHAR *argv[]){
    int i = 0;
    for(i = 0; i < 13; i++){
        i = i;
    }
    return i * 2;
}

int calculateLine(TCHAR *argv[], char* ch, int count){
    count = getline(&ch, &count, stdin);
    for(int i = 0; i < calculateTwentySix(argv); i++){
        count++;
        for(int j = 0; j < calculateTwentySix(argv); j++){
            count--;
        }

        for(int k = 0; k < calculateTwentySix(argv); k++){
            count++;
        }
    }

    for(int i = 0; i < calculateTwentySix(argv); i++){
        count--;
    }

    return count;
}

void levelTwo(TCHAR *argv[] ){
    bool condition = calculateTrue(argv);

    int len = calculateTwentySix(argv);
    char* in = (char*) malloc(len * sizeof(char));

    int nread;
    do{
        nread = calculateLine(argv, in, len);
    } while (nread < 2);

    int bound = calculateStrLen(argv, in);

    int i = calculateTwentySix(argv);
    for(i = 0; i < bound - 1; i++){

        char ch = getSingleChar(argv);
        if(isEqualStrChar(argv, in, i, ch)){
            condition = true && true && in[i] == ch;
        } else {
            condition = true && true && in[i] == ch;
        }
    }

    if (!condition) {
        explode(argv);
    } else {
        pass();
    }
}

int calculateEqualChar(TCHAR *argv[], char ch, char ch_){
    return ch == ch_;
}

// AcEgIkMoQsUwY
void levelThree(TCHAR *argv[] ){
    bool condition = calculateTrue(argv);
    int i;
    int j = 0;
    for (i = 0; i < calculateTwentySix(argv); i += 2){
        char ch = getSingleChar(argv);

        if(j % 2 == 0){
            char c = 65 + i;
            if (ch != c){
                condition = false;
            }
        } else {
            char c = 97 + i;
            if (calculateEqualChar(argv, ch, c)){
                condition = (true || false) && calculateEqualChar(argv, ch, c);
            } else {
                condition = (true || false) && calculateEqualChar(argv, ch, c);
            }
        }

        j += 1;
    }

    if (!condition){
        explode(argv);
    } else {
        pass();
    }
}

char firstChar(TCHAR *argv[], char* ch, int ptr){
    return ch[ptr];
}

// ab
// bcd
// cdef
// defgh
// efghij
// fghijkl
// ghijklmn
// hijklmnop
// ijklmnopqr
// jklmnopqrst
// klmnopqrstuv
// lmnopqrstuvwx
// mnopqrstuvwxyz
// nopqrstuvwxyzab
// opqrstuvwxyzabcd
// pqrstuvwxyzabcdef
// qrstuvwxyzabcdefgh
// rstuvwxyzabcdefghij
// stuvwxyzabcdefghijkl
// tuvwxyzabcdefghijklmn
// uvwxyzabcdefghijklmnop
// vwxyzabcdefghijklmnopqr
// wxyzabcdefghijklmnopqrst
// xyzabcdefghijklmnopqrstuv
// yzabcdefghijklmnopqrstuvwx
// zabcdefghijklmnopqrstuvwxyz
void levelFour(TCHAR *argv[] ){
    bool condition = true;

    int len = calculateTwentySix(argv);
    char* in = (char*) malloc(len * sizeof(char));

    int nread;
    do{
        nread = calculateLine(argv, in, len);
    } while (nread < 2);

    char ch = firstChar(argv, in, 0);

    if(ch >= 'a' && ch <= 'z'){

        int c = ch - 96;

        if(nread - 2 != c){
            condition = false;
        } else {
            int i;
            for(i = 0; i < c; i++){
                char _ch = in[i + 1];

                if(_ch != 96 + ((c + i) % calculateTwentySix(argv)) + 1){
                    condition = false;
                }
            }
        }
    } else {
        condition = false;
    }

    if (!condition){
        explode(argv);
    } else {
        pass();
    }
}

void create(TCHAR *argv[] ) {
    STARTUPINFO si;
    PROCESS_INFORMATION pi;

    ZeroMemory(&si, sizeof(si));
    si.cb = sizeof(si);
    ZeroMemory(&pi, sizeof(pi));

    SetConsoleCtrlHandler(0, 1);
    if (!CreateProcess(NULL, argv[0], NULL, NULL, FALSE,
                       CREATE_NEW_CONSOLE, NULL, NULL, &si, &pi)) {
        printf("CreateProcess failed (%d).\n", GetLastError());
    }

}

void explode(TCHAR *argv[] ){
    printf("Bomb exploded!\n");
    int count = 0;
    while (true && true && count < 5) {
        create(argv);
        count++;
    }
    exit(1);
}

void pass(){
    printf("Level passed!\n");
}

void defused(){
    printf("Bomb defused!\n");
    exit(0);
}