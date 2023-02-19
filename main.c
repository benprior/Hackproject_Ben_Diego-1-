#include "rating.h"

char genreString[20];

int main(void)
{
	//char action[6] = "action", adventure[9] = "adventure", romance[7] = "romance", drama[5] = "drama", comedy[6] = "comedy";


	int action_sum = 0, adventure_sum = 0, romance_sum = 0, drama_sum = 0, comedy_sum = 0;

	srand((unsigned int)time(NULL));

	FILE* act = fopen("action.txt", "r");
	FILE* adv = fopen("adventure.txt", "r");
	FILE* rom = fopen("romance.txt", "r");
	FILE* dram = fopen("drama.txt", "r");
	FILE* com = fopen("comedy.txt", "r");

	int val1 = display_file(act, "action");
	
	action_sum = calc_sum_points("action");

	int val2 = display_file(adv, "adventure");
	adventure_sum = calc_sum_points("adventure");

	int val3 = display_file(rom, "romance");
	romance_sum = calc_sum_points("romance");

	int val4 = display_file(dram, "drama");
	drama_sum = calc_sum_points("drama");

	int val5 = display_file(com, "comedy");
	comedy_sum = calc_sum_points("comedy");

	int top_rated = conpare_show_scores(action_sum, adventure_sum, romance_sum, drama_sum, comedy_sum);

	FILE* favorite_genre = get_genra_type(top_rated, action_sum, adventure_sum, romance_sum, drama_sum, comedy_sum,
		act, adv, rom, dram, com);

	printf("****************************************************\n");
	printf("We recommend you check out: \n");

	recommendation(favorite_genre);
	recommendation(favorite_genre);
	recommendation(favorite_genre);

	fclose(act);
	fclose(adv);
	fclose(rom);
	fclose(dram);
	fclose(com);
	return 0;

}