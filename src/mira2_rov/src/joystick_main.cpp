#include<mira2_rov/joystick_utils.hpp>
#include <ros/ros.h>
#include<custom_msgs/commands.h>

int main(int argc, char **argv) {
    ros::init(argc, argv, "joy_controller_node");
    ros::NodeHandle nh;
    joystick_controller obj = joystick_controller(nh);
    while(ros::ok()){
        ros::spinOnce();
    }
}
