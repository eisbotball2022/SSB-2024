#include <kipr/wombat.h>
void turnleft(){
   motor(0,0);
   motor(1,100);
}

void turnright(){
    motor(0,100);
    motor(1,0);
}

void reverse(){
    motor(0,-100);
    motor(1,-100);
}

void foward(){
    motor(0,100);
    motor(1,100);
}
    
void stop(){
    motor(0,0);
    motor(1,0);
}

void reverseleft(){
    motor(0,0);
    motor(1,-100);
}

void reverseright(){
    motor(0,-100);
    motor(1,0);
}
int main()
{
    enable_servos();
    set_servo_position(3,1928);
    msleep(1000);
    foward();
    msleep(1200);
    stop();
    reverse();
    msleep(500);
    stop();
    reverseleft();
    msleep(1500);
    stop();
    reverse();
    msleep(1200);
    stop();
    turnleft();
    msleep(1500);
    stop();
    foward();
    msleep(3000);
    stop();
    
    
    
   
    
    set_servo_position(3,1243);
    msleep(1000);
    disable_servos(); 
    ao();
    return 0;
     
    
    
    
    
}


