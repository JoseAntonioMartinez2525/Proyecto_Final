#include <iostream>
#include <cstdlib.h>
#include <windows.h>
#include <conio.h>
#include <ctime.h>
#include <stdlib.h>
#include <time.h>

using namespace std;

struct sgiro{
    int color;
  char figura[3][3];
  int alto;
  int ancho;
};
struct sfigura{
  sgiro giro[4];
};

sfigura figuras[5];
int nfigura;
int ngiro;
int x, y;

void gotoxy(int x, int y){
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos;

    pos.X = x;
    pos.Y = y;

    SetConsoleCursorPosition(hConsole, pos);
}
void setColor(int colores);
int backcolor=0;
int backcolorF=0;
int colores[7]={
    0x009,
    0x00E,
    0x00C,
    0x002,
    0x00B,
    0x005,
    0x00F,

};


void color_T1();
void color_E();
void color_T2();
void color_r();
void color_i();
void color_s();
void pintura_dentro(int colores);
void portada();
void instrucciones();
void Creditos();
void mapa_juego(){
 figuras[0].giro[0].color=BLUE;figuras[0].giro[0].alto=2;figuras[0].giro[0].ancho=2;figuras[0].giro[0].figura[0][0]=219;figuras[0].giro[0].figura[0][1]=219;figuras[0].giro[0].figura[1][0]=219;figuras[0].giro[0].figura[1][1]=219;
    figuras[0].giro[0].color=BLUE;figuras[0].giro[1].alto=2;figuras[0].giro[1].ancho=2;figuras[0].giro[1].figura[0][0]=219;figuras[0].giro[1].figura[0][1]=219;figuras[0].giro[1].figura[1][0]=219;figuras[0].giro[1].figura[1][1]=219;
    figuras[0].giro[0].color=BLUE;figuras[0].giro[2].alto=2;figuras[0].giro[2].ancho=2;figuras[0].giro[2].figura[0][0]=219;figuras[0].giro[2].figura[0][1]=219;figuras[0].giro[2].figura[1][0]=219;figuras[0].giro[2].figura[1][1]=219;
    figuras[0].giro[0].color=BLUE;figuras[0].giro[3].alto=2;figuras[0].giro[3].ancho=2;figuras[0].giro[3].figura[0][0]=219;figuras[0].giro[3].figura[0][1]=219;figuras[0].giro[3].figura[1][0]=219;figuras[0].giro[3].figura[1][1]=219;

    figuras[0].giro[0].color=RED;figuras[1].giro[0].alto=3;figuras[1].giro[0].ancho=2;figuras[1].giro[0].figura[0][0]=219;figuras[1].giro[0].figura[0][1]=32;figuras[1].giro[0].figura[1][0]=219;figuras[1].giro[0].figura[1][1]=32;figuras[1].giro[0].figura[2][0]=219;figuras[1].giro[0].figura[2][1]=219;
    figuras[0].giro[0].color=RED;figuras[1].giro[1].alto=2;figuras[1].giro[1].ancho=3;figuras[1].giro[1].figura[0][0]=32;figuras[1].giro[1].figura[0][1]=32;figuras[1].giro[1].figura[0][2]=219;figuras[1].giro[1].figura[1][0]=219;figuras[1].giro[1].figura[1][1]=219;figuras[1].giro[1].figura[1][2]=219;
    figuras[0].giro[0].color=RED;figuras[1].giro[2].alto=3;figuras[1].giro[2].ancho=2;figuras[1].giro[2].figura[0][0]=219;figuras[1].giro[2].figura[0][1]=219;figuras[1].giro[2].figura[1][0]=32;figuras[1].giro[2].figura[1][1]=219;figuras[1].giro[2].figura[2][0]=32;figuras[1].giro[2].figura[2][1]=219;
    figuras[0].giro[0].color=RED;figuras[1].giro[3].alto=2;figuras[1].giro[3].ancho=3;figuras[1].giro[3].figura[0][0]=219;figuras[1].giro[3].figura[0][1]=219;figuras[1].giro[3].figura[0][2]=219;figuras[1].giro[3].figura[1][0]=219;figuras[1].giro[3].figura[1][1]=32;figuras[1].giro[3].figura[1][2]=32;

    figuras[0].giro[0].color=YELLOW;figuras[2].giro[0].alto=3;figuras[2].giro[0].ancho=2;figuras[2].giro[0].figura[0][0]=219;figuras[2].giro[0].figura[0][1]=32;figuras[2].giro[0].figura[1][0]=219;figuras[2].giro[0].figura[1][1]=219;figuras[2].giro[0].figura[2][0]=219;figuras[2].giro[0].figura[2][1]=32;
    figuras[0].giro[0].color=YELLOW;figuras[2].giro[1].alto=2;figuras[2].giro[1].ancho=3;figuras[2].giro[1].figura[0][0]=32;figuras[2].giro[1].figura[0][1]=219;figuras[2].giro[1].figura[0][2]=32;figuras[2].giro[1].figura[1][0]=219;figuras[2].giro[1].figura[1][1]=219;figuras[2].giro[1].figura[1][2]=219;
    figuras[0].giro[0].color=YELLOW;figuras[2].giro[2].alto=3;figuras[2].giro[2].ancho=2;figuras[2].giro[2].figura[0][0]=32;figuras[2].giro[2].figura[0][1]=219;figuras[2].giro[2].figura[1][0]=219;figuras[2].giro[2].figura[1][1]=219;figuras[2].giro[2].figura[2][0]=32;figuras[2].giro[2].figura[2][1]=219;
    figuras[0].giro[0].color=YELLOW;figuras[2].giro[3].alto=2;figuras[2].giro[3].ancho=3;figuras[2].giro[3].figura[0][0]=219;figuras[2].giro[3].figura[0][1]=219;figuras[2].giro[3].figura[0][2]=219;figuras[2].giro[3].figura[1][0]=32;figuras[2].giro[3].figura[1][1]=219;figuras[2].giro[3].figura[2][1]=32;

    figuras[0].giro[0].color=CYAN;figuras[3].giro[0].alto=2;figuras[3].giro[0].ancho=3;figuras[3].giro[0].figura[0][0]=219;figuras[3].giro[0].figura[0][1]=219;figuras[3].giro[0].figura[0][2]=32;figuras[3].giro[0].figura[1][0]=32;figuras[3].giro[0].figura[1][1]=219;figuras[3].giro[0].figura[1][2]=219;
    figuras[0].giro[0].color=CYAN;figuras[3].giro[1].alto=3;figuras[3].giro[1].ancho=2;figuras[3].giro[1].figura[0][0]=32;figuras[3].giro[1].figura[0][1]=219;figuras[3].giro[1].figura[1][0]=219;figuras[3].giro[1].figura[1][1]=219;figuras[3].giro[1].figura[2][0]=219;figuras[3].giro[1].figura[2][1]=32;
    figuras[0].giro[0].color=CYAN;figuras[3].giro[2].alto=2;figuras[3].giro[2].ancho=3;figuras[3].giro[2].figura[0][0]=219;figuras[3].giro[2].figura[0][1]=219;figuras[3].giro[2].figura[0][2]=32;figuras[3].giro[2].figura[1][0]=32;figuras[3].giro[2].figura[1][1]=219;figuras[3].giro[2].figura[1][2]=219;
    figuras[0].giro[0].color=CYAN;figuras[3].giro[3].alto=3;figuras[3].giro[3].ancho=2;figuras[3].giro[3].figura[0][0]=32;figuras[3].giro[3].figura[0][1]=219;figuras[3].giro[3].figura[1][0]=219;figuras[3].giro[3].figura[1][1]=219;figuras[3].giro[3].figura[2][0]=219;figuras[3].giro[3].figura[2][1]=32;

    figuras[0].giro[0].color=MAGENTA;figuras[4].giro[0].alto=3;figuras[4].giro[0].ancho=1;figuras[4].giro[0].figura[0][0]=219;figuras[4].giro[0].figura[1][0]=219;figuras[4].giro[0].figura[2][0]=219;
    figuras[0].giro[0].color=MAGENTA;figuras[4].giro[1].alto=1;figuras[4].giro[1].ancho=3;figuras[4].giro[1].figura[0][0]=219;figuras[4].giro[1].figura[0][1]=219;figuras[4].giro[1].figura[0][2]=219;
    figuras[0].giro[0].color=MAGENTA;figuras[4].giro[2].alto=3;figuras[4].giro[2].ancho=1;figuras[4].giro[2].figura[0][0]=219;figuras[4].giro[2].figura[1][0]=219;figuras[4].giro[2].figura[2][0]=219;
    figuras[0].giro[0].color=MAGENTA;figuras[4].giro[3].alto=1;figuras[4].giro[3].ancho=3;figuras[4].giro[3].figura[0][0]=219;figuras[4].giro[3].figura[0][1]=219;figuras[4].giro[3].figura[0][2]=219;


}
COORD posicion;
int main()
{
    int op=0;
    bool pw=true;
    int puntaje=0;
    color_T1();
    color_E();
    color_T2();
    color_r();
    color_i();
    color_s();
    portada();


while (pw){

        gotoxy(15,14);cout<<"Ingrese la opcion: ";
        cin >> op;

        switch (op) {
            case 1:

                instrucciones();
                break;
            case 2:
		Creditos();
                break;
            default:
                pw = false;
                break;
        }
    }
    system("CLS");
    mapa_juego();

    char mapa [24][31] ={186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        186,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,186,
                        200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188};

    int color[24][31]={GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                      GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                      GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,LIGHTGRAY,GREEN,
                     GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN,GREEN};

        gotoxy(60,34);cout<<"puntaje: "<<puntaje<<endl;
    bool salir= false;
    bool completo=true;
    const char bloque=219;
    const int margenx=25;
    const int margeny=0;
    int i,j;
    int tecla;
    const int IZQUIERDA=75;
    const int DERECHA=77;
    const int ARRIBA=72; //rotar
    sgiro xfig;
    sgiro tfigura;
    x=13;
    y=0;
    bool SeMueve = true;
    bool pedirFigura=true;
    bool choque = true;
    int tgiro, opciones;



    srand(time(NULL));
    nfigura=rand()%5; //admite 5 figuras(de 0 A 4)
    srand(time(NULL));
    ngiro=rand()%3; //admite 4 giros(de 0 A 3)
    xfig= figuras[nfigura].giro[ngiro]; //manda a llamar a la figura(aleatoriamente)

    do{
      choque=false;
      do{


            textcolor(1);
        for(i=0;i<24;i++){
            for(j=0;j<31;j++){
                posicion.X=j+margenx;
                posicion.Y=i+margeny;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),posicion);
                cprintf("%c",mapa[i][j]); //tablero
                //cout<<mapa[i][j];
                //gotoxy(j+margenx+1,i+margeny+1);


            }

        }
        textcolor(7);
        for(int i=0;i<xfig.alto;i++){
            for(int j=0; j<xfig.ancho;j++){
                posicion.X=x+j+margenx;
                posicion.Y=y+i+margeny;
                SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),posicion);
                //cout<<xfig.figura[i][j];
                //textcolor(xfig.color);
                cprintf("%c",xfig.figura[i][j]); //figura

            }
        }
        Sleep(100);
        if(kbhit()){ //al presionar la tecla
            tecla=getch(); //pausa
            switch(tecla){ //dependiendo de la tecla que se presione
            case IZQUIERDA:
                if(x-1>0){
                        SeMueve=true;
                    for(i=0;i<xfig.alto;i++){
                        for(j=0;j<xfig.ancho;j++){
                            if(xfig.figura[i][j]==219&& mapa[y+i][x+j-1]==219){ //posicion de la figura no choque con otra y no permitir que la figura se vaya del tablero
                                SeMueve=false;
                            }
                        }
                    }
                    if(SeMueve){
                      x--;
                    }
                }
                break;
            case DERECHA:
                if(x+1+xfig.ancho<31){
                    SeMueve=true;
                    for(i=0;i<xfig.alto;i++){
                        for(j=0;j<xfig.ancho;j++){
                            if(xfig.figura[i][j]==219&& mapa[y+i][x+j+1]==219){
                                SeMueve=false;
                            }
                        }
                    }
                    if(SeMueve){
                      x++;
                    }
                }
                break;
            case ARRIBA:
                if(ngiro<3){
                    tgiro=ngiro+1;
                }else{
                tgiro=0;
                }

                tfigura=figuras[nfigura].giro[tgiro];

                for(i=0;i<tfigura.alto;i++){
                    for(j=0;j<tfigura.ancho;j++){
                        if(tfigura.figura[i][j]==219&& mapa[y+i][x+j]==219){
                            SeMueve=false;
                        }
                    }
                }

              if(SeMueve) {
                ngiro=tgiro;
                xfig=tfigura;
              }
               break;
            }
        }
        else{//preguntar si se puede bajar y //verificar si hay choque

                if(y+1+xfig.alto<=23){
                   SeMueve=true;
                    for(i=0;i<xfig.alto;i++){
                        for(j=0;j<xfig.ancho;j++){
                            if(xfig.figura[i][j]!=32&& mapa[y+i+1][x+j]!=32){ //si jay espacio en el tablero
                                SeMueve=false;
                                choque=true;
                            }
                        }
                    }
                    if(SeMueve){
                      y++;
                    }
                }
                else{
                    choque=true;
                }

            }
    }while(!choque);

    i=0;
    do {
        j=0;
        do {
          if(xfig.figura[i][j]!=32){
            mapa[y+i][x+j] = 219; //figura ascii
            //color[y+i][x+j]=xfig.color;
          }

         j++;
        }while(j<xfig.ancho);//mientras que posicion j sea menor al ancho de la figura
        i++;
    }while(i<xfig.alto); //mientras que posicion i sea menor a la altura de la figura

