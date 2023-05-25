#pragma once
#include "struct.h"

film build_film_instance(int year, int running_time_minutes, wchar_t* title, wchar_t* main_actor, wchar_t* director, wchar_t* writer, wchar_t* genre, wchar_t* description);

film get_film_instance(int id);

film set_film_instance_property(film film_instance, wchar_t* property);

film user_leave_rating(film film_instance, enum rating rating_score);

wchar_t* update_movie_database(film film_instance);


/*
 This is document #103, Linked List Basics, in the Stanford CS Education Library. This
and other free educational materials are available at http://cslibrary.stanford.edu/. This
document is free to be used, reproduced, or sold so long as this notice is clearly
reproduced at its beginning.
 http://cslibrary.stanford.edu/103/LinkedListBasics.pdf
*/
void Push(struct node** headRef, int data);

struct node* append_node(struct node** headRef, film data);

void interact();