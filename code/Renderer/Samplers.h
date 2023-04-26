//
//  Samplers.h
//
#pragma once
#include "DeviceContext.h"
#include <vulkan/vulkan.h>

/*
====================================================
Samplers
====================================================
*/
class Samplers
{
public:
    static bool InitializeSamplers(DeviceContext* device);
    static void Cleanup(DeviceContext* device);

    static VkSampler m_samplerStandard;
    static VkSampler m_samplerDepth;
};
