#ifndef INTERFARE_H
#define INTERFARE_H
#include <iostream>
#include <string>
#include <vector>
#include "Carta.h"
#include "Jugador.h"
#include "Crupier.h"
using namespace std;
// Interfaz.h
class Jugador;
class Crupier;

class Interfaz{
    private:
        void dibujar_catra(Carta& cartas);
        void dibujar_carta_oculta();
        
        
    public:
    Interfaz();
    void mostrar_mano(Jugador* jugador);
    void mostrar_mano(Crupier* crupier);
    void mostrar_mano_parcial(Crupier* crupier);
    void mostrar_valor_mano(Jugador* jugador);
    void mostrar_valor_mano(Crupier* crupier);
    void mostrar_ganador(string mensaje);
    string mostrar_menu_inicio();
    string mostrar_menu_juego(Jugador* jugador);
    string mostrar_menu_jugador();
    
    void interfaz_turno(Jugador* jugador, Mazo& mazo);
    void interfaz_turno(Crupier* crupier,Jugador* jugador,  Mazo& mazo); 
    void logo(); 
    void imprimir_divicion();
    void mensaje_error();
    void esperar_enter();
};

#endif // INTERFARE_H