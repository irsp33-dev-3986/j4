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