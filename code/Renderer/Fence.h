//
//  Fence.h
//
#pragma once
#include "DeviceContext.h"
#include <vulkan/vulkan.h>

/*
====================================================
Fence
====================================================
*/
class Fence
{
public:
    Fence(DeviceContext* device)
    {
        Create(device);
        m_device = device;
    }
    ~Fence() { Wait(m_device); }

    VkFence m_vkFence;

private:
    bool Create(DeviceContext* device);
    bool Wait(DeviceContext* device);

    DeviceContext* m_device;
};