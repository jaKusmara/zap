#include <superkarel.h>

#define SPEED 100

void collect_lines();
void turn_around();
void turn_up();
void turn_right();
void pick_all_beepers();

int main(){
	turn_on("collector.kw");

	set_step_delay(SPEED);

	collect_lines();

	turn_off();
	
	return 0;
}

void pick_all_beepers(){
	while(beepers_present()) pick_beeper();
}

void collect_lines(){
		while(front_is_clear()){
			pick_all_beepers();
			if(front_is_clear()) step();
			if(front_is_blocked()){
				turn_left();
				if(front_is_blocked()) break;
				step();
				turn_left();
				pick_all_beepers();
				while(front_is_clear()) step();
				if(front_is_blocked()) turn_around();
			}
		}
}

void turn_right(){
	turn_left();
	turn_left();
	turn_left();
}

void turn_around(){
	turn_left();
	turn_left();
}

void turn_up(){
	turn_left();
	pick_all_beepers();
	step();
	turn_right();
	pick_all_beepers();
}
