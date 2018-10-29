# amrita-2019
2019 campus placement programming round

### Build from Source

1. Install ROS Kinetic (choose Desktop-Full Install under point 1.4): [http://wiki.ros.org/kinetic/Installation/Ubuntu](http://wiki.ros.org/kinetic/Installation/Ubuntu)

2. Install build tools:

        sudo apt-get install python-wstool python-catkin-tools clang-format-3.8

3. Re-use or create a catkin workspace:

        export CATKIN_WS=~/ws_catkin
        mkdir -p $CATKIN_WS/src
        cd $CATKIN_WS/src

4. Download the required repositories and install any dependencies:

        git clone https://github.com/rapyuta-robotics/amrita-2019.git
        wstool init .
        wstool update 
	rosdep update
        rosdep install --from-paths . --ignore-src --rosdistro kinetic

5. Configure and build the workspace:

        cd ..
        catkin config --extend /opt/ros/kinetic --cmake-args -DCMAKE_BUILD_TYPE=Release
        catkin build

6. Source the workspace.

        source devel/setup.bash
        
7. Optional:  If you would like to source the workspace for all terminals, add the below line to ~/.bashrc

        source <path_to_your_workspace>/devel/setup.bash

### Testing the prelimiary setup

To verify if the packages work one should be able to run the following and get few debug messages printed out!

        rosrun map_planner map_planner_node

