#pragma once
#include "struct.h"

film build_film_instance(int year, float running_time_hour, wchar_t* main_actor, wchar_t* director, wchar_t* writer, wchar_t* genre, wchar_t* description);

film get_film_instance(int id);

film set_film_instance_property(film film_instance, wchar_t* property);

film user_leave_rating(film film_instance, enum rating rating_score);

wchar_t* update_movie_database(film film_instance);