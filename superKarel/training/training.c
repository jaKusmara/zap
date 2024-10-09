#include <superkarel.h>

void jump_over();
void turn_right();

int main() {
    turn_on("training.kw");
	
    while(no_beepers_present()){
	jump_over();
    }

    turn_off();

    return 0;
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

void turn_right(){
	turn_left();
	turn_left();
	turn_left();
}
