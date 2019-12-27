#include <iostream>

using namespace std;

/*
 * este programa mostra a diferença entre variáveis convencionais e unsigned
 */

int main()
{
    short int i; // número
    short unsigned int j; // número unsigned

    j = 60000;
    i = j;

    cout << j << "\n"; // na variável j o número 60000 cabe e é mostrado corretamente
    cout << i << "\n"; // na variável i não

    return 0;
}