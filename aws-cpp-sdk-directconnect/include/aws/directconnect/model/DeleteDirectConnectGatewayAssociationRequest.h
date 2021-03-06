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

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/DirectConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Container for the parameters to the DeleteDirectConnectGatewayAssociation
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteDirectConnectGatewayAssociationRequest">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API DeleteDirectConnectGatewayAssociationRequest : public DirectConnectRequest
  {
  public:
    DeleteDirectConnectGatewayAssociationRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteDirectConnectGatewayAssociation"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The ID of the direct connect gateway.</p> <p>Example:
     * "abcd1234-dcba-5678-be23-cdef9876ab45"</p> <p>Default: None</p>
     */
    inline const Aws::String& GetDirectConnectGatewayId() const{ return m_directConnectGatewayId; }

    /**
     * <p>The ID of the direct connect gateway.</p> <p>Example:
     * "abcd1234-dcba-5678-be23-cdef9876ab45"</p> <p>Default: None</p>
     */
    inline void SetDirectConnectGatewayId(const Aws::String& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = value; }

    /**
     * <p>The ID of the direct connect gateway.</p> <p>Example:
     * "abcd1234-dcba-5678-be23-cdef9876ab45"</p> <p>Default: None</p>
     */
    inline void SetDirectConnectGatewayId(Aws::String&& value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId = std::move(value); }

    /**
     * <p>The ID of the direct connect gateway.</p> <p>Example:
     * "abcd1234-dcba-5678-be23-cdef9876ab45"</p> <p>Default: None</p>
     */
    inline void SetDirectConnectGatewayId(const char* value) { m_directConnectGatewayIdHasBeenSet = true; m_directConnectGatewayId.assign(value); }

    /**
     * <p>The ID of the direct connect gateway.</p> <p>Example:
     * "abcd1234-dcba-5678-be23-cdef9876ab45"</p> <p>Default: None</p>
     */
    inline DeleteDirectConnectGatewayAssociationRequest& WithDirectConnectGatewayId(const Aws::String& value) { SetDirectConnectGatewayId(value); return *this;}

    /**
     * <p>The ID of the direct connect gateway.</p> <p>Example:
     * "abcd1234-dcba-5678-be23-cdef9876ab45"</p> <p>Default: None</p>
     */
    inline DeleteDirectConnectGatewayAssociationRequest& WithDirectConnectGatewayId(Aws::String&& value) { SetDirectConnectGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the direct connect gateway.</p> <p>Example:
     * "abcd1234-dcba-5678-be23-cdef9876ab45"</p> <p>Default: None</p>
     */
    inline DeleteDirectConnectGatewayAssociationRequest& WithDirectConnectGatewayId(const char* value) { SetDirectConnectGatewayId(value); return *this;}


    /**
     * <p>The ID of the virtual private gateway.</p> <p>Example: "vgw-abc123ef"</p>
     * <p>Default: None</p>
     */
    inline const Aws::String& GetVirtualGatewayId() const{ return m_virtualGatewayId; }

    /**
     * <p>The ID of the virtual private gateway.</p> <p>Example: "vgw-abc123ef"</p>
     * <p>Default: None</p>
     */
    inline void SetVirtualGatewayId(const Aws::String& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = value; }

    /**
     * <p>The ID of the virtual private gateway.</p> <p>Example: "vgw-abc123ef"</p>
     * <p>Default: None</p>
     */
    inline void SetVirtualGatewayId(Aws::String&& value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId = std::move(value); }

    /**
     * <p>The ID of the virtual private gateway.</p> <p>Example: "vgw-abc123ef"</p>
     * <p>Default: None</p>
     */
    inline void SetVirtualGatewayId(const char* value) { m_virtualGatewayIdHasBeenSet = true; m_virtualGatewayId.assign(value); }

    /**
     * <p>The ID of the virtual private gateway.</p> <p>Example: "vgw-abc123ef"</p>
     * <p>Default: None</p>
     */
    inline DeleteDirectConnectGatewayAssociationRequest& WithVirtualGatewayId(const Aws::String& value) { SetVirtualGatewayId(value); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p> <p>Example: "vgw-abc123ef"</p>
     * <p>Default: None</p>
     */
    inline DeleteDirectConnectGatewayAssociationRequest& WithVirtualGatewayId(Aws::String&& value) { SetVirtualGatewayId(std::move(value)); return *this;}

    /**
     * <p>The ID of the virtual private gateway.</p> <p>Example: "vgw-abc123ef"</p>
     * <p>Default: None</p>
     */
    inline DeleteDirectConnectGatewayAssociationRequest& WithVirtualGatewayId(const char* value) { SetVirtualGatewayId(value); return *this;}

  private:

    Aws::String m_directConnectGatewayId;
    bool m_directConnectGatewayIdHasBeenSet;

    Aws::String m_virtualGatewayId;
    bool m_virtualGatewayIdHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
