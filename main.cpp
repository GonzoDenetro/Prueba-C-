#include <windows.h>
#include "miniwin.h"

using namespace miniwin;


struct Coordenadas {
	int x1;
	int y1;
};

void figura(Coordenadas Figurin){
	color_rgb(247, 37, 133);
	rectangulo_lleno(Figurin.x1, Figurin.y1, Figurin.x1 + 10, Figurin.y1 + 10);
}

void Malo(Coordenadas Villano){
	color_rgb(249, 65, 68);
	rectangulo_lleno(Villano.x1, Villano.y1, Villano.x1 + 10, Villano.y1 + 10);
}
/*void moverFigura(){
	
}*/

void pintarVentana(){
	vredimensiona(1000, 600); //Dimensionar ventana
	color_rgb(3, 4, 94);
	rectangulo_lleno(0, 0, 1000, 600);
}
void pintarMalos(){
	Coordenadas Villano = {140, 85};
	Malo(Villano);
}

int main(){
	
	int tecla_actual;
	
	vredimensiona(1000, 600); //Dimensionar ventana
	color_rgb(3, 4, 94);
	rectangulo_lleno(0, 0, 1000, 600);
	
	Coordenadas Figurin = {10, 40}; //iNICIA X 10 y termina x 20, y en Y empieza 40 y termina 50
	figura(Figurin);
	
	Coordenadas Villano = {150, 90};
	Malo(Villano);
	
	/* color_rgb(0, 180, 216);
	circulo_lleno(x, y, 20); */
	
	tecla_actual = int(ARRIBA);
	refresca();
	
	while(tecla_actual != int(ESCAPE)){
		tecla_actual = tecla();
		
		if(tecla_actual == int(DERECHA)){
			if(Figurin.x1 >= 980){
				Figurin.x1 = 980;
			}
			else {			
				Figurin.x1 = Figurin.x1 + 15;
				borra();
				pintarVentana();
				pintarMalos();
				figura(Figurin);
				tecla_actual = tecla();
			}	
		}
		else if(tecla_actual == int(IZQUIERDA)){
			if(Figurin.x1 <= 20){
				Figurin.x1 = 20;
			} 
			else {
				Figurin.x1 = Figurin.x1 - 15;
			
			borra();
			pintarVentana();
			pintarMalos();
			
			figura(Figurin);
			tecla_actual = tecla();
			}
		}
		else if(tecla_actual == int(ARRIBA))
		{
			if(Figurin.y1 <= 10){
				Figurin.y1 = 10;
			} 
			else {
				Figurin.y1 = Figurin.y1 - 15;
			
			borra();
			pintarVentana();
			pintarMalos();
			figura(Figurin);
			tecla_actual = tecla();
			}
		}
		else if(tecla_actual == int(ABAJO)){
			Figurin.y1 = Figurin.y1 + 15;
			
			borra();
			pintarVentana();
			pintarMalos();
			
			figura(Figurin);
			tecla_actual = tecla();
		}
		
		if(Figurin.x1 + 12 >= Villano.x1 && Figurin.y1 <= Villano.y1){
			mensaje("Perdiste");
			Figurin.x1 = 10;
			Figurin.y1 = 40;
			borra();
			pintarVentana();
			pintarMalos();
			
			figura(Figurin);
			tecla_actual = tecla();
		}
		
		refresca();
		tecla_actual = tecla();
		espera(100);
			
	}
}
