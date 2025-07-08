#include<iostream>
#include <time.h>
#include <locale>
#include <conio.h>

void alone();
void TwoPlayers();

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
                                                   \   \______/   /
                                                    '.          .'
                                                      '-.____.-'           

                                                        |||||
                                                       /|||||\  )" 
        <<endl;
        cout<<"\n---CEA te observa---"<<endl;
        getch();

        cout<<"\n--Estas apunto de apostar tu vida ten cuidado--"<<endl;
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
    
    cout<<R"(
    Pues obviamente no, al ser humano solo le interesa el dinero asi que preparate por que para
    ganar su juego deberas tener un puntaje mas alto que el, para eso deberas acertar numeros de un rango del 1 al 3 
    mientras CEA hace tambien su apuesta
    sobre que numero sera, intentalo: 
        
        )"<<endl; 
        getch();
    }
}


void alonefunction()
{
setlocale(LC_ALL, "");
int CEAscore = 0, playerScore = 0;
int playerSelect;
    do
    {
        srand(time(NULL));

        int carta = 1 + rand() % (3 + 1 - 1);
        int CEAselect = 1 + rand() % (3 + 1 - 1);

        cout<<""<<endl;
        cout<<R"(
                                                  .----------------------.
                                                  | K#                K# |
                                                  |                      |
                                                  |     +----------+     |
                                                  |     |  //////  |     |
                                                  |     |  |####|  |     |
                                                  |     |  |////|  |     |
                                                  |     |  |####|  |     |
                                                  |     |  //////  |     |
                                                  |     +----------+     |
                                                  |       ||||||||       |
                                                  |      /||||||||\      |
                                                  |     |__________|     |
                                                  |                      |
                                                  |   THE HOLLOW CARD    |
                                                  | K#                K# |
                                                  '----------------------'
)"<<endl;

        cout<<""<<endl;
        cout<<R"( Detras de esta carta hay un numero del 1 al 3, donde CEA ha elegido el numero: )"<<CEAselect;
        cout<<" , introduce un numero del 1 al 3 y comprueba quien tuvo razon:  ";
        cin>>playerSelect;

        while (playerSelect <= 0 || playerSelect >= 4)
        {
        cout<<"\n solo numeros del 1 al 3"<<endl;
        cin>>playerSelect;
        }

    if (playerSelect == carta)
        {
            for (int i = 0; i < 1; i++)
            {
                playerScore = playerScore + 1;

                cout<<"tu punatajes es: "<<playerScore<<endl;
            }
            
        }

        if (playerSelect != carta)
        {
            for (int i = 0; i < 1; i++)
            {
                playerScore = playerScore + 0;

                cout<<"tu punatajes es: "<<playerScore<<endl;
            }
        }

        if (CEAselect == carta )
        {
            for (int i = 0; i < 1; i++)
            {
                CEAscore = CEAscore + 1;

                cout<<"Puntaje de CEA: "<<CEAscore<<endl;
            }
        }

        if (CEAselect != carta)
        {
            for (int i = 0; i < 1; i++)
            {
                CEAscore = CEAscore + 0;

                cout<<"Puntaje de CEA: "<<CEAscore<<endl;
            }
        }

    getch();
        cout<<""<<endl;
        
    } while (CEAscore < 10 && playerScore < 10);

    if (CEAscore == 10)
      {

         cout<<R"(    

                                                      .--------.
                                                    .'  .----.  '.
                                                   /   /      \   \         
                                                  |   |  0  0  |   |        
                                                  |   |   --   |   |        
                                                  |   |  ----  |   |        
                                                   \   \______/   /
                                                    '.          .'
                                                      '-.____.-'           

                                                        |||||
                                                       /|||||\  
                                                       
                                                        . . .
                                                       )" 
        <<endl;

      getch();

      cout<<R"(                        Te doy las gracias por pensar en podias vencerme, veras para permanecer
                      en tu mundo necesito depositar almas al horrible lugar del que vengo y tu
                                           viniste solito a entregarmela. 
      )";
      getch();

      cout<<"\n                                                     THE END"<<endl;
      }

      if (playerScore == 10)
      {
        cout<<"                                                   $10000000000000"<<endl;
        getch();

        cout<<"                                         ¿Acaso puedes contar hasta ese numero?"<<endl;
        getch();

        cout<<R"(                             ¿Que haces aun aqui?, ven vamos a gastarlo, ¿en ayudar alos demas?
                                porsupuesto que no, la vanidad nos aguarda, aya vamos)"<<endl;
        getch();

        cout<<"                                                     THE END"<<endl;         
      }
}

