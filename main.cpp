#include <windows.h>
#include "miniwin.h"

using namespace miniwin;


struct Coordenadas {
	int x1;
	int y1;
};

//FUNCION PARA PINTAR A NUESTRO PERSONAJE
void figura(Coordenadas Figurin){
	color (NEGRO);
	linea (Figurin.x1+4, Figurin.y1+42, Figurin.x1+8, Figurin.y1+42);
	color (NEGRO);
	linea (Figurin.x1+8, Figurin.y1+42, Figurin.x1+8, Figurin.y1+40);
	color (NEGRO);
	linea (Figurin.x1+8, Figurin.y1+40, Figurin.x1+12, Figurin.y1+40);
	color (NEGRO);
	//linea (Figurin.x1+12, Figurin.y1+40, Figurin.x1+12, Figurin.x1+38);
	color (NEGRO);
	linea (Figurin.x1+12, Figurin.y1+38, Figurin.x1+16, Figurin.y1+38);
	color (NEGRO);
	linea (Figurin.x1+16, Figurin.y1+38, Figurin.x1+16, Figurin.y1+36);
	color (NEGRO);
	linea (Figurin.x1+16, Figurin.y1+36, Figurin.x1+22, Figurin.y1+36);
	color (NEGRO);
	linea (Figurin.x1+22, Figurin.y1+36, Figurin.x1+22, Figurin.y1+38);
	color (NEGRO);
	linea (Figurin.x1 + 22, Figurin.y1+38, Figurin.x1+26, Figurin.y1+38);
	color (NEGRO);
	linea (Figurin.x1+26, Figurin.y1+38, Figurin.x1+26, Figurin.y1+42);
	color (NEGRO);
	linea (Figurin.x1+26, Figurin.y1+42, Figurin.x1+34, Figurin.y1+42);
	color (NEGRO);
	//linea (Figurin.x1+34, Figurin.y1+42, Figurin.x1+34, Figurin.x1+38);
	color (NEGRO);
	linea (Figurin.x1+34, Figurin.y1+38, Figurin.x1+38, Figurin.y1+38);
	color (NEGRO);
	linea (Figurin.x1+38, Figurin.y1+38, Figurin.x1+38, Figurin.y1+36);
	color (NEGRO);
	linea (Figurin.x1+38, Figurin.y1+36, Figurin.x1+40, Figurin.y1+36);
	color (NEGRO);
	linea (Figurin.x1+40, Figurin.y1+36, Figurin.x1+40, Figurin.y1+34);
	color (NEGRO);
	linea (Figurin.x1+40, Figurin.y1+34, Figurin.x1+48, Figurin.y1+34);
	color (NEGRO);
	linea (Figurin.x1+48, Figurin.y1+34, Figurin.x1+48, Figurin.y1+30);
	color (NEGRO);
	linea (Figurin.x1+48, Figurin.y1+30, Figurin.x1+58, Figurin.y1+30);
	color (NEGRO);
	linea (Figurin.x1+58, Figurin.y1+30, Figurin.x1+58, Figurin.y1+26);
	color (NEGRO);
	linea (Figurin.x1+58, Figurin.y1+26, Figurin.x1+66, Figurin.y1+26);
	color (NEGRO);
	linea (Figurin.x1+66, Figurin.y1+26, Figurin.x1+66, Figurin.y1+22);
	color (NEGRO);
	linea (Figurin.x1+66, Figurin.y1+22, Figurin.x1+82, Figurin.y1+22);
	color (NEGRO);
	//linea (Figurin.x1+82, Figurin.y1+22, Figurin.x1+82, Figurin.y1+18);
	color (NEGRO);
	//linea (Figurin.x1+82, Figurin.y1+18, Figurin.x1+96, Figurin.x1+18);
	color (NEGRO);
	linea (Figurin.x1+96, Figurin.y1+18, Figurin.x1+96, Figurin.y1+16);
	color (NEGRO);
	linea (Figurin.x1+96, Figurin.y1+16, Figurin.x1+106, Figurin.y1+16);
	color (NEGRO);
	linea (Figurin.x1+106, Figurin.y1+16, Figurin.x1+106, Figurin.y1+18);
	color (NEGRO);
	linea (Figurin.x1+106, Figurin.y1+18, Figurin.x1+112, Figurin.y1+18);
	color (NEGRO);
	linea (Figurin.x1+112, Figurin.y1+18, Figurin.x1+112, Figurin.y1+20);
	color (NEGRO);
	linea (Figurin.x1+112, Figurin.y1+20, Figurin.x1+118, Figurin.y1+20);
	color (NEGRO);
	linea (Figurin.x1+118, Figurin.y1+20, Figurin.x1+118, Figurin.y1+22);
	color (NEGRO);
	linea (Figurin.x1+118, Figurin.y1+22, Figurin.x1+126, Figurin.y1+22);
	color (NEGRO);
	linea (Figurin.x1+126, Figurin.y1+22, Figurin.x1+126, Figurin.y1+24);
	color (NEGRO);
	linea (Figurin.x1+126, Figurin.y1+24, Figurin.x1+130, Figurin.y1+24);
	color (NEGRO);
	linea (Figurin.x1+130, Figurin.y1+24, Figurin.x1+130, Figurin.y1+30);
	color (NEGRO);
	linea (Figurin.x1+130, Figurin.y1+30, Figurin.x1+136, Figurin.y1+30);
	color (NEGRO);
	linea (Figurin.x1+136, Figurin.y1+30, Figurin.x1+136, Figurin.y1+38);
	color (NEGRO);
	//linea (Figurin.x1+136, Figurin.y1+38, Figurin.x1+120, Figurin.x1+38);
	color (NEGRO);
	linea (Figurin.x1+120, Figurin.y1+38, Figurin.x1+120, Figurin.y1+40);
	color (NEGRO);
	linea (Figurin.x1+120, Figurin.y1+40, Figurin.x1+116, Figurin.y1+40);
	color (NEGRO);
	linea (Figurin.x1+116, Figurin.y1+40, Figurin.x1+116, Figurin.y1+42);
	color (NEGRO);
	linea (Figurin.x1+116, Figurin.y1+40, Figurin.x1+116, Figurin.y1+42);
	color (NEGRO);
	linea (Figurin.x1+116, Figurin.y1+42, Figurin.x1+110, Figurin.y1+42);
	color (NEGRO);
	linea (Figurin.x1+110, Figurin.y1+42, Figurin.x1+110, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+110, Figurin.y1+44, Figurin.x1+100, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+100, Figurin.y1+44, Figurin.x1+100, Figurin.y1+48);
	color (NEGRO);
	linea (Figurin.x1+100, Figurin.y1+48, Figurin.x1+104, Figurin.y1+48);
	color (NEGRO);
	//linea (Figurin.x1+104, Figurin.y1+48, Figurin.x1+104, Figurin.x1+52);
	color (NEGRO);
	linea (Figurin.x1+104, Figurin.y1+52, Figurin.x1+110, Figurin.y1+52);
	color (NEGRO);
	linea (Figurin.x1+110, Figurin.y1+52, Figurin.x1+110, Figurin.y1+56);
	color (NEGRO);
	linea (Figurin.x1+110, Figurin.y1+56, Figurin.x1+116, Figurin.y1+56);
	color (NEGRO);
	linea (Figurin.x1+116, Figurin.y1+56, Figurin.x1+116, Figurin.y1+60);
	color (NEGRO);
	linea (Figurin.x1+116, Figurin.y1+60, Figurin.x1+106, Figurin.y1+60);
	color (NEGRO);
	linea (Figurin.x1+106, Figurin.y1+60, Figurin.x1+106, Figurin.y1+56);
	color (NEGRO);
	linea (Figurin.x1+106, Figurin.y1+56, Figurin.x1+100, Figurin.y1+56);
	color (NEGRO);
	linea (Figurin.x1+100, Figurin.y1+56, Figurin.x1+100, Figurin.y1+54);
	color (NEGRO);
	linea (Figurin.x1+100, Figurin.y1+54, Figurin.x1+94, Figurin.y1+54);
	color (NEGRO);
	linea (Figurin.x1+94, Figurin.y1+54, Figurin.x1+94, Figurin.y1+50);
	color (NEGRO);
	linea (Figurin.x1+94, Figurin.y1+50, Figurin.x1+92, Figurin.y1+50);
	color (NEGRO);
	linea (Figurin.x1+92, Figurin.y1+50, Figurin.x1+92, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+92, Figurin.y1+46, Figurin.x1+88, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+88, Figurin.y1+46, Figurin.x1+88, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+88, Figurin.y1+44, Figurin.x1+76, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+76, Figurin.y1+44, Figurin.x1+76, Figurin.y1+42);
	color (NEGRO);
	linea (Figurin.x1+76, Figurin.y1+42, Figurin.x1+66, Figurin.y1+42);
	color (NEGRO);
	linea (Figurin.x1+66, Figurin.y1+42, Figurin.x1+66, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+66, Figurin.y1+44, Figurin.x1+56, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+56, Figurin.y1+44, Figurin.x1+56, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+56, Figurin.y1+46, Figurin.x1+52, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+52, Figurin.y1+46, Figurin.x1+52, Figurin.y1+52);
	color (NEGRO);
	linea (Figurin.x1+52, Figurin.y1+52, Figurin.x1+46, Figurin.y1+52);
	color (NEGRO);
	linea (Figurin.x1+46, Figurin.y1+52, Figurin.x1+46, Figurin.y1+54);
	color (NEGRO);
	linea (Figurin.x1+46, Figurin.y1+54, Figurin.x1+42, Figurin.y1+54);
	color (NEGRO);
	linea (Figurin.x1+42, Figurin.y1+54, Figurin.x1+42, Figurin.y1+56);
	color (NEGRO);
	linea (Figurin.x1+42, Figurin.y1+56, Figurin.x1+46, Figurin.y1+56);
	color (NEGRO);
	linea (Figurin.x1+46, Figurin.y1+56, Figurin.x1+46, Figurin.y1+60);
	color (NEGRO);
	linea (Figurin.x1+46, Figurin.y1+60, Figurin.x1+34, Figurin.y1+60);
	color (NEGRO);
	linea (Figurin.x1+34, Figurin.y1+60, Figurin.x1+34, Figurin.y1+54);
	color (NEGRO);
	linea (Figurin.x1+34, Figurin.y1+54, Figurin.x1+36, Figurin.y1+54);
	color (NEGRO);
	linea (Figurin.x1+36, Figurin.y1+54, Figurin.x1+36, Figurin.y1+52);
	color (NEGRO);
	linea (Figurin.x1+36, Figurin.y1+52, Figurin.x1+40, Figurin.y1+52);
	color (NEGRO);
	linea (Figurin.x1+40, Figurin.y1+52, Figurin.x1+40, Figurin.y1+50);
	color (NEGRO);
	linea (Figurin.x1+40, Figurin.y1+50, Figurin.x1+44, Figurin.y1+50);
	color (NEGRO);
	linea (Figurin.x1+44, Figurin.y1+50, Figurin.x1+44, Figurin.y1+48);
	color (NEGRO);
	linea (Figurin.x1+44, Figurin.y1+48, Figurin.x1+46, Figurin.y1+48);
	color (NEGRO);
	linea (Figurin.x1+46, Figurin.y1+48, Figurin.x1+46, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+46, Figurin.y1+44, Figurin.x1+42, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+42, Figurin.y1+44, Figurin.x1+42, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+42, Figurin.y1+46, Figurin.x1+36, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+36, Figurin.y1+46, Figurin.x1+36, Figurin.y1+48);
	color (NEGRO);
	linea (Figurin.x1+36, Figurin.y1+48, Figurin.x1+22, Figurin.y1+48);
	color (NEGRO);
	linea (Figurin.x1+22, Figurin.y1+48, Figurin.x1+22, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+22, Figurin.y1+46, Figurin.x1+20, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+20, Figurin.y1+46, Figurin.x1+20, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+20, Figurin.y1+44, Figurin.x1+18, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+18, Figurin.y1+44, Figurin.x1+18, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+18, Figurin.y1+46, Figurin.x1+16, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+16, Figurin.y1+46, Figurin.x1+16, Figurin.y1+48);
	color (NEGRO);
	linea (Figurin.x1+16, Figurin.y1+48, Figurin.x1+4, Figurin.y1+48);
	color (NEGRO);
	linea (Figurin.x1+4, Figurin.y1+48, Figurin.x1+4, Figurin.y1+42); 
	
	//Color del chita/
	
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+6, Figurin.y1+44, Figurin.x1+16, Figurin.y1+46);
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+14, Figurin.y1+46, Figurin.x1+16, Figurin.y1+48);
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+6, Figurin.y1+46, Figurin.x1+14, Figurin.y1+48);
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+16, Figurin.y1+44, Figurin.x1+18, Figurin.y1+46);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+4, Figurin.y1+42, Figurin.x1+6, Figurin.y1+48);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+4, Figurin.y1+42, Figurin.x1+16, Figurin.y1+44);
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+16, Figurin.y1+42, Figurin.x1+22, Figurin.y1+44);
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+20, Figurin.y1+44, Figurin.x1+24, Figurin.y1+46);
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+22, Figurin.y1+46, Figurin.x1+26, Figurin.y1+48);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+8, Figurin.y1+40, Figurin.x1+26, Figurin.y1+42);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+12, Figurin.y1+38, Figurin.x1+26, Figurin.y1+40);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+16, Figurin.y1+36, Figurin.x1+22, Figurin.y1+38);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+22, Figurin.y1+42, Figurin.x1+36, Figurin.y1+44);
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+22, Figurin.y1+46, Figurin.x1+24, Figurin.y1+48);
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+24, Figurin.y1+46, Figurin.x1+36, Figurin.y1+48);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+24, Figurin.y1+44, Figurin.x1+34, Figurin.y1+46);
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+34, Figurin.y1+44, Figurin.x1+36, Figurin.y1+46);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+36, Figurin.y1+38, Figurin.x1+42, Figurin.y1+46);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+36, Figurin.y1+38, Figurin.x1+42, Figurin.y1+46);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+34, Figurin.y1+38, Figurin.x1+36, Figurin.y1+42);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+38, Figurin.y1+36, Figurin.x1+40, Figurin.y1+38);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+40, Figurin.y1+34, Figurin.x1+136, Figurin.y1+38);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+48, Figurin.y1+30, Figurin.x1+136, Figurin.y1+34);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+58, Figurin.y1+26, Figurin.x1+130, Figurin.y1+30);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+66, Figurin.y1+24, Figurin.x1+130, Figurin.y1+26);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+66, Figurin.y1+22, Figurin.x1+126, Figurin.y1+24);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+82, Figurin.y1+20, Figurin.x1+118, Figurin.y1+22);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+82, Figurin.y1+18, Figurin.x1+112, Figurin.y1+20);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+96, Figurin.y1+16, Figurin.x1+106, Figurin.y1+18);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+42, Figurin.y1+38, Figurin.x1+120, Figurin.y1+40);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+42, Figurin.y1+40, Figurin.x1+116, Figurin.y1+42);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+42, Figurin.y1+42, Figurin.x1+66, Figurin.y1+44);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+76, Figurin.y1+42, Figurin.x1+110, Figurin.y1+44);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+46, Figurin.y1+44, Figurin.x1+56, Figurin.y1+46);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+46, Figurin.y1+46, Figurin.x1+52, Figurin.y1+52);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+44, Figurin.y1+48, Figurin.x1+46, Figurin.y1+54);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+40, Figurin.y1+50, Figurin.x1+44, Figurin.y1+54);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+36, Figurin.y1+52, Figurin.x1+40, Figurin.y1+54);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+34, Figurin.y1+54, Figurin.x1+42, Figurin.y1+56);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+34, Figurin.y1+56, Figurin.x1+46, Figurin.y1+58);
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+34, Figurin.y1+58, Figurin.x1+46, Figurin.y1+60);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+88, Figurin.y1+44, Figurin.x1+100, Figurin.y1+48);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+92, Figurin.y1+48, Figurin.x1+104, Figurin.y1+50);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+94, Figurin.y1+50, Figurin.x1+104, Figurin.y1+52);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+94, Figurin.y1+52, Figurin.x1+110, Figurin.y1+54);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+100, Figurin.y1+54, Figurin.x1+110, Figurin.y1+56);
	color (AMARILLO);
	rectangulo_lleno (Figurin.x1+106, Figurin.y1+56, Figurin.x1+116, Figurin.y1+58);
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+106, Figurin.y1+58, Figurin.x1+116, Figurin.y1+60);
	
	//Contorno del chita 2/

	color (NEGRO);
	linea (Figurin.x1+4, Figurin.y1+42, Figurin.x1+8, Figurin.y1+42);
	color (NEGRO);
	linea (Figurin.x1+8, Figurin.y1+42, Figurin.x1+8, Figurin.y1+40);
	color (NEGRO);
	linea (Figurin.x1+8, Figurin.y1+40, Figurin.x1+12, Figurin.y1+40);
	color (NEGRO);
	linea (Figurin.x1+12, Figurin.y1+40, Figurin.x1+12, Figurin.y1+38);
	color (NEGRO);
	linea (Figurin.x1+12, Figurin.y1+38, Figurin.x1+16, Figurin.y1+38);
	color (NEGRO);
	linea (Figurin.x1+16, Figurin.y1+38, Figurin.x1+16, Figurin.y1+36);
	color (NEGRO);
	linea (Figurin.x1+16, Figurin.y1+36, Figurin.x1+22, Figurin.y1+36);
	color (NEGRO);
	linea (Figurin.x1+22, Figurin.y1+36, Figurin.x1+22, Figurin.y1+38);
	color (NEGRO);
	linea (Figurin.x1+22, Figurin.y1+38, Figurin.x1+26, Figurin.y1+38);
	color (NEGRO);
	linea (Figurin.x1+26, Figurin.y1+38, Figurin.x1+26, Figurin.y1+42);
	color (NEGRO);
	linea (Figurin.x1+26, Figurin.y1+42, Figurin.x1+34, Figurin.y1+42);
	color (NEGRO);
	linea (Figurin.x1+34, Figurin.y1+42, Figurin.x1+34, Figurin.y1+38);
	color (NEGRO);
	linea (Figurin.x1+34, Figurin.y1+38, Figurin.x1+38, Figurin.y1+38);
	color (NEGRO);
	linea (Figurin.x1+38, Figurin.y1+38, Figurin.x1+38, Figurin.y1+36);
	color (NEGRO);
	linea (Figurin.x1+38, Figurin.y1+36, Figurin.x1+40, Figurin.y1+36);
	color (NEGRO);
	linea (Figurin.x1+40, Figurin.y1+36, Figurin.x1+40, Figurin.y1+34);
	color (NEGRO);
	linea (Figurin.x1+40, Figurin.y1+34, Figurin.x1+48, Figurin.y1+34);
	color (NEGRO);
	linea (Figurin.x1+48, Figurin.y1+34, Figurin.x1+48, Figurin.y1+30);
	color (NEGRO);
	linea (Figurin.x1+48, Figurin.y1+30, Figurin.x1+58, Figurin.y1+30);
	color (NEGRO);
	linea (Figurin.x1+58, Figurin.y1+30, Figurin.x1+58, Figurin.y1+26);
	color (NEGRO);
	linea (Figurin.x1+58, Figurin.y1+26, Figurin.x1+66, Figurin.y1+26);
	color (NEGRO);
	linea (Figurin.x1+66, Figurin.y1+26, Figurin.x1+66, Figurin.y1+22);
	color (NEGRO);
	linea (Figurin.x1+66, Figurin.y1+22, Figurin.x1+82, Figurin.y1+22);
	color (NEGRO);
	linea (Figurin.x1+82, Figurin.y1+22, Figurin.x1+82, Figurin.y1+18);
	color (NEGRO);
	linea (Figurin.x1+82, Figurin.y1+18, Figurin.x1+96, Figurin.y1+18);
	color (NEGRO);
	linea (Figurin.x1+96, Figurin.y1+18, Figurin.x1+96, Figurin.y1+16);
	color (NEGRO);
	linea (Figurin.x1+96, Figurin.y1+16, Figurin.x1+106, Figurin.y1+16);
	color (NEGRO);
	linea (Figurin.x1+106, Figurin.y1+16, Figurin.x1+106, Figurin.y1+18);
	color (NEGRO);
	linea (Figurin.x1+106, Figurin.y1+18, Figurin.x1+112, Figurin.y1+18);
	color (NEGRO);
	linea (Figurin.x1+112, Figurin.y1+18, Figurin.x1+112, Figurin.y1+20);
	color (NEGRO);
	linea (Figurin.x1+112, Figurin.y1+20, Figurin.x1+118, Figurin.y1+20);
	color (NEGRO);
	linea (Figurin.x1+118, Figurin.y1+20, Figurin.x1+118, Figurin.y1+22);
	color (NEGRO);
	linea (Figurin.x1+118, Figurin.y1+22, Figurin.x1+126, Figurin.y1+22);
	color (NEGRO);
	linea (Figurin.x1+126, Figurin.y1+22, Figurin.x1+126, Figurin.y1+24);
	color (NEGRO);
	linea (Figurin.x1+126, Figurin.y1+24, Figurin.x1+130, Figurin.y1+24);
	color (NEGRO);
	linea (Figurin.x1+130, Figurin.y1+24, Figurin.x1+130, Figurin.y1+30);
	color (NEGRO);
	linea (Figurin.x1+130, Figurin.y1+30, Figurin.x1+136, Figurin.y1+30);
	color (NEGRO);
	linea (Figurin.x1+136, Figurin.y1+30, Figurin.x1+136, Figurin.y1+38);
	color (NEGRO);
	linea (Figurin.x1+136, Figurin.y1+38, Figurin.x1+120, Figurin.y1+38);
	color (NEGRO);
	linea (Figurin.x1+120, Figurin.y1+38, Figurin.x1+120, Figurin.y1+40);
	color (NEGRO);
	linea (Figurin.x1+120, Figurin.y1+40, Figurin.x1+116, Figurin.y1+40);
	color (NEGRO);
	linea (Figurin.x1+116, Figurin.y1+40, Figurin.x1+116, Figurin.y1+42);
	color (NEGRO);
	linea (Figurin.x1+116, Figurin.y1+40, Figurin.x1+116, Figurin.y1+42);
	color (NEGRO);
	linea (Figurin.x1+116, Figurin.y1+42, Figurin.x1+110, Figurin.y1+42);
	color (NEGRO);
	linea (Figurin.x1+110, Figurin.y1+42, Figurin.x1+110, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+110, Figurin.y1+44, Figurin.x1+100, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+100, Figurin.y1+44, Figurin.x1+100, Figurin.y1+48);
	color (NEGRO);
	linea (Figurin.x1+100, Figurin.y1+48, Figurin.x1+104, Figurin.y1+48);
	color (NEGRO);
	linea (Figurin.x1+104, Figurin.y1+48, Figurin.x1+104, Figurin.y1+52);
	color (NEGRO);
	linea (Figurin.x1+104, Figurin.y1+52, Figurin.x1+110, Figurin.y1+52);
	color (NEGRO);
	linea (Figurin.x1+110, Figurin.y1+52, Figurin.x1+110, Figurin.y1+56);
	color (NEGRO);
	linea (Figurin.x1+110, Figurin.y1+56, Figurin.x1+116, Figurin.y1+56);
	color (NEGRO);
	linea (Figurin.x1+116, Figurin.y1+56, Figurin.x1+116, Figurin.y1+60);
	color (NEGRO);
	linea (Figurin.x1+116, Figurin.y1+60, Figurin.x1+106, Figurin.y1+60);
	color (NEGRO);
	linea (Figurin.x1+106, Figurin.y1+60, Figurin.x1+106, Figurin.y1+56);
	color (NEGRO);
	linea (Figurin.x1+106, Figurin.y1+56, Figurin.x1+100, Figurin.y1+56);
	color (NEGRO);
	linea (Figurin.x1+100, Figurin.y1+56, Figurin.x1+100, Figurin.y1+54);
	color (NEGRO);
	linea (Figurin.x1+100, Figurin.y1+54, Figurin.x1+94, Figurin.y1+54);
	color (NEGRO);
	linea (Figurin.x1+94, Figurin.y1+54, Figurin.x1+94, Figurin.y1+50);
	color (NEGRO);
	linea (Figurin.x1+94, Figurin.y1+50, Figurin.x1+92, Figurin.y1+50);
	color (NEGRO);
	linea (Figurin.x1+92, Figurin.y1+50, Figurin.x1+92, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+92, Figurin.y1+46, Figurin.x1+88, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+88, Figurin.y1+46, Figurin.x1+88, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+88, Figurin.y1+44, Figurin.x1+76, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+76, Figurin.y1+44, Figurin.x1+76, Figurin.y1+42);
	color (NEGRO);
	linea (Figurin.x1+76, Figurin.y1+42, Figurin.x1+66, Figurin.y1+42);
	color (NEGRO);
	linea (Figurin.x1+66, Figurin.y1+42, Figurin.x1+66, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+66, Figurin.y1+44, Figurin.x1+56, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+56, Figurin.y1+44, Figurin.x1+56, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+56, Figurin.y1+46, Figurin.x1+52, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+52, Figurin.y1+46, Figurin.x1+52, Figurin.y1+52);
	color (NEGRO);
	linea (Figurin.x1+52, Figurin.y1+52, Figurin.x1+46, Figurin.y1+52);
	color (NEGRO);
	linea (Figurin.x1+46, Figurin.y1+52, Figurin.x1+46, Figurin.y1+54);
	color (NEGRO);
	linea (Figurin.x1+46, Figurin.y1+54, Figurin.x1+42, Figurin.y1+54);
	color (NEGRO);
	linea (Figurin.x1+42, Figurin.y1+54, Figurin.x1+42, Figurin.y1+56);
	color (NEGRO);
	linea (Figurin.x1+42, Figurin.y1+56, Figurin.x1+46, Figurin.y1+56);
	color (NEGRO);
	linea (Figurin.x1+46, Figurin.y1+56, Figurin.x1+46, Figurin.y1+60);
	color (NEGRO);
	linea (Figurin.x1+46, Figurin.y1+60, Figurin.x1+34, Figurin.y1+60);
	color (NEGRO);
	linea (Figurin.x1+34, Figurin.y1+60, Figurin.x1+34, Figurin.y1+54);
	color (NEGRO);
	linea (Figurin.x1+34, Figurin.y1+54, Figurin.x1+36, Figurin.y1+54);
	color (NEGRO);
	linea (Figurin.x1+36, Figurin.y1+54, Figurin.x1+36, Figurin.y1+52);
	color (NEGRO);
	linea (Figurin.x1+36, Figurin.y1+52, Figurin.x1+40, Figurin.y1+52);
	color (NEGRO);
	linea (Figurin.x1+40, Figurin.y1+52, Figurin.x1+40, Figurin.y1+50);
	color (NEGRO);
	linea (Figurin.x1+40, Figurin.y1+50, Figurin.x1+44, Figurin.y1+50);
	color (NEGRO);
	linea (Figurin.x1+44, Figurin.y1+50, Figurin.x1+44, Figurin.y1+48);
	color (NEGRO);
	linea (Figurin.x1+44, Figurin.y1+48, Figurin.x1+46, Figurin.y1+48);
	color (NEGRO);
	linea (Figurin.x1+46, Figurin.y1+48, Figurin.x1+46, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+46, Figurin.y1+44, Figurin.x1+42, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+42, Figurin.y1+44, Figurin.x1+42, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+42, Figurin.y1+46, Figurin.x1+36, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+36, Figurin.y1+46, Figurin.x1+36, Figurin.y1+48);
	color (NEGRO);
	linea (Figurin.x1+36, Figurin.y1+48, Figurin.x1+22, Figurin.y1+48);
	color (NEGRO);
	linea (Figurin.x1+22, Figurin.y1+48, Figurin.x1+22, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+22, Figurin.y1+46, Figurin.x1+20, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+20, Figurin.y1+46, Figurin.x1+20, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+20, Figurin.y1+44, Figurin.x1+18, Figurin.y1+44);
	color (NEGRO);
	linea (Figurin.x1+18, Figurin.y1+44, Figurin.x1+18, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+18, Figurin.y1+46, Figurin.x1+16, Figurin.y1+46);
	color (NEGRO);
	linea (Figurin.x1+16, Figurin.y1+46, Figurin.x1+16, Figurin.y1+48);
	color (NEGRO);
	linea (Figurin.x1+16, Figurin.y1+48, Figurin.x1+4, Figurin.y1+48);
	color (NEGRO);
	linea (Figurin.x1+4, Figurin.y1+48, Figurin.x1+4, Figurin.y1+42);

	//Cara/
	
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+126, Figurin.y1+26, Figurin.x1+130, Figurin.y1+30);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+134, Figurin.y1+30, Figurin.x1+136, Figurin.y1+32);
	
	//Oreja/
	
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+108, Figurin.y1+18, Figurin.x1+112, Figurin.y1+22);
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+112, Figurin.y1+20, Figurin.x1+118, Figurin.y1+22);
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+110, Figurin.y1+22, Figurin.x1+112, Figurin.y1+30);
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+112, Figurin.y1+28, Figurin.x1+116, Figurin.y1+30);
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+114, Figurin.y1+26, Figurin.x1+118, Figurin.y1+28);
	color_rgb (255, 232, 214);
	rectangulo_lleno (Figurin.x1+116, Figurin.y1+22, Figurin.x1+118, Figurin.y1+26);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+112, Figurin.y1+22, Figurin.x1+116, Figurin.y1+26);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+112, Figurin.y1+26, Figurin.x1+114, Figurin.y1+28);
	color (NEGRO);
	linea (Figurin.x1+132, Figurin.y1+34, Figurin.x1+136, Figurin.y1+34);
	
	//Manchas/
	
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+10, Figurin.y1+42, Figurin.x1+12, Figurin.y1+44);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+18, Figurin.y1+38, Figurin.x1+20, Figurin.y1+40);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+14, Figurin.y1+40, Figurin.x1+16, Figurin.y1+42);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+28, Figurin.y1+44, Figurin.x1+30, Figurin.y1+46);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+22, Figurin.y1+40, Figurin.x1+24, Figurin.y1+42);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+28, Figurin.y1+44, Figurin.x1+30, Figurin.y1+46);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+32, Figurin.y1+44, Figurin.x1+34, Figurin.y1+46);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+38, Figurin.y1+40, Figurin.x1+40, Figurin.y1+42);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+6, Figurin.y1+44, Figurin.x1+8, Figurin.y1+46);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+44, Figurin.y1+36, Figurin.x1+46, Figurin.y1+38);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+44, Figurin.y1+40, Figurin.x1+46, Figurin.y1+42);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+52, Figurin.y1+34, Figurin.x1+54, Figurin.y1+36);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+50, Figurin.y1+40, Figurin.x1+52, Figurin.y1+42);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+58, Figurin.y1+38, Figurin.x1+60, Figurin.y1+40);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+60, Figurin.y1+32, Figurin.x1+62, Figurin.y1+34);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+64, Figurin.y1+36, Figurin.x1+66, Figurin.y1+38);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+68, Figurin.y1+30, Figurin.x1+70, Figurin.y1+32);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+72, Figurin.y1+24, Figurin.x1+74, Figurin.y1+26);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+74, Figurin.y1+34, Figurin.x1+76, Figurin.y1+36);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+78, Figurin.y1+28, Figurin.x1+80, Figurin.y1+30);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+82, Figurin.y1+32, Figurin.x1+84, Figurin.y1+34);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+82, Figurin.y1+38, Figurin.x1+84, Figurin.y1+40);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+88, Figurin.y1+34, Figurin.x1+90, Figurin.y1+36);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+90, Figurin.y1+28, Figurin.x1+92, Figurin.y1+30);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+86, Figurin.y1+24, Figurin.x1+88, Figurin.y1+26);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+96, Figurin.y1+22, Figurin.x1+98, Figurin.y1+24);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+90, Figurin.y1+20, Figurin.x1+92, Figurin.y1+22);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+96, Figurin.y1+32, Figurin.x1+98, Figurin.y1+34);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+94, Figurin.y1+38, Figurin.x1+96, Figurin.y1+40);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+100, Figurin.y1+40, Figurin.x1+102, Figurin.y1+42);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+104, Figurin.y1+34, Figurin.x1+106, Figurin.y1+36);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+102, Figurin.y1+28, Figurin.x1+104, Figurin.y1+30);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+104, Figurin.y1+22, Figurin.x1+106, Figurin.y1+24);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+102, Figurin.y1+18, Figurin.x1+104, Figurin.y1+20);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+110, Figurin.y1+38, Figurin.x1+112, Figurin.y1+40);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+116, Figurin.y1+34, Figurin.x1+118, Figurin.y1+36);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+112, Figurin.y1+32, Figurin.x1+114, Figurin.y1+34);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+120, Figurin.y1+30, Figurin.x1+122, Figurin.y1+32);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+48, Figurin.y1+44, Figurin.x1+50, Figurin.y1+46);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+38, Figurin.y1+54, Figurin.x1+40, Figurin.y1+56);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+48, Figurin.y1+48, Figurin.x1+50, Figurin.y1+50);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+88, Figurin.y1+40, Figurin.x1+90, Figurin.y1+42);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+96, Figurin.y1+44, Figurin.x1+98, Figurin.y1+46);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+96, Figurin.y1+50, Figurin.x1+98, Figurin.y1+52);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+100, Figurin.y1+50, Figurin.x1+102, Figurin.y1+52);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+70, Figurin.y1+38, Figurin.x1+72, Figurin.y1+40);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+120, Figurin.y1+24, Figurin.x1+122, Figurin.y1+26);
	color (NEGRO);
	rectangulo_lleno (Figurin.x1+122, Figurin.y1+34, Figurin.x1+124, Figurin.y1+36);

}



