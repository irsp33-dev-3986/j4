#pragma once
#include <windows.h>
#include <stdio.h>

enum rating {
	unwatchabke = 1,
	bad =  2,
	mediocre = 3,
	good = 4,
	excellent = 5
};

typedef struct film {
	int id;
	int year;
	int running_time_minutes;
	wchar_t* main_actor;
	wchar_t* director;
	wchar_t* writer;
	wchar_t* genre;
	wchar_t* description;
	enum rating score;
} film;

/*
 This is document #103, Linked List Basics, in the Stanford CS Education Library. This
and other free educational materials are available at http://cslibrary.stanford.edu/. This
document is free to be used, reproduced, or sold so long as this notice is clearly
reproduced at its beginning.
 http://cslibrary.stanford.edu/103/LinkedListBasics.pdf
*/

struct node {
	film data;
	struct node* next;
};