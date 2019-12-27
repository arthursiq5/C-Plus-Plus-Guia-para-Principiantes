#include <iostream>

using namespace std;

/*
 * este programa exibirá o alfabeto
 */
int main(){
    char letter;

    for(letter = 'A'; letter <= 'Z'; letter++)
        cout << letter;
    
    cout << "\n";

    return 0;
}