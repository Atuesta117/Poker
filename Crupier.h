/*
	Clase: 	Crupier
	Curso: Fundamentos de Programación Orientada a Objetos (FPOO)
	Universidad del Valle

	Información CRC:

	Clase: Crupier
	
	Responsabilidades:

	Administrar la mano del crupier y su dinero.

	Repartir cartas, determinar el ganador, mostrar manos.

	Colaboradores: Carta, Mazo, Jugador

	Autor: Juan Jose Atuesta, Sergio Garcia Ramos, Paula Mariana Huertas, David Alejandro Garcia 
	Correo: atuesta.juan@correounivalle.edu.co - sergio.garcia.ramos@correounivalle.edu.co - murillo.paula@correounivalle.edu.co - david.grueso@correounivalle.edu.co]
	Fecha: Abril 2025
  */
#ifndef CRUPIER__H
#define CRUPIER__H

#include "Carta.h"
#include "Mazo.h"
#include "Jugador.h"
#include "Controlador.h"
#include <string>


class Crupier : public Controlador
{
	private:

		// Atributos
		Mazo& mazo;
	/*
		long dinero_total_crupier;
		long apuesta_crupier;
		int valor_mano_crupier;
		vector<Carta> mano_crupier; // Vector para almacenar las cartas del crupier
	*/	
	public:
	
		// Constructor
		Crupier(const string& _nombre, long _dinero, Mazo& _mazo_crupier); 
		
		//funciones
		//void obtener_mano(); // El crupier obtiene una mano inicial de 2 cartas
		//void obtener_carta(); // El crupier obtiene una carta del mazo	
		//bool plantarse();
		void mostrar_mano_parcial();
		//void mostrar_mano_completa();
		//int contar_cartas();
		//bool verificar_blackjack();
		string determinar_ganador(Jugador* jugador);
		void apostar(long _apuesta)override;
		//void jugar_turno(Mazo& mazo)override;
		//void mostrar_mano()override;
        //void apostar(long _apuesta);
		//getter
		//int get_valor_mano_crupier(){return valor_mano_crupier;}
		
		//setter
		//long set_dinero_crupier(long _cantidad_depositar);

		//reiniciar mano
		//void reiniciar_mano();

};


#endif // CRUPIER__H
