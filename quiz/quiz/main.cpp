#include <stdio.h>

#include <allegro5/allegro.h>

#include <iostream>

#include <allegro5/allegro_primitives.h>   

#include <allegro5/allegro_image.h>



int main()

{

	ALLEGRO_DISPLAY *display = NULL;

	ALLEGRO_BITMAP *image = NULL;



	al_init();


	al_init_primitives_addon();


	display = al_create_display(640, 480);



	al_clear_to_color(al_map_rgb(0, 0, 0));

	image = al_create_bitmap(600, 370);

	image = al_load_bitmap("galxy.jpg");

	al_draw_triangle(100, 250, 150, 300, 120, 150, al_map_rgb(0, 250, 100), 6.5);

	al_draw_triangle(150, 120, 300, 150, 250, 100, al_map_rgb(0, 250, 100), 6.5);

	al_draw_circle(163.5, 175, 45.5, al_map_rgb(0, 250, 100), 10); //body

	al_draw_circle(180.5,350.5, 10, al_map_rgb(250, 100,0), 1); //phew

	al_draw_circle(500,160, 10, al_map_rgb(250, 100, 0), 1); //phewR
	al_flip_display();



	al_rest(10.0);



	al_destroy_display;


	return 0;

}