void TwoPlayersFunction()
{
        setlocale(LC_ALL, "");
    
    string FirstPlayerName, SecondPlayerName, ThirdPlayerName, answer;
    int SecondPlayerScore= 0, FirstPlayerScore = 0;
    cout<<"Ingrese el nombre del primer jugador: ";
    cin>>FirstPlayerName;
    cout<<"Ingrese el nombre del segundo jugador: ";
    cin>>SecondPlayerName;
    cout<<"Ingrese cuantas cartas se tienen que adivinar para ganar: ";
    
    int FirstPlayerSelect, SecondPlayerSelect;
    do
    {

        srand(time(NULL));

        int carta = 1 + rand() % (3 + 1 - 1);

        cout<<""<<endl;
        cout<<R"(
                                                  .----------------------.
                                                  | K#                K# |
                                                  |                      |
                                                  |     +----------+     |
                                                  |     |  //////  |     |
                                                  |     |  |####|  |     |
                                                  |     |  |////|  |     |
                                                  |     |  |####|  |     |
                                                  |     |  //////  |     |
                                                  |     +----------+     |
                                                  |       ||||||||       |
                                                  |      /||||||||\      |
                                                  |     |__________|     |
                                                  |                      |
                                                  |   THE HOLLOW CARD    |
                                                  | K#                K# |
                                                  '----------------------'
)"<<endl;

        cout<<""<<endl;
        cout<<FirstPlayerName<<" introduce un numero del 1 al 3 y comprueba quien tuvo razon:  ";
        cin>>FirstPlayerSelect;
        cout<<""<<endl;
        cout<<SecondPlayerName<<" introduce un numero del 1 al 3 y comprueba quien tuvo razon:  ";
        cin>>SecondPlayerSelect;
        cout<<""<<endl;
        
        
        while (FirstPlayerSelect <= 0 || FirstPlayerSelect >= 4)
        {
            cout<<endl<<FirstPlayerName<<" solo numeros del 1 al 3"<<endl;
            cin>>FirstPlayerSelect;
        }
        while (SecondPlayerSelect <= 0 || SecondPlayerSelect >= 4)
        {
            cout<<endl<<SecondPlayerName<<" solo numeros del 1 al 3"<<endl;
            cin>>SecondPlayerSelect;
        }
        
    cout<<"La respuesta correcta era: "<<carta<<endl<<endl;

    if (FirstPlayerSelect == carta)
        {
            for (int i = 0; i < 1; i++)
            {
                FirstPlayerScore++;

                cout<<"Puntaje de "<<FirstPlayerName<<" es: "<<FirstPlayerScore<<endl;
            }
            
        }

        else
        {
            for (int i = 0; i < 1; i++)
            {
                FirstPlayerScore = FirstPlayerScore + 0;

                cout<<"Puntaje de "<<FirstPlayerName<<" es: "<<FirstPlayerScore<<endl;
            }
        }

        if (SecondPlayerSelect == carta )
        {
            for (int i = 0; i < 1; i++)
            {
                SecondPlayerScore++;

                cout<<"Puntaje de "<<SecondPlayerName<<" es: "<<SecondPlayerScore<<endl;
                cout<<"Presiona una tecla para continuar . . ."<<endl;
            }
        }

        else
        {
            for (int i = 0; i < 1; i++)
            {
                SecondPlayerScore = SecondPlayerScore + 0;

                cout<<"Puntaje de "<<SecondPlayerName<<" es: "<<SecondPlayerScore<<endl;
                cout<<"Presiona una tecla para continuar . . ."<<endl;
            }
        }

    getch();
        cout<<""<<endl;
        
    } while (SecondPlayerScore < 10 && FirstPlayerScore < 10);
    
    if (SecondPlayerScore >= 10 and FirstPlayerScore >= 10)
    {
        cout<<"Hay un empate!!!"<<endl;
    }
    if (SecondPlayerScore >= 10)
    {
        cout<<SecondPlayerName<<" ha ganado el juego";
    }
    else
        cout<<FirstPlayerName<<" ha ganado el juego";
}

