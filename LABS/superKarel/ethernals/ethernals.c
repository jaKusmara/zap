#include <superkarel.h>

#define SPEED 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 400 

int main() {
    turn_on("empty.kw");
	set_step_delay(SPEED);
    
   	while(not_facing_north()){
		turn_left();
	}

	while(true){
		step();
	 if(front_is_blocked()){
	 	turn_left();
		turn_left();
	 }

    }

    turn_off();

    return 0;
}
