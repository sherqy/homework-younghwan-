#include <stdio.h>

typedef struct{
	int hour;
	int min;
	int sec;
} clock;

clock p;

void second_increment();
void show_the_time(int);

int main(){
	
	int n;

	printf("Enter the starting time (hr min sec) : ");
	scanf("%d%d%d", &p.hour, &p.min, &p.sec);
	
	printf("How many seconds do you want to count? ");
	scanf("%d", &n);
	
	show_the_time(n);
	return 0;
}

void second_increment(){
	
	p.sec += 1;
	
	if(p.sec >= 60){
		p.sec = p.sec - 60;
		p.min = p.min + 1;
	}
	
	if(p.min >= 60){
		p.min = p.min - 60;
		p.hour = p.hour + 1;
	}
	
	if(p.hour >= 24)
		p.hour = p.hour - 24;
}

void show_the_time(int n){
	
	int j = 1;
	
	while(j <= n){
		second_increment();
		printf("%02d : %02d : %02d\n", p.hour, p.min, p.sec);
		j++;
	}
}*/

#include <stdio.h>
#include <stdlib.h>

typedef struct{
	int hour;
	int min;
	int sec;
} Time;

void sec_increment( Time* );
void show_time( Time );

int main(){

	Time t = {0,};
	int clock = 0, i = 0;
	printf("Enter the starting time (hr min sec) : ");
	scanf("%d%d%d", &(t.hour), &(t.min), &(t.sec));
	printf("How many seconds do you want to count? ");
	scanf("%d", clock);
	for(i = 0; i < clock; i++){
		sec_increment(&t);
		show_time(t);
	}	
	return 0;
}

void sec_increment( Time* t ){
	
	if( t-> sec++ == 59){
		t->sec = 0;
		if( t->min++ == 59){
			t->min = 0;
			if( t->hour++ ==23 ){
				t->hour = 0;
			}
		}
	}
}

void show_time( Time t){
	
	printf("%d:%d:%d\n", t.hour, t.min, t.sec);
}
