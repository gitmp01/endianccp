// Example program
#include <iostream>

using namespace std;

void toBigEndian(unsigned long num, unsigned char *ba) {

    unsigned int mask = 0xFF;

    int k = 8;
    while(num != 0) {
        ba[--k] = num & mask;
        num = num >> 8;
        // cout << k << endl;
        // cout << hex << (int)ba[k] << endl;
    }
}

int main () {

    unsigned long a = 0x0FFFFFF9FFFFFFFF;

    unsigned char ba[8] = {0};

    for (int i = 0; i < 8; ++i) 
        cout << hex << (int)ba[i];
    cout << endl;

    toBigEndian(a, ba);


    for (int i = 0; i < 8; ++i) {
        cout << hex << (int)ba[i];
    }

    cout << endl;
    

    return 0;
}
