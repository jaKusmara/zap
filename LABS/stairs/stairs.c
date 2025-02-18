#include <karel.h>

#define SPEED 100

void turn_right();
void move_on_stair();
bool right_is_clear();

int main() {
    turn_on("stairs3.kw");

    set_step_delay(SPEED);
/*
    step();

    while(!front_is_clear()){
    	move_on_stair();

	while(beepers_present()){
		pick_beeper();
	}
    }

    while(beepers_in_bag()){
    	put_beeper();
    }
*/

    printf(world_width());
    turn_off();

    return 0;
}
/*
void turn_right(){
	turn_left();
	turn_left();
	turn_left();
}

void move_on_stair(){
	turn_left();
	step();
	turn_right();

	if(front_is_clear()){
		step();
	}else{
		move_on_stair();
	}
	
}*/