void Malo(Coordenadas Villano){
	color_rgb(249, 65, 68);
	rectangulo_lleno(Villano.x1, Villano.y1, Villano.x1 + 30, Villano.y1 + 40);
}

void Carne(Coordenadas Meat){
	color_rgb(161, 66, 7);
	rectangulo_lleno(Meat.x1, Meat.y1, Meat.x1 + 14, Meat.y1 + 14);
	color_rgb(255, 255, 255);
	rectangulo_lleno(Meat.x1 + 4, Meat.y1 + 4, Meat.x1 + 8, Meat.y1 + 8);
}

void pintarVentana(){
	vredimensiona(1000, 600); //Dimensionar ventana
	color_rgb(255, 255, 255);
	rectangulo_lleno(0, 0, 1000, 600);
}
void pintarMalos(int x, int y){
	Coordenadas Villano = {x, y};
	Malo(Villano);
}


void Comida(Coordenadas Food){
	color_rgb(255, 255, 255);
	circulo_lleno(Food.x1, Food.y1, 2.5);
}

void pintarComida(int x, int y){
	Coordenadas Food = {x, y};
	Comida(Food);
}

void paintAllFood(){
	for(int i = 50; i < 950; i++){
		for(int j = 10; j < 900; j++){
			if(i % 50 == 0 && j % 80 == 0){	
				pintarComida(i, j);	
			}	
		}
	}
}



