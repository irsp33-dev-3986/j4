#define _CRT_SECURE_NO_WARNINGS

#include "func.h"

int counter = 0;
struct node* head = NULL;

/*
 This is document #103, Linked List Basics, in the Stanford CS Education Library. This
and other free educational materials are available at http://cslibrary.stanford.edu/. This
document is free to be used, reproduced, or sold so long as this notice is clearly
reproduced at its beginning.
 http://cslibrary.stanford.edu/103/LinkedListBasics.pdf
*/
struct node* append_node(struct node** headRef, film data) {
	struct node* current = *headRef;
	struct node* newNode;
	newNode = malloc(sizeof(struct node));
	newNode->data = data;
	newNode->next = NULL;
	// special case for length 0
	if (current == NULL) {
		*headRef = newNode;
	}
	else {
		// Locate the last node
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = newNode;
	}
}

film build_film_instance(int year, int running_time_minutes, wchar_t* title, wchar_t* main_actor, wchar_t* director, wchar_t* writer, wchar_t* genre, wchar_t* description)
{
	film film_instance = {
		counter,
		year,
		running_time_minutes,
		title,
		main_actor,
		director,
		writer,
		genre,
		description,
		unreviewed
	};
	counter ++;
	return film_instance;
}

film user_leave_rating(film film_instance, enum rating rating_score)
{
	if (rating_score >= 1 && rating_score <= 5)
	{
		film_instance.score = rating_score;
	}
	else
	{
		printf("Invalid number. Please enter a score between 1 and 5.");
	}

	return film_instance;
}

struct node* update_movie_database(film film_instance)
{
	struct node* movie_database = append_node(&head, film_instance);
	/*
	for (int i = 0; i < 5; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			wchar_t* movie_database[i][j] = {

			};
		}
	}
	wchar_t* movie_database[][] = {
		film_instance.id,
		film_instance.year,
		film_instance.running_time_minutes,
		film_instance.main_actor,
		film_instance.director,
		film_instance.writer,
		film_instance.genre,
		film_instance.description,
	};
	*/
	return movie_database;
}

film get_film_instance(int id)
{
	printf("Getting film by ID.");

}

void interact()
{
	while (TRUE)
	{
		wchar_t* a = L"Unknown", b = L"Unknown", c = L"Unknown", d = L"Unknown", e = L"Unknown", f = L"Unknown", g = L"Unknown", h = L"Unknown";
		wchar_t* title = scanf(L"Adding a movie.\n\nEnter the title : %ls\n", a);
		int year = scanf(L"Enter the release year : %i\n", b);
		int running_time_minutes = scanf(L"Enter the running time (in minutes) : %i\n", c);
		wchar_t* main_actor = scanf(L"Enter the name of the main actor : %ls\n", d);
		wchar_t* director = scanf(L"Enter the name of the director : %ls\n", e);
		wchar_t* writer = scanf(L"Enter the name of the writer : %ls\n", f);
		wchar_t* genre = scanf(L"Enter the genre : %ls\n", g);
		wchar_t* description = scanf(L"Enter the description : %ls\n", h);
		film build_film_instance(int year, int running_time_minutes, wchar_t* title, wchar_t* main_actor, wchar_t* director, wchar_t* writer, wchar_t* genre, wchar_t* description);
		break;
	}
	return 0;
}