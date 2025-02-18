#include <superkarel.h>

#define SPEED 100

void jump_over();
void turn_right();
void spider();

int main() {
    turn_on("olympics5.kw");
	

    while(no_beepers_present()){
    	while(front_is_blocked() && no_beepers_present()){
    		jump_over();
    	}

    	while(front_is_clear() && no_beepers_present()){
    		step();
    	}

    }

    turn_off();

    return 0;
}

void turn_right(){
	turn_left();
	turn_left();
	turn_left();
}

void jump_over(){
	turn_left();
	spider();
	turn_right();
	step();
	spider();
	turn_right();
	step();
	spider();
	turn_left();	
}

void spider(){
	while(right_is_blocked() && front_is_clear()){
		step();
	}
}
