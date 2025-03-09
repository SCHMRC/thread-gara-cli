#include <iostream>
#include <thread>
#include <vector>
#include <unistd.h>

using namespace std;

void task(string pattern[],int max, int riga) {
    for (int i = 0; i < max; i ++) {
        // caratteri di escape per posizionare il cursore: \033[<riga>;<colonna>H
        cout << "\033[" << riga << ";1H" << pattern[i] << flush; // Sposta il cursore sulla riga specificata e 
flush elimina il buffer
        usleep(rand() % 500000 + 1); // Ritardo casuale
    }
    //cout << endl; // Manda a capo alla fine
}

int main() {
    srand(time(NULL));
    const int MAX = 60;
    string pattern[MAX] = {"0"};
    for(int i = 0 ; i < 60; i++){
        pattern[i] = pattern[i-1] + "0";
    }

    // Creiamo due thread, specificando la riga su cui devono stampare
    thread t1(task, pattern,MAX, 1); // Stampa alla riga 1
    thread t2(task, pattern,MAX, 2); // Stampa alla riga 2

    t1.join();
    t2.join();

    cout << "\033[5;1H Gara conclusa!" << endl; // Stampa il messaggio finale alla riga 4
    return 0;
}

