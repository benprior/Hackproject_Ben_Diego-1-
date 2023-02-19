#include "rating.h"


int display_file(FILE* infile, char* genre)
{
	int option = 0;
	char show[SIZE];

	printf("Rate a(n) %s anime by entering title number\n", genre);
	
	
	while (fgets(show, SIZE, infile) != NULL)
	{
		printf("%s", show);
	}
	printf("\nPlease choose a title to rate from %s genre list (1-100): ", genre);
	scanf("%d", &option);


	return option;
}



int calc_sum_points(char* show)
{
	int sum = 0, score_1 = 0, score_2 = 0, score_3 = 0,
		score_4 = 0, score_5 = 0;

	printf("----------------------------------------------------------\n");
	printf("Rate anime of choice for %s genre\n", show);
	printf("----------------------------------------------------------\n");
	printf("Rate the Characters/Character Development (1-10): ");
	scanf("%d", &score_1);
	printf("----------------------------------------------------------\n");
	printf("Rate the sound track (1-10): ");
	scanf("%d", &score_2);
	printf("----------------------------------------------------------\n");
	printf("Rate the Plot/Story (1-10): ");
	scanf("%d", &score_3);
	printf("----------------------------------------------------------\n");
	printf("Rate Picture Quality/Animation (1-10): ");
	scanf("%d", &score_4);
	printf("----------------------------------------------------------\n");
	printf("Rate the the Voice Acting Performance (1-10): ");
	scanf("%d", &score_5);
	printf("----------------------------------------------------------\n");


	sum = score_1 + score_2 + score_3 + score_4 + score_5;

	return sum;
}

int conpare_show_scores(int show_1, int show_2, int show_3, int show_4, int show_5)
{
	int max = show_1;

	if (max < show_2)
	{
		max = show_2;
	}
	if (max < show_3)
	{
		max = show_3;
	}
	if (max < show_4)
	{
		max = show_4;
	}
	if (max < show_5)
	{
		max = show_5;
	}
	return max;

}

FILE*
get_genra_type(int top_rated_genre, int sum_1, int sum_2, int sum_3, int sum_4, int sum_5,
	FILE* infile_1, FILE* infile_2, FILE* infile_3, FILE* infile_4, FILE* infile_5)
{
	if (top_rated_genre == sum_1)
	{
		return infile_1;
	}
	if (top_rated_genre == sum_2)
	{
		return infile_2;
	}
	if (top_rated_genre == sum_3)
	{
		return infile_3;
	}
	if (top_rated_genre == sum_4)
	{
		return infile_4;
	}
	if (top_rated_genre == sum_5)
	{
		return infile_5;
	}

}

void recommendation(FILE* infile)
{
	
	fseek(infile, 0, SEEK_SET);
	char str[200];
	int I = rand() % 100 + 1;
	int k = 0;
	do
	{
		fgets(str, 200, infile);
		k++;
	} while (k != I);
	{
		printf("%s", str);
	}
}