//verificar renglones
    y=22;
    do{
        completo=true;

        for(x=1;x<30;x++){
            if(mapa[y][x]!=bloque){
                completo=false;
            }
        }
        if(completo){//limpiar renglones
puntaje+=100;gotoxy(60,34);cout<<"puntaje: "<<puntaje<<endl;
        i=y-1;
        do {
            j=1;
          do{
             mapa[i+1][j]=mapa[i][j];
             j++;

            }while(j<31);               //acomodar el renglon
            i--;
           }while(i>0);                 //reestablecer la i
            j=1;
        do {
           mapa[0][j]=32;
            j++;
           }while(j<31);

                   }else{
                      y--;


                        }
      }while(y>=0);

//pedir nueva figura
    srand(time(NULL));
    nfigura=rand()%5;
    srand(time(NULL));
    ngiro=rand()%3;
    xfig= figuras[nfigura].giro[ngiro];
    x=13;
    y=0;
//preguntar si cabe figura
    SeMueve=true;
    for(i=0;i<xfig.alto;i++){
        for(j=0;j<xfig.ancho;j++){
            if(xfig.figura[i][j]!=32&& mapa[y+i][x+j]!=32){
                SeMueve=false;
            }
        }
    }
    pedirFigura=!SeMueve;
if(puntaje==100)
{
    gotoxy(60,33);cout<<"Juego terminado"<<endl;
gotoxy(60,34);cout<<"puntaje: "<<puntaje<<endl;
     exit(0);
}

 }while(!pedirFigura);
