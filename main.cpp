#include <iostream>
#include <locale.h>
#include <windows.h>
#include <stdlib.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Portuguese");
    system("Color E0");
    string Seletor = "s";
    cout << "***************" << endl;
    cout << "*             *" << endl;
    cout << "* Calculadora *" << endl;
    cout << "*             *" << endl;
    cout << "***************" << endl;
    do{
        int Valor1int = 0, Valor2int = 0, Valor3int = 0, Valor4int = 0, Cont1int = 0, Cont2int = 0, Aux = 0;
        float Valor1float = 0, Valor2float = 0, Valor3float = 0;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        cout << "+ Digite a op��o desejada                                                                                    +" << endl;
        cout << "+                                                                                                            +" << endl;
        cout << "+ 1 --> Pot�ncia, 2 --> Regra de tr�s, 3 --> Multiplica��o, 4 --> Divis�o, 5 --> Adi��o, 6 --> Subtra��ocout +" << endl;
        cout << "+ 7 --> Decimal >>> bin�rio                                                                                  +" << endl;
        cout << "++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++" << endl;
        cin >> Valor1int;
        switch(Valor1int){
            case 1:{
                cout << "Digite o valor da base" << endl;
                cin >> Valor1int;
                cout << "Digite o expoente" << endl;
                cin >> Valor2int;
                int Vetor1int[Valor2int];
                for(int i = 0;i < Valor2int;i++){
                    Vetor1int[i] = Valor1int;
                }
                for(int i = 0;i < Valor2int;i++){
                    Cont1int++;
                    Vetor1int[Cont1int] = Vetor1int[i] * Vetor1int[Cont1int];
                    if(Cont1int == Valor2int - 1){
                        Valor1float = Vetor1int[Cont1int];
                    }
                }
            }
            break;
            case 2:{
                cout << "Digite o 1� Valor" << endl;
                cin >> Valor1float;
                cout << "Digite o valor1int 2� Valor1int" << endl;
                cin >> Valor2float;
                cout << "Digite o valor1int 3� Valor1int" << endl;
                cin >> Valor3float;
                Valor2float = Valor2float + Valor1float;
                Valor3float = Valor3float * Valor1float;
                Valor1float = Valor3float / Valor2float;
            }
            break;
            case 3:{
                cout << "Digite a op��o desejada" << endl;
                cout << "1 Tabuada, 2 Multiplica��o de operandos" << endl;
                cin >> Valor1int;
                switch(Valor1int){
                    case 1:{
                        cout << "Digite o multiplicador da tabuada" << endl;
                        cin >> Valor1int;
                        for(int i = 0;i < 10;i++){
                            if (i < 1){
                                cout << "Resultado" << endl;
                            }
                            Cont1int++;
                            cout << Valor1int << " x " << Cont1int << " = " << Valor1int * Cont1int << endl;
                        }
                    }
                    break;
                    case 2:{
                        cout << "Digite o multiplicador" << endl;
                        cin >> Valor1float;
                        do{
                            Cont1int++;
                            cout << "Digite o " << Cont1int << "� operando" << endl;
                            cin >> Valor2float;
                            cout << "Deseja multiplicar mais uma vez ?" << endl;
                            cout << "s para sim, n para n�o" << endl;
                            cin >> Seletor;
                            Valor1float = Valor2float * Valor1float;
                        }
                        while(Seletor == "s");
                    }
                    break;
                    default:{
                        cout << "N�o temos essa ap��o !"<< endl;
                    }
                }
            }
            break;
            case 4:{
                cout << "Digite o divisor" << endl;
                cin >> Valor1float;
                do{
                    Cont1int++;
                    cout << "Digite o " << Cont1int << "� dividendo" << endl;
                    cin >> Valor2float;
                    cout << "Deseja dividir mais uma vez ?" << endl;
                    cout << "s para sim, n para n�o" << endl;
                    cin >> Seletor;
                        Valor1float = Valor2float / Valor1float;
                }
                while(Seletor == "s");
            }
            break;
            case 5:{
                do{
                    Cont1int++;
                    cout << "Digite o " << Cont1int << "�  n�mero" << endl;
                    cin >> Valor2float;
                    Valor1float = Valor2float + Valor1float;
                    if(Cont1int > 1){
                        cout << "Deseja somar mais um n�mero ?" << endl;
                        cout << "s para sim, n para n�o" << endl;
                        cin >> Seletor;
                    }
                }
                while(Seletor == "s");
            }
            break;
            case 6:{
                cout << "Digite o minuendo" << endl;
                cin >> Valor1float;
                do{
                    Cont1int++;
                    cout << "Digite o " << Cont1int << "�  subtraendo" << endl;
                    cin >> Valor2float;
                    cout << "Deseja subtrair mais um n�mero ?" << endl;
                    cout << "s para sim, n para n�o" << endl;
                    cin >> Seletor;
                    Valor1float = Valor1float - Valor2float;
                }
                while(Seletor == "s");
            }
            break;
            case 7:{
                cout << "Digite o n�mero decimal"<< endl;
                cin >> Valor1int;
                Cont2int = Valor1int;
                cout << "++++++++++++++++++++++++++++++++++++++++++" << endl;
                if(Valor1int > 1){
                    Valor4int = Valor1int;
                    cout << "Poss�veis divis�es por 2"<< endl;
                    do{
                        Cont1int++;
                        cout << Valor1int << " / 2 = ";
                        Valor2int = Valor1int / 2;
                        Valor1int = Valor2int;
                        cout << Valor1int << endl;
                    }
                    while(Valor1int != 1);
                    cout << "++++++++++++++++++++++++++++++++++++++++++" << endl;
                    Aux = Cont1int +1;
                    int Vetor2int[Aux];
                    for(int i =0;i<Cont1int;i++){
                        Valor3int = Valor4int % 2;
                        Valor2int = Valor4int / 2;
                        Valor4int = Valor2int;
                        Vetor2int[i] = Valor3int;
                    }
                    Vetor2int[Cont1int] = 1;
                    cout << "Resultado " << endl;
                    for(int i = Cont1int;i >= 0;i--){
                        cout << Vetor2int[i];
                    }
                    cout << "\n++++++++++++++++++++++++++++++++++++++++++" << endl;
                    cout << "Arquitetura equivalente" << endl;
                    if(Aux < 3){
                        cout << "2 bits" << endl;
                    }else{
                        for(int i = 2;i < Aux;i * 2)
                        {
                            Valor2int = i * 2;
                            i = Valor2int;
                        }
                        cout << Valor2int << " bits" << endl;
                    }
                    cout << "++++++++++++++++++++++++++++++++++++++++++" << endl;
                    cout << "Bin�rio >>> Decimal" << endl;
                    int Vetor3int[Aux];
                    Valor1int = 0;
                    Valor2int = 0;
                    Aux = 1;
                    for(int i = 0;i <= Cont1int;i++)
                    {
                        Valor1int = Aux;
                        if(Vetor2int[i] == 1){
                            Valor2int = Valor1int + Valor2int;
                        }
                        Vetor3int[i] = Aux;
                        Aux = Aux * 2;
                    }
                    for(int i = Cont1int;i >= 0;i--){
                        cout << Vetor3int[i];
                         if(i > 0){
                        cout << " - ";
                        }
                    }
                    cout << "" << endl;
                    for(int i = Cont1int;i >= 0;i--){
                        if(Vetor3int[i] > 9){
                            cout << " ";
                            if(Vetor3int[i] > 99){
                                cout << " ";
                                if(Vetor3int[i] > 999){
                                    cout << " ";
                                    if(Vetor3int[i] > 9999){
                                        cout << " ";
                                        if(Vetor3int[i] > 99999){
                                            cout << " ";
                                            if(Vetor3int[i] > 999999){
                                                cout << " ";
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        cout << Vetor2int[i] ;
                        if(i > 0){
                            cout << " - " ;
                        }
                    }
                    cout << "\n" << endl;
                    for(int i = Cont1int;i >= 0;i--){
                        if(Vetor2int[i] == 1){
                            cout << Vetor3int[i];
                             if(i > 0){
                                cout << " - ";
                            }
                        }else{
                            if(i > 0){
                                cout << "~ - ";
                            }else{
                                cout << "~ ";
                            }
                        }
                    }
                    cout << "" << endl;
                    for(int i = Cont1int;i >= 0;i--){
                        if(Vetor2int[i] == 1){
                            if(Vetor3int[i] > 9){
                                cout << " ";
                                if(Vetor3int[i] > 99){
                                    cout << " ";
                                    if(Vetor3int[i] > 999){
                                        cout << " ";
                                        if(Vetor3int[i] > 9999){
                                            cout << " ";
                                            if(Vetor3int[i] > 99999){
                                                cout << " ";
                                                if(Vetor3int[i] > 999999){
                                                    cout << " ";
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                        cout << Vetor2int[i] ;
                        if(i > 0){
                            cout << " - " ;
                        }
                    }
                    cout << "\n" << endl;
                    if(Cont2int == 4)
                    {
                        cout << "4";
                    }else{
                        for(int i = Cont1int;i >= 0;i--){
                            if(Vetor2int[i] == 1){
                                cout << Vetor3int[i] ;
                            }
                            if(i > 0 && Vetor2int[i] == 1){
                                cout << " + " ;
                            }
                        }
                    }
                    cout << " = " << Valor2int << endl;
                }else{
                    cout << "O bin�rio de " << Valor1int << " � " << Valor1int << endl;
                }
            }
            break;
            default:{
                cout << "N�o temos essa ap��o !"<< endl;
            }
        }
        if(Valor1float != 0)
        {
            cout << "Resultado " << Valor1float << endl;
        }
        cout << "Digite s para fazer outro c�lculo ou precione n para sair" << endl;
        cin >> Seletor;
        if(Seletor == "s"){
            cout << "****************" << endl;
            cout << "*              *" << endl;
            cout << "* Novo c�lculo *" << endl;
            cout << "*              *" << endl;
            cout << "****************" << endl;
        }
    }
    while(Seletor == "s");
    cout << "++++++++++++++++++++++++++++++++++++++++++" << endl;
    cout << "##############" << endl;
    cout << "#            #" << endl;
    cout << "# At� logo ! #" << endl;
    cout << "#            #" << endl;
    cout << "##############" << endl;
    return 0;
}
