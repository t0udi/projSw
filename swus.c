
#include <stdio.h>
#include <math.h>
#include "lcgrand.h"  /* Plik nagłówkowy do generatora liczb pseudolosowych. */

#define Q_LIMIT 101  /* Długość bufora */  //bylo 100 ###########3
#define BUSY      1  /* Flaga zajętości bufora */
#define IDLE      0  /* Flaga wolnego statnu bufora */

//int goog

int next_event_time;
int num_custs_delayed;
int num_delays_required;
int num_events;
int num_in_q;
int server_status;

float area_num_in_q;
float area_server_status; 
float mean_interarrival; 
float mean_service;     
float sim_time; 
float time_arrival[Q_LIMIT + 1]; 
float time_last_event; 
float time_next_event[3];
float total_of_delays;
	
	
FILE  *infile, *outfile;

void  initialize(void);
void  timing(void);
void  arrive1(void);
void  arrive2(void);
void  depart(void);
void  report(void);
void  update_time_avg_stats(void);
float expon(float mean);

main()
{
	/* Otwieramy wejściowe i wyjściowe pliki */
	infile  = fopen("mm1.in",  "r");
    	outfile = fopen("mm1.out", "w");

	/* Liczba typów zdarzeń dla funkcji czasu */
	num_events = 3;

	/* Odczytujemy wejściowe parametry */
	fscanf(infile, "%f %f %d", &mean_interarrival, &mean_service, &num_delays_required);

	fprintf(outfile, "Single-server queueing system\n\n");
    	fprintf(outfile, "Mean interarrival time%11.3f minutes\n\n", mean_interarrival);
        fprintf(outfile, "Mean service time%16.3f minutes\n\n", mean_service);
        fprintf(outfile, "Number of customers%14d\n\n", num_delays_required);




}
