#include <ros/ros.h>
#include "gflags/gflags.h"

DEFINE_string(pose_graph_filename, "",
              "Proto stream file containing the pose graph.");
DEFINE_string(
    urdf_filename, "",
    "URDF file that contains static links for your sensor configuration.");

int main(int argc, char **argv)
{
  FLAGS_alsologtostderr = true;
  google::InitGoogleLogging(argv[0]);
  google::ParseCommandLineFlags(&argc, &argv, true);

  CHECK(!FLAGS_pose_graph_filename.empty())
      << "-pose_graph_filename is missing.";
  CHECK(!FLAGS_urdf_filename.empty())
      << "-pose_graph_filename is missing.";

}
