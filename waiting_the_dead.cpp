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
void desition()
{
}