void ThirdPlayersFunction()
{
        setlocale(LC_ALL, "");
    
    string FirstPlayerName, SecondPlayerName, ThirdPlayerName, answer;
    int SecondPlayerScore= 0, FirstPlayerScore = 0, ThirdPlayerScore = 0;
    cout<<"Ingrese el nombre del primer jugador: ";
    cin>>FirstPlayerName;
    cout<<"Ingrese el nombre del segundo jugador: ";
    cin>>SecondPlayerName;
    cout<<"Ingrese el nombre del tercer jugador: ";
    cin>>ThirdPlayerName;
    
    int FirstPlayerSelect, SecondPlayerSelect, ThirdPlayerSelect;
    do
    {

        srand(time(NULL));

        int carta = 1 + rand() % (3 + 1 - 1);

        cout<<""<<endl;
        cout<<R"(
                                                  .----------------------.
                                                  | K#                K# |
                                                  |                      |
                                                  |     +----------+     |
                                                  |     |  //////  |     |
                                                  |     |  |####|  |     |
                                                  |     |  |////|  |     |
                                                  |     |  |####|  |     |
                                                  |     |  //////  |     |
                                                  |     +----------+     |
                                                  |       ||||||||       |
                                                  |      /||||||||\      |
                                                  |     |__________|     |
                                                  |                      |
                                                  |   THE HOLLOW CARD    |
                                                  | K#                K# |
                                                  '----------------------'
)"<<endl;

        cout<<""<<endl;
        cout<<FirstPlayerName<<" introduce un numero del 1 al 3 y comprueba quien tuvo razon:  ";
        cin>>FirstPlayerSelect;
        cout<<""<<endl;
        cout<<SecondPlayerName<<" introduce un numero del 1 al 3 y comprueba quien tuvo razon:  ";
        cin>>SecondPlayerSelect;
        cout<<""<<endl;
        cout<<ThirdPlayerName<<" introduce un numero del 1 al 3 y comprueba quien tuvo razon:  ";
        cin>>ThirdPlayerSelect;
        cout<<""<<endl;
        
        
        while (FirstPlayerSelect <= 0 || FirstPlayerSelect >= 4)
        {
            cout<<endl<<FirstPlayerName<<" solo numeros del 1 al 3"<<endl;
            cin>>FirstPlayerSelect;
        }
        while (SecondPlayerSelect <= 0 || SecondPlayerSelect >= 4)
        {
            cout<<endl<<SecondPlayerName<<" solo numeros del 1 al 3"<<endl;
            cin>>SecondPlayerSelect;
        }
        while (ThirdPlayerSelect <= 0 || ThirdPlayerSelect >= 4)
        {
            cout<<endl<<ThirdPlayerName<<" solo numeros del 1 al 3"<<endl;
            cin>>ThirdPlayerSelect;
        }
        
    cout<<"La respuesta correcta era: "<<carta<<endl<<endl;

    if (FirstPlayerSelect == carta)
        {
            for (int i = 0; i < 1; i++)
            {
                FirstPlayerScore++;

                cout<<"Puntaje de "<<FirstPlayerName<<" es: "<<FirstPlayerScore<<endl;
            }
            
        }

        else
        {
            for (int i = 0; i < 1; i++)
            {
                FirstPlayerScore = FirstPlayerScore + 0;

                cout<<"Puntaje de "<<FirstPlayerName<<" es: "<<FirstPlayerScore<<endl;
            }
        }

        if (SecondPlayerSelect == carta )
        {
            for (int i = 0; i < 1; i++)
            {
                SecondPlayerScore++;

                cout<<"Puntaje de "<<SecondPlayerName<<" es: "<<SecondPlayerScore<<endl;
            }
        }

        else
        {
            for (int i = 0; i < 1; i++)
            {
                SecondPlayerScore = SecondPlayerScore + 0;

                cout<<"Puntaje de "<<SecondPlayerName<<" es: "<<SecondPlayerScore<<endl;
            }
        }

        if (ThirdPlayerSelect == carta )
        {
            for (int i = 0; i < 1; i++)
            {
                ThirdPlayerScore++;

                cout<<"Puntaje de "<<ThirdPlayerName<<" es: "<<ThirdPlayerScore<<endl;
                cout<<"Presiona una tecla para continuar . . ."<<endl;
            }
        }

        else
        {
            for (int i = 0; i < 1; i++)
            {
                ThirdPlayerScore = ThirdPlayerScore + 0;

                cout<<"Puntaje de "<<ThirdPlayerName<<" es: "<<ThirdPlayerScore<<endl;
                cout<<"Presiona una tecla para continuar . . ."<<endl;
            }
        }

    getch();
        cout<<""<<endl;
        
    } while (SecondPlayerScore < 10 && FirstPlayerScore < 10 && ThirdPlayerScore < 10);


    if (SecondPlayerScore >= 10)
    {
        cout<<SecondPlayerName<<" ha ganado el juego ";
    }
    else if (ThirdPlayerScore >= 10)
    {
        cout<<ThirdPlayerName<<" ha ganado el juego ";
    }
    
    else if (FirstPlayerScore >= 10)
    {
        cout<<FirstPlayerName<<" ha ganado el juego ";
    }
    
}

//First DEF
void alone(){
    text(1);
    desition();
    alonefunction();
}

//Second DEF
void TwoPlayers(){
    
    text(1);
    desition();
    TwoPlayersFunction();
}

//Third DEF
void ThirdPlayers(){
    
    text(1);
    desition();
    ThirdPlayersFunction();
}

//Main
int main(){

  int opcion;

  cout<<"\n"<<endl;
  cout<<"                                               -----Waiting the Death-----"<<endl;
  cout<<"                                           presiona una tecla para continuar . . .";
  getch();

  cout<<"\n"<<endl;
  cout<<"                                                 |   1.solitario   |"<<endl;
  cout<<"                                                 | 2.dos jugadores |"<<endl;
  cout<<"                                                 |3.tres jugadores |"<<endl;
  cout<<"                                            ingrese el numero de su opcion: ";
  cin>>opcion;

  switch (opcion)
  {
  case 1:

  alone();

  break;

  case 2:

  TwoPlayers();

  break;

  case 3:

  ThirdPlayers();

  break;
  
  default:

  cout<<""<<endl;
  cout<<"                                    opcion invalida, porfavor ingresa una opcion valida"<<endl;
  cout<<"                                           presiona una tecla para continuar . . .";
  getch();
  
  return main();

   break;
  }
    
    return(0);
}