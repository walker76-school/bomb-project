#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define bool int
#define true 1
#define false 0

char* comp = "Computer Systems is my favorite class";

void levelOne();
void levelTwo();
void levelThree();
void levelFour();
void explode();
void pass();
void defused();

int main() {
    levelOne();
    levelTwo();
    levelThree();
    levelFour();
    defused();
    return 0;
}

// Computer Systems is my favorite class
void levelOne(){
    bool condition = true;

    int i;
    int len = strlen(comp);
    for(i = 0; i < len; i++){
        char ch;
        do {
            ch = getchar();
        } while(ch == '\n' || ch == '\r');

        if(ch != comp[i]){
            condition = false;
        }
    }

    if (!condition) {
        explode();
    } else {
        pass();
    }

}

void levelTwo(){
    bool condition = true;

    int len = 26;
    char* in = (char*) malloc(len * sizeof(char));

    int nread;
    do{
        nread = getline(&in, &len, stdin);
    } while (nread < 2);

    int i = 0;
    int bound = strlen(in);

    for(i = 0; i < bound - 1; i++){
        char ch;
        do {
            ch = getchar();
        } while(ch == '\n' || ch == '\r');

        if(ch != in[i]){
            condition = false;
        }
    }

    if (!condition) {
        explode();
    } else {
        pass();
    }
}

// AcEgIkMoQsUwY
void levelThree(){
    bool condition = true;
    int i;
    int j = 0;
    for (i = 0; i < 26; i += 2){
        char ch;
        do {
            ch = getchar();
        } while(ch == '\n' || ch == '\r');

        if(j % 2 == 0){
            char c = 65 + i;
            if (ch != c){
                condition = false;
            }
        } else {
            char c = 97 + i;
            if (ch != c){
                condition = false;
            }
        }

        j += 1;
    }

    if (!condition){
        explode();
    } else {
        pass();
    }
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
void levelFour(){
    bool condition = true;

    int len = 26;
    char* in = (char*) malloc(len * sizeof(char));

    int nread;
    do{
        nread = getline(&in, &len, stdin);
    } while (nread < 2);

    char ch = in[0];

    if(ch >= 'a' && ch <= 'z'){

        int c = ch - 96;

        if(nread - 2 != c){
            condition = false;
        } else {
            int i;
            for(i = 0; i < c; i++){
                char _ch = in[i + 1];

                if(_ch != 96 + ((c + i) % 26) + 1){
                    condition = false;
                }
            }
        }
    } else {
        condition = false;
    }

    if (!condition){
        explode();
    } else {
        pass();
    }
}

void explode(){
    printf("Bomb exploded!\n");
    exit(1);
}

void pass(){
    printf("Level passed!\n");
}

void defused(){
    printf("Bomb defused!\n");
    exit(0);
}