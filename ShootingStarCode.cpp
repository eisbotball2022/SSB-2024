#include <kipr/wombat.h>

// move straight for 13 seconds
void moveStraight(){
    create_drive_direct(-250,-250); //foward to Area 6
    msleep(5700);
}
    
void turnLeft(){ // gettign 3 rocks into rock heap
    create_drive_direct(-250,0);
    msleep(800);
}

void goalOne(){ //getting 3 rocks into rock heap
	moveStraight(); //First move strech
    create_drive_direct(-250,0); //turns left into rock heap 1st time
    msleep(1000);
    create_drive_direct(-250,-250);// goes straight into rock heap 1st time
    msleep(2100);

}

void goalTwo(){ //getting the  orange poms
    create_drive_direct(250,250); //Backs up from rock heap 
    msleep(1750);
    create_drive_direct(-250,0); //turns left towards poms
    msleep(1200);
    create_drive_direct(-250,-250); //straight into poms
    msleep(675);
    create_drive_direct(0,-250); //reposition turn for poms
    msleep(300);
    create_drive_direct(-250,-250); //straight into area 4
    msleep(675);
   

}
void goalThree(){ //getting 4th rock
     create_drive_direct(250,250);//backs up from area 4
   msleep(1350);
    create_drive_direct(-250,-0); //turns left towards intersection rocks 4# 5#
    msleep(1050);
    create_drive_direct(-250,-250); // foward to rock 4# 5#
    msleep(450);
    create_drive_direct(-250,0); //grabs rock 4# and turns 360
    msleep(2600);
    create_drive_direct(-250,-250); //fowards towards lava tubes
    msleep(880);
    create_drive_direct(-250,0); // turns left towards rock heap/area 4
    msleep(800);
    create_drive_direct(-250,-250); //foward to rock heap
    msleep(1200);
    create_drive_direct(-250,0);// left towards rock heap
    msleep(800);
    create_drive_direct(-250,-250); //pushes rock intp rock heap
    msleep(700);
                               
                                  
    
}
void goalFour(){//moves one rock
    create_drive_direct(250,250); //backs up from rock heap 
   msleep(1000);
   create_drive_direct(-250,0); //turns left facing starting
   msleep(600);
   create_drive_direct(-250,0); //repositioning turn
    msleep(800);
    create_drive_direct(-250,-250); //foward to 5th rock
    msleep(2000);
    create_drive_direct(0,-250); //repositioning
    msleep(300);
    create_drive_direct(-250,-250); //repositiong turn
    msleep(350);
   create_drive_direct(-250,250); //turns harp left while gathering rock 5#
    msleep(1250);
   create_drive_direct(-250,-250); //foward back to rock heap again
     msleep(800);
    create_drive_direct(-250,0); //turns right into rock heap
    msleep(1500);
    create_drive_direct(-250,-250); //foward into rock heap 5th rock
    msleep(1300);
}
void goalFive(){//pushes pom mountain & gets one rock
    create_drive_direct(250,250); //backs up from rock heap
    msleep(950);
}

int main()
{
    create_connect();
    goalOne();
    goalTwo();
    goalThree();
    goalFour();
    goalFive();
    create_stop();
    create_disconnect();
     return 0;
}