#include <iostream>
#include <time.h>
#include <locale>
#include <conio.h>

void alone();
void TwoPlayers();
void TreePlayers();

using namespace std;

void text(int text)
{
switch (text)
{
case 1:
    cout<<R"(    

                                                    .--------.
                                                .'  .----.  '.
                                                /   /      \   \         
                                                |   |  0  0  |   |        
                                                |   |   --   |   |        
                                                |   |  ----  |   |        
                                                \   \/   /
                                                '.          .'
                                                    '-..-'           

                                                    |||||
                                                    /|||||\  )" 
            
    <<endl;
    cout<<"\n                                                 ---CEA te observa---"<<endl;
    getch();

    cout<<"\n                                    --Estas apunto de apostar tu vida ten cuidado--"<<endl;
    getch();
    
    cout<<R"(

    Cea es un ser de grado 2 salido de la dimension de la estatica.
                    Se dedica a hacer apuestas ilegales en el mundo de los vivos, se dice que si le ganas
                    en su propio juego este te otorgara lo que el mundo anhela...

)"   <<endl;
getch();

    break;

default:
    break;
}
}
void alonefunction()
{
}


void desition()
{
string answer;
cout<<"¿Y que es lo que anhela toda persona? "<<endl;
cout<<"Escribe que piensas . . ."<<endl;
cin>>answer;
cout<<endl<<"¿Piensas que la respuesta es "<<answer<<"?"<<endl;
getch();
if (answer == "dinero" or answer == "Dinero")
{
    cout<<"Estas en lo cierto dinero"<<endl;
    getch();
}
else
{
    cout<<"Pues te equivocas"<<endl;
    getch();
    cout<<"¿Entonces que sera?"<<endl;
    getch();

    cout<<"\n ¿Ayudar a los demas?"<<endl;
    getch();

    cout<<"\n ¿Hacer el bien?"<<endl;
    getch();

    cout<<"\n ¿Cuidar de los suyos?"<<endl;
    getch();
    cout<<""<<endl;

    cout<<R"(Pues obviamente no, al ser humano solo le interesa el dinero asi que preparate por que para
ganar su juego deberas tener un puntaje mas alto que el, para eso deberas acertar numeros de un rango del 1 al 3 
mientras CEA hace tambien su apuesta
sobre que numero sera, intentalo: 
    
    )"<<endl; 
    getch();
{
}
