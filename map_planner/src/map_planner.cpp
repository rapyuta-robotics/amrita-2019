#include <map_planner/map_planner.h>

using namespace amrita2019;

void Planner::initialize(std::string map_name /*,DEFINE YOUR DATASTRUCTURE e.g GRAPH*/) {
    std::string map_path = ros::package::getPath("map_planner") + "/data" + "/" + map_name;
    ROS_INFO("Initializing the planner with %s", map_path.c_str());
    /** 
    PLEASE FILL IN YOUR LOGIC TO OPEN THIS FILE AND CONVERT TO THE DATASTRUCTURE OF YOUR CHOICE
    **/
}

bool DFSPlanner::makePlan(const Pose& start, const Pose& goal, std::vector<Pose>& plan) {
    ROS_ERROR("Yet to be implemented");
    return false;
}

bool AStarPlanner::makePlan(const Pose& start, const Pose& goal, std::vector<Pose>& plan) {
    ROS_ERROR("Yet to be implemented");
    return false;
}