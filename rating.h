#ifndef RATING_H
#define RATING_H

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#define SIZE 10000

int display_file(FILE* infile, char *genre);
int calc_sum_points(char *show);
int conpare_show_scores(int show_1, int show_2, int show_3, int show_4, int show_5);
FILE* get_genra_type(int top_rated_genre, int sum_1, int sum_2, int sum_3, int sum_4, int sum_5,
	FILE* infile_1, FILE* infile_2, FILE* infile_3, FILE* infile_4, FILE* infile_5);
void recommendation(FILE* infile);

#endif

