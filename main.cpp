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

void moverFigura(){
	
}

int main(){
	
	int tecla_actual;
	
	vredimensiona(1000, 600); //Dimensionar ventana
	color_rgb(3, 4, 94);
	rectangulo_lleno(0, 0, 1000, 600);
	
	Coordenadas Figurin = {10, 40}; //iNICIA X 10 y termina x 20, y en Y empieza 40 y termina 50
	figura(Figurin);
	
	/* color_rgb(0, 180, 216);
	circulo_lleno(x, y, 20); */
	
	tecla_actual = int(ARRIBA);
	refresca();
	
	while(tecla_actual != int(ESCAPE)){
		tecla_actual = tecla();
		
		if(tecla_actual == int(DERECHA)){
			/*x = x + 10;
			color_rgb(0, 180, 216);
			circulo_lleno(x, y, 20);
			tecla_actual = tecla();*/
			
			Figurin.x1 = Figurin.x1 + 15;
			borra();
			vredimensiona(1000, 600); //Dimensionar ventana
			color_rgb(3, 4, 94);
			rectangulo_lleno(0, 0, 1000, 600);
			figura(Figurin);
			tecla_actual = tecla();
		}
		else if(tecla_actual == int(IZQUIERDA)){
			Figurin.x1 = Figurin.x1 - 15;
			figura(Figurin);
			tecla_actual = tecla();
		}
		
		refresca();
		tecla_actual = tecla();
		espera(100);	
	}
}
