// Copyright 2021 Kenji Brameld
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef SOCCER_VISION_MSGS_LAYERS__MARKING_SEGMENT_HPP_
#define SOCCER_VISION_MSGS_LAYERS__MARKING_SEGMENT_HPP_

#include "soccer_vision_msgs_layers/visibility_control.h"
#include "rqt_image_overlay_layer/plugin.hpp"
#include "soccer_vision_msgs/msg/marking_segment.hpp"

namespace soccer_vision_msgs_layers
{

class MarkingSegment
  : public rqt_image_overlay_layer::Plugin<soccer_vision_msgs::msg::MarkingSegment>
{
public:
  void overlay(
    QImage & layer,
    const soccer_vision_msgs::msg::MarkingSegment & msg) override;
};

}  // namespace soccer_vision_msgs_layers

#endif  // SOCCER_VISION_MSGS_LAYERS__MARKING_SEGMENT_HPP_