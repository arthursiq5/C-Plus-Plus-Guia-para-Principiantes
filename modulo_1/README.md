# Módulo 1 - fundamentos de C++

O presente capítulo mostra os operadores básicos e seus usos.

### Etapas da compilação

Ao criar um programa em C++ você sempre seguirá os seguintes passos:

1. Insira o código do programa
2. Compile o código fonte
3. Rode o programa

Para fazer tal, você deve conhecer o compilador que você usa. Por exemplo, eu uso o GCC.

### [O GCC e suas nuances][Usando o GCC na prática]

Primeiramente, confira se o compilador `g++`, presente na suíte GCC, está instalado:

    g++ --version

Para compilar seu programa, faça:

    g++ meu_programa.ext_fonte -o meu_programa.ext_exec

E, caso queira usar seu programa, em um ambiente Linux, use `./meu_programa.ext_exec`.

### O primeiro programa

Para criar o primeiro programa, primeiro importe da [biblioteca padrão][Wikipedia - Biblioteca padrão do C++] as [interfaces de manipulação de entrada e saída][Microsoft - iostream]. Para isso, insira a seguinte linha antes de inserir seu código:

    #include<iostream>

Essa biblioteca importada possui controles de fluxo básicos de entrada e saída.

Após tal, insira o `namespace`:

    using namespace std;

Não vou me atentar a isso (ainda), mas saiba que essa linha é necessária.

Após tal, crie uma função `main`:

    int main()
    {
        return 0;
    }

Por convenção, a função `main` retorna sempre zero. Assim, se ela retornar qualquer coisa além de zero, sabemos que o programa teve um erro de execução. Você também pode usar:

    void main()
    {
        // nada retornado
    }

Usando `void` no início da função, não retornamos nada na função.

Após isso, escolha uma mensagem para ser mostrada na tela, como, por exemplo, "Hello, World!". Essa mensagem será mostrada na tela através do comando `cout`:

    int main()
    {
        cout << "Hello, World!";

        return 0;
    }

O comando `cout` mostra na tela uma mensagem "jogada" em cima dele. Para ser inserida essa mensagem em cima do comando, é usado o operador `<<` da seguinte forma:

    cout << mensagem;
   
   
   [Usando o GCC na prática]: https://www.geeksforgeeks.org/compiling-with-g-plus-plus/
   [Wikipedia - Biblioteca padrão do C++]: https://pt.wikipedia.org/wiki/Biblioteca_padr%C3%A3o_do_C%2B%2B
   [Microsoft - iostream]: https://docs.microsoft.com/pt-br/cpp/standard-library/iostream?view=vs-2019
