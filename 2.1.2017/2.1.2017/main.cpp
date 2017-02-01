
#include <stdio.h>

#include <allegro5/allegro.h>

#include <iostream>

#include <allegro5/allegro_primitives.h>                                                 


int main() {

	ALLEGRO_DISPLAY *display = NULL;


	al_init();


	al_init_primitives_addon();


	display = al_create_display(640, 480);



	al_clear_to_color(al_map_rgb(0, 0, 0));



	al_draw_triangle(170, 240, 160, 300, 120, 150, al_map_rgb(0, 250, 100), 10);

	al_draw_triangle(100, 120, 250, 150, 250, 100, al_map_rgb(0, 150, 250), 10);

	al_draw_triangle(150, 120, 300, 150, 250, 100, al_map_rgb(200, 150, 100), 10);


	al_flip_display();

	

	al_rest(10.0);



	al_destroy_display;


	return 0;
}
