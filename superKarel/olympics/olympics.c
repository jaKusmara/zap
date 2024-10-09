#include <superkarel.h>

#define SPEED 100

void jump_over();
void turn_right();

int main() {
    turn_on("olympics.kw");
	

    while(no_beepers_present()){
    	while(front_is_blocked()){
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
	step();
	turn_right();
	step();
	turn_right();
	step();
	turn_left();
}
