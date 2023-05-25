#define row = 5
#define col = 8

#include "func.h"

int counter = 0;
// 5 movies max for this example
wchar_t* movie_database[row][col];

film build_film_instance(int year, float running_time_minutes, wchar_t* main_actor, wchar_t* director, wchar_t* writer, wchar_t* genre, wchar_t* description)
{
	film film_instance = {
		counter,
		year,
		running_time_minutes,
		main_actor,
		director,
		writer,
		genre,
		description,
	};
	counter ++;
	return film_instance;
}

film user_leave_rating(film film_instance, enum rating rating_score)
{
	if (rating_score >= 1 && rating_score <= 5)
	{
		film film_instance.score = rating_score;
	}
	else
	{
		printf("Invalid number. Please enter a score between 1 and 5.");
	}

	return film_instance;
}

wchar_t* update_movie_database(film film_instance)
{
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < col; j++)
		{
			wchar_t* movie_database[i][j] = {

			};
		}
	}
	wchar_t* movie_database[counter][] = {
		film_instance.id,
		film_instance.year,
		film_instance.running_time_minutes,
		film_instance.main_actor,
		film_instance.director,
		film_instance.writer,
		film_instance.genre,
		film_instance.description,
	};
	return movie_database;
}

film get_film_instance(int id)
{
	printf("Getting film by ID.");

}