gotoxy(60,33);cout<<"Juego terminado"<<endl;
gotoxy(60,34);cout<<"puntaje: "<<puntaje<<endl;

   exit(0);
}


void portada(){
    gotoxy(15,12);cout<<"<===1.Instrucciones===>"<<endl;
    gotoxy(15,13);cout<<"<===2.Creditos===>"<<endl;
    gotoxy(15,14);cout<<"<===3.Jugar===>"<<endl;
    Sleep(7000);
     system("CLS");
}
void instrucciones(){

    textcolor(BLUE);
    gotoxy(15,15);cprintf("Instrucciones del juego: ");
    gotoxy(15,16);cprintf("Presione la tecla -> para desplazarse a la derecha");
    gotoxy(15,17);cprintf("Presione la tecla <- para desplazarse a la izquierda");
    gotoxy(15,18);cprintf("Presione la tecla arriba para rotar la figura");
     Sleep(5000);
     system("CLS");

}
void Creditos(){
    setColor(colores[3]);
    gotoxy(15,17);cout<<"Creditos: "<<endl;
    gotoxy(15,18);cout<<"Este proyecto fue elaborado por Jose Antonio Martinez del Toro"<<endl;
    gotoxy(15,19);cout<<"Prtofesor Programador: Jonathan Soto Muñoz"<<endl;
    gotoxy(15,20);cout<<"Carrera: Ingenieria de desarrollo de software "<<endl;
     Sleep(5000);
     system("CLS");
}

void color_T1(){
setColor(colores[1]);


gotoxy(13,5);cout<<char(219);
gotoxy(14,5);cout<<char(219);
gotoxy(15,5);cout<<char(219);
gotoxy(14,6);cout<<char(219);
gotoxy(14,7);cout<<char(219);
gotoxy(14,8);cout<<char(219);
gotoxy(14,9);cout<<char(219);
gotoxy(14,10);cout<<char(219);

}

void color_E(){
    setColor(colores[3]);
    gotoxy(17,6);cout<<char(219);
    gotoxy(17,7);cout<<char(219);
    gotoxy(17,8);cout<<char(219);
    gotoxy(17,9);cout<<char(219);
    gotoxy(17,10);cout<<char(219);
    gotoxy(18,6);cout<<char(219);
    gotoxy(18,8);cout<<char(219);
    gotoxy(18,10);cout<<char(219);
    gotoxy(19,6);cout<<char(219);
    gotoxy(19,7);cout<<char(219);
    gotoxy(19,8);cout<<char(219);
    gotoxy(19,10);cout<<char(219);
}

void color_T2(){
setColor(colores[2]);
gotoxy(21,7);cout<<char(219);
gotoxy(22,6);cout<<char(219);
gotoxy(22,7);cout<<char(219);
gotoxy(22,8);cout<<char(219);
gotoxy(22,9);cout<<char(219);
gotoxy(22,10);cout<<char(219);
gotoxy(23,7);cout<<char(219);
}

