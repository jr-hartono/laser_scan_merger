#include "laser_scan_merger/laser_scan_merger.hpp"

int main(int argc, char** argv)
{
  rclcpp::init(argc, argv);

  auto node = std::make_shared<util::LaserScanMerger>(rclcpp::NodeOptions{});

  rclcpp::spin(node);
  rclcpp::shutdown();
  return 0;
}
