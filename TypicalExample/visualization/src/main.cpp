#include <iostream>
#include <string>
#include <chrono>
#include "util/dds_publisher.h"

#include <ros_idl/visualization_msgs/msg/MarkerPubSubTypes.h>


int32_t g_shape_type = visualization_msgs::msg::Marker__ARROW;

void proc(visualization_msgs::msg::Marker& marker)
{
    g_shape_type++;
    if (g_shape_type > visualization_msgs::msg::Marker__LINE_STRIP)
        g_shape_type = visualization_msgs::msg::Marker__ARROW;

    // Set the frame ID and timestamp.  See the TF tutorials for information on these.
    marker.header().frame_id("/my_frame");
    auto now = std::chrono::system_clock::now().time_since_epoch();  
    // marker.header().stamp( std::chrono::duration_cast<std::chrono::seconds>(now).count() );


    // Set the namespace and id for this marker.  This serves to create a unique ID
    // Any marker sent with the same namespace and id will overwrite the old one
    marker.ns("basic_shapes");
    marker.id(0);

    // Set the marker type.  Initially this is CUBE, and cycles between that and SPHERE, ARROW, and CYLINDER
    marker.type(g_shape_type);

    // Set the marker action.  Options are ADD, DELETE, and new in ROS Indigo: 3 (DELETEALL)
    marker.action( visualization_msgs::msg::Marker__ADD);

    // Set the pose of the marker.  This is a full 6DOF pose relative to the frame/time specified in the header
    marker.pose().position().x(0);
    marker.pose().position().y(0);
    marker.pose().position().z(0);
    marker.pose().orientation().x(0.0);
    marker.pose().orientation().y(0.0);
    marker.pose().orientation().z(0.0);
    marker.pose().orientation().w(1.0);

    // Set the scale of the marker -- 1x1x1 here means 1m on a side
    marker.scale().x(1.0);
    marker.scale().y(1.0);
    marker.scale().z(1.0);

    // Set the color -- be sure to set alpha to something non-zero!
    marker.color().r(0.0f);
    marker.color().g(1.0f);
    marker.color().b(0.0f);
    marker.color().a(1.0f);
};

int main(int argc, char** argv) 
{

    DDSGenericPublisher<visualization_msgs::msg::Marker, 
        visualization_msgs::msg::MarkerPubSubType> my_pub("rt/joyson/acc_visz");
  
    while(1)
    {
        visualization_msgs::msg::Marker  data;
        proc(data);
        my_pub.Publish(&data);
        std::this_thread::sleep_for(std::chrono::milliseconds(500));
        printf("pub marker %d\n", g_shape_type);
    }

    return 0;
};