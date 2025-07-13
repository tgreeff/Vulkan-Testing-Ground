#include <vulkan/vulkan.h>

// Create a graphics pipeline object
VkPipeline pipeline;

// Create a vertex buffer object to store the control points
VkBuffer vbo;

// Create a command buffer
VkCommandBuffer cmdBuffer;

// Begin recording commands
vkBeginCommandBuffer(cmdBuffer, VK_COMMAND_BUFFER_USAGE_SIMULTANEOUS_USE_BIT, nullptr);

// Bind the graphics pipeline and vertex buffer object
vkCmdBindPipeline(cmdBuffer, VK_PIPELINE_BIND_POINT_GRAPHICS, pipeline);
vkCmdBindVertexBuffers(cmdBuffer, 0, 1, &vbo, nullptr);

// Draw the curve using the VK_PRIMITIVE_TOPOLOGY_LINE_STRIP_WITH_ADJACENCY topology
vkCmdDraw(cmdBuffer, numControlPoints, 1, 0, 0);

// End the command buffer recording
vkEndCommandBuffer(cmdBuffer);