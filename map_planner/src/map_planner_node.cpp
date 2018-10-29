#include <map_planner/map_planner.h>

int main (int argc, char *argv[]) {

    ROS_INFO("Planner executable called");
    std::string map_name = "maze.pgm";

    amrita2019::AStarPlanner astar; // construct astar planner
    amrita2019::DFSPlanner dfs; // construct dfs planner

    astar.initialize(map_name);
    dfs.initialize(map_name);

    /** GET the start and goal from user and print the plan
    astar.makePlan(.....);
    dfs.makePlan (....);



    /**
    BONUS POINTS: 
    1. use boost smart pointer
    2. use thread: one thread should plan a path using DFS and the other thread should plan the plan using Astar
    **/

    return 0;
}