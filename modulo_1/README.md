# Módulo 1 - fundamentos de C++

------

O presente capítulo mostra os operadores básicos e seus usos.

### Etapas da compilação

------

Ao criar um programa em C++ você sempre seguirá os seguintes passos:

1. Insira o código do programa
2. Compile o código fonte
3. Rode o programa

Para fazer tal, você deve conhecer o compilador que você usa. Por exemplo, eu uso o GCC.

### [O GCC e suas nuances][Usando o GCC na prática]

------

Primeiramente, confira se o compilador `g++`, presente na suíte GCC, está instalado:

    g++ --version

Para compilar seu programa, faça:

    g++ meu_programa.ext_fonte -o meu_programa.ext_exec

E, caso queira usar seu programa, em um ambiente Linux, use `./meu_programa.ext_exec`.

### O primeiro programa

------

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

### [Variáveis][Wikipedia - variáveis]

------

O uso de variáveis é um dos conceitos mais importantes das linguagens de programação. Podemos usar como exemplo o exemplo de uma caixa de arquivo, onde você pode guardar os dados.

[![Guardando dados em caixas de arquivos][Variáveis - 1]][Variáveis - 1]

Em toda a linguagem de programação há uma abordagem diferente para as variáveis. Em C e C++, temos uma tipagem [forte][StackOverflow - O que é estilo de tipagem?] e [estática][StackOverflow - Qual a diferença entre uma linguagem de programação estática e dinâmica?], o que significa que suas variáveis devem ter seus tipos bem definidos e não modificados em tempo de execução (estática) e uma propriedade não pode ser comparada com outra de tipo diferente sem conversão (forte).

#### [Tipos de variáveis][cppconference - Tipos de Dados do C++]

------

O C++ permite sete tipos de dados:

|tipo       |significado                                      |
|:----------|:------------------------------------------------|
|char       |caractere                                        |
|wchar_t    |caractere longo                                  |
|int        |número inteiro                                   |
|float      |número de ponto flutuante                        |
|double     |número de ponto flutuante com o dobro de precisão|
|bool       |booleano (verdadeiro ou falso)                   |
|void       | sem valor                                       |

   
   [Usando o GCC na prática]: https://www.geeksforgeeks.org/compiling-with-g-plus-plus/
   [Wikipedia - Biblioteca padrão do C++]: https://pt.wikipedia.org/wiki/Biblioteca_padr%C3%A3o_do_C%2B%2B
   [Microsoft - iostream]: https://docs.microsoft.com/pt-br/cpp/standard-library/iostream?view=vs-2019
   [Variáveis - 1]: http://www.bloghardwaremicrocamp.com.br/wp-content/uploads/2016/03/tipos-de-dados.jpg
   [Wikipedia - variáveis]: https://pt.wikipedia.org/wiki/Vari%C3%A1vel_(programa%C3%A7%C3%A3o)
   [StackOverflow - Qual a diferença entre uma linguagem de programação estática e dinâmica?]: https://pt.stackoverflow.com/questions/21508/qual-a-diferen%C3%A7a-entre-uma-linguagem-de-programa%C3%A7%C3%A3o-est%C3%A1tica-e-din%C3%A2mica
   [StackOverflow - O que é estilo de tipagem?]: https://pt.stackoverflow.com/questions/190463/o-que-%C3%A9-estilo-de-tipagem
   [cppconference - Tipos de Dados do C++]: https://pt.cppreference.com/w/cpp/data_types