void color_r(){
setColor(colores[4]);

gotoxy(25,7);cout<<char(219);
gotoxy(25,8);cout<<char(219);
gotoxy(25,9);cout<<char(219);
gotoxy(25,10);cout<<char(219);
gotoxy(26,7);cout<<char(219);
}

void color_i(){
setColor(colores[5]);
gotoxy(28,6);cout<<char(219);
gotoxy(28,8);cout<<char(219);
gotoxy(28,9);cout<<char(219);
gotoxy(28,10);cout<<char(219);
}

void color_s(){
setColor(colores[6]);
gotoxy(30,6);cout<<char(219);
gotoxy(30,7);cout<<char(219);
gotoxy(30,8);cout<<char(219);
gotoxy(30,10);cout<<char(219);
gotoxy(31,6);cout<<char(219);
gotoxy(31,8);cout<<char(219);
gotoxy(31,10);cout<<char(219);
gotoxy(32,6);cout<<char(219);
gotoxy(32,8);cout<<char(219);
gotoxy(32,9);cout<<char(219);
gotoxy(32,10);cout<<char(219);

}
void setColor(int colores)
{
    static HANDLE hConsole;
    hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute( hConsole, colores | (backcolor * 0x10 + 0x100));

}
void pintura_dentro(int colores)
{
    static HANDLE hConsole;
    hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute( hConsole, colores | (backcolor *0x10 *0x100));
}
