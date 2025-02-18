#include <superkarel.h>
#define SPEED 100

void entrances();
void face_north();
void turn_right();
void original();
void find_object();
void check_object();
void hold_left();

int main()
{
    turn_on("task_7.kw");
    set_step_delay(SPEED);

    entrances();
    original();
    while( front_is_clear() )
    {
        find_object();
        check_object();
    }
    if ( left_is_clear() )
    {
        turn_left();
        step();
        if ( beepers_present() )
        {
            pick_beeper();
            if ( no_beepers_present() )
            {
                put_beeper();
            } else
            {
                pick_beeper();
            }
        }
        turn_left();
        turn_left();
        step();
        turn_left();
    }

    turn_off();
}

void check_object()
{
    turn_left();
    step();
    if ( beepers_present() ) pick_beeper();

    hold_left();
    step();
    turn_left(); 
    if ( front_is_clear() )
    {
        step();
    }
}

void hold_left()
{    
    while ( left_is_blocked() && front_is_clear() )
    {
        step();
        if ( beepers_present() )
        {
            pick_beeper();
            break;
        }
        if ( front_is_blocked() && left_is_blocked() )
        {
            turn_right();
            if ( front_is_blocked() )
            {
                turn_right();
            }
        }
        if ( left_is_clear() )
        {
            turn_left();
            step();
            if ( beepers_present() )
            {
                pick_beeper();
                break;
            }
            if ( left_is_clear() )
            {
                turn_left();
                step();
                if ( beepers_present() )
                {
                    pick_beeper();
                    break;
                }
            }
        }
        
        if ( front_is_blocked() && left_is_blocked() )
        {
            turn_right();
            if ( front_is_blocked() )
            {
                turn_right();
            }
        }

        if ( front_is_blocked() && right_is_blocked() && left_is_blocked() )
        {
            turn_left();
            turn_left();
            hold_left();
        }
    }
}

void find_object()
{
    while ( front_is_clear() && left_is_blocked() )
    {
        step();
    }
}

void original()
{
    while ( !facing_west() )
    {
        turn_left();
    }
    while ( front_is_clear() )
    {
        step();
    }
    while ( !facing_east() )
    {
        turn_left();
    }
}

void face_north()
{
    while ( !facing_north() )
    {
        turn_left();
    }
}

void turn_right()
{
    set_step_delay(0);
    turn_left();
    turn_left();
    set_step_delay(SPEED);
    turn_left();
}

void entrances()
{
    while ( left_is_blocked() && front_is_clear() )
    {
        step();
    }
    if ( left_is_clear() )
    {
        turn_left();
        step();
        if ( no_beepers_present() ) 
        {
            put_beeper();
            put_beeper();
            turn_left();
            turn_left();
            step();
            turn_left();
            if ( front_is_clear() ) step();
            entrances();
        }
        if ( beepers_present() )
        {
            turn_left();
            turn_left();
            step();
            turn_left();
        }
    }
}