void moverAtras(Coordenadas Villano, Coordenadas Figurin){
	if(Villano.x1 > 300){
		Villano.x1-= 3;
		borra();
		pintarVentana();
		figura(Figurin);
		pintarMalos(Villano.x1, 85);
	}
}

void moverAdelante(Coordenadas Villano, Coordenadas Figurin){
	if(Villano.x1 < 450){
		Villano.x1 += 3;
		borra();
		pintarVentana();
		figura(Figurin);
		pintarMalos(Villano.x1, 85);
	}
}

/*int moverAdelante(int x, int xmax){
	if(x < xmax){
		x = x + 1;
	} 
	return x;
}

int moverAtras(int x, int xmax) {
	if(x >= xmax){
		x = x - 1;
	}
	return x;
}*/

/*void moverAdelante(int x, int y){
	Coordenadas Figurin = {Figurin.x1, Figurin.y1}; 
	figura(Figurin);
	Coordenadas Villano = {150, y};
	Malo(Villano);
	while(Villano.x1 < x){
		Villano.x1++;
		borra();
		pintarVentana();
		figura(Figurin);
		pintarMalos(Villano.x1, y);
		refresca();
		espera(10);		
	}
}*/

int main(){
	
	int tecla_actual;
	int y;
	int x;
	vredimensiona(1000, 600); //Dimensionar ventana
	color_rgb(255, 255, 255);
	rectangulo_lleno(0, 0, 1000, 600);
	
	Coordenadas Figurin = {40, 45}; //iNICIA X 40 y termina x 50, y en Y empieza 45 y termina 55
	figura(Figurin);
	
	Coordenadas Villano = {450, 154};
	Malo(Villano);
	
	
	Coordenadas Meat = {510, 404};
	Carne(Meat);
	/*Coordenadas Food = {50, 10};
	paintAllFood();*/
	
	/* color_rgb(0, 180, 216);
	circulo_lleno(x, y, 20); */
	

	
	tecla_actual = int(ARRIBA);
	refresca();
	
	while(tecla_actual != int(ESCAPE)){
		tecla_actual = tecla();
		
		/*if(Villano.x1 > 300 || Villano.x1 < 450){
			moverAtras(Villano, Figurin);
			moverAdelante(Villano, Figurin);
		}*/
		
		/*if(Villano.x1 < 350){
			Villano.x1+= 3;
			borra();
			pintarVentana();
			figura(Figurin);
			pintarMalos(Villano.x1, 85);		
		}
		else if(Villano.x1 >= 350){
			Villano.x1-= 3;
			borra();
			pintarVentana();
			figura(Figurin);
			pintarMalos(Villano.x1, 85);	
		}*/
		
		//acsjf ief rji
		/*if(Villano.x1 < 100){
			Villano.x1+= 3;
			borra();
			pintarVentana();
			figura(Figurin);
			pintarMalos(Villano.x1, 85);		
		}
		else if(Villano.x1 > 200){
			Villano.x1-= 3;
			borra();
			pintarVentana();
			figura(Figurin);
			pintarMalos(Villano.x1, 85);	
		}*/
		
		
		/*if(Villano.x1 > 300){
			Villano.x1-= 3;
			borra();
			pintarVentana();
			figura(Figurin);
			pintarMalos(Villano.x1, 85);
		}
		else if(Villano.x1 == 301){
			if(Villano.x1 < 450){
				Villano.x1+= 3;
				borra();
				pintarVentana();
				figura(Figurin);
				pintarMalos(Villano.x1, 85);
			}
		}*/
		
		
		if(tecla_actual == int(DERECHA)){
			if(Figurin.x1 >= 980){
				Figurin.x1 = 980;
			}
			else {			
				Figurin.x1 = Figurin.x1 + 12;
				borra();
				pintarVentana();
				pintarMalos(450, 154);
				figura(Figurin);
				
				Coordenadas Meat = {510, 404};
				Carne(Meat);
				
				
				
				tecla_actual = tecla();
			}	
			/*if(Villano.x1 < 350){
				Villano.x1+= 3;
				borra();
				pintarVentana();
				figura(Figurin);
				pintarMalos(Villano.x1, 85);		
			}
			else if(Villano.x1 >= 350){
				Villano.x1-= 3;
				borra();
				pintarVentana();
				figura(Figurin);
				pintarMalos(Villano.x1, 85);	
			}*/
		}
		
		else if(tecla_actual == int(IZQUIERDA)){
			if(Figurin.x1 <= 20){
				Figurin.x1 = 20;
			} 
			else {
				Figurin.x1 = Figurin.x1 - 12;
			
				borra();
				pintarVentana();
				pintarMalos(450, 154);
				
				Coordenadas Meat = {510, 404};
				Carne(Meat);
				
				figura(Figurin);
				tecla_actual = tecla();
			}
			
			/*if(Villano.x1 < 450){
			Villano.x1+= 3;
			borra();
			pintarVentana();
			figura(Figurin);
			pintarMalos(Villano.x1, 85);
			/*refresca();
			espera(10);*/		
		/*}
			else if(Villano.x1 == 350){
				Villano.x1 = 353;
				
			}
			else if(Villano.x1 > 353){
				Villano.x1-= 3;
				borra();
				pintarVentana();
				figura(Figurin);
				pintarMalos(Villano.x1, 85);
				/*refresca();
				espera(10);	*/	
			/*}*/
		}
		
		
		
		
		else if(tecla_actual == int(ARRIBA))
		{
			if(Figurin.y1 <= 10){
				Figurin.y1 = 10;
			} 
			else {
				Figurin.y1 = Figurin.y1 - 8;
			
			borra();
			pintarVentana();
			pintarMalos(450, 154);
			
			Coordenadas Meat = {510, 404};
			Carne(Meat);
			
			figura(Figurin);
			tecla_actual = tecla();
			}
		}
		
		else if(tecla_actual == int(ABAJO)){
			Figurin.y1 = Figurin.y1 + 8;
			
			borra();
			pintarVentana();
			pintarMalos(450, 154);
			
			Coordenadas Meat = {510, 404};
			Carne(Meat);
			
			figura(Figurin);
			tecla_actual = tecla();
		}
		
		if(Figurin.x1 + 160 >= Villano.x1 && Figurin.y1 <= Villano.y1){
			mensaje("Perdiste");
			Figurin.x1 = 10;
			Figurin.y1 = 40;
			borra();
			pintarVentana();
			pintarMalos(450, 154);
			
			Coordenadas Meat = {510, 404};
			Carne(Meat);
			
			figura(Figurin);
			tecla_actual = tecla();
		}
		
		/*if(Figurin.x1 + 160 > Meat.x1 && Figurin.y1 + 40 >= Meat.y1 || Figurin.y1 == Meat.y1 + 14){
			mensaje("Perdiste");
			Figurin.x1 = 10;
			Figurin.y1 = 40;
			borra();
			pintarVentana();
			pintarMalos(450, 154);
		}*
		
		
		/*
		while( Villano.x1 < 600){
			if(Villano.x1 <= 400){
				Villano.x1 = moverAdelante(Villano.x1, 400);
				Villano.x1 += 50;	
			}	
			else {
				Villano.x1 = moverAtras(Villano.x1, 400);
			}
			borra();
			pintarVentana();
			figura(Figurin);
			pintarMalos(Villano.x1, 85);
			refresca();
			espera(10);
		}*/
		
		
		
		
		/*while(Villano.x1 < 400){
			Villano.x1++;
			borra();
			pintarVentana();
			figura(Figurin);
			pintarMalos(Villano.x1, 85);
			refresca();
			espera(10);		
		}
		while(Villano.x1 >= 349){
			Villano.x1--;
			borra();
			pintarVentana();
			figura(Figurin);
			pintarMalos(Villano.x1, 85);
			refresca();
			espera(10);		
		}
		*/
		refresca();
		tecla_actual = tecla();
		espera(100);
			
	}
	
		
		
}
