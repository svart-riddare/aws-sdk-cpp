﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/chime/model/NotificationTarget.h>
#include <aws/core/utils/HashingUtils.h>
#include <aws/core/Globals.h>
#include <aws/core/utils/EnumParseOverflowContainer.h>

using namespace Aws::Utils;


namespace Aws
{
  namespace Chime
  {
    namespace Model
    {
      namespace NotificationTargetMapper
      {

        static const int EventBridge_HASH = HashingUtils::HashString("EventBridge");
        static const int SNS_HASH = HashingUtils::HashString("SNS");
        static const int SQS_HASH = HashingUtils::HashString("SQS");


        NotificationTarget GetNotificationTargetForName(const Aws::String& name)
        {
          int hashCode = HashingUtils::HashString(name.c_str());
          if (hashCode == EventBridge_HASH)
          {
            return NotificationTarget::EventBridge;
          }
          else if (hashCode == SNS_HASH)
          {
            return NotificationTarget::SNS;
          }
          else if (hashCode == SQS_HASH)
          {
            return NotificationTarget::SQS;
          }
          EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
          if(overflowContainer)
          {
            overflowContainer->StoreOverflow(hashCode, name);
            return static_cast<NotificationTarget>(hashCode);
          }

          return NotificationTarget::NOT_SET;
        }

        Aws::String GetNameForNotificationTarget(NotificationTarget enumValue)
        {
          switch(enumValue)
          {
          case NotificationTarget::EventBridge:
            return "EventBridge";
          case NotificationTarget::SNS:
            return "SNS";
          case NotificationTarget::SQS:
            return "SQS";
          default:
            EnumParseOverflowContainer* overflowContainer = Aws::GetEnumOverflowContainer();
            if(overflowContainer)
            {
              return overflowContainer->RetrieveOverflow(static_cast<int>(enumValue));
            }

            return {};
          }
        }

      } // namespace NotificationTargetMapper
    } // namespace Model
  } // namespace Chime
} // namespace Aws
