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

#include <aws/health/model/DescribeAffectedAccountsForOrganizationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Health::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAffectedAccountsForOrganizationResult::DescribeAffectedAccountsForOrganizationResult() : 
    m_eventScopeCode(EventScopeCode::NOT_SET)
{
}

DescribeAffectedAccountsForOrganizationResult::DescribeAffectedAccountsForOrganizationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_eventScopeCode(EventScopeCode::NOT_SET)
{
  *this = result;
}

DescribeAffectedAccountsForOrganizationResult& DescribeAffectedAccountsForOrganizationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("affectedAccounts"))
  {
    Array<JsonView> affectedAccountsJsonList = jsonValue.GetArray("affectedAccounts");
    for(unsigned affectedAccountsIndex = 0; affectedAccountsIndex < affectedAccountsJsonList.GetLength(); ++affectedAccountsIndex)
    {
      m_affectedAccounts.push_back(affectedAccountsJsonList[affectedAccountsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("eventScopeCode"))
  {
    m_eventScopeCode = EventScopeCodeMapper::GetEventScopeCodeForName(jsonValue.GetString("eventScopeCode"));

  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }



  return *this;
}
