/**
 * Copyright (c) 2017 - 2018, Lava
 * All rights reserved.
 * 
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 **/

#ifndef __LAVA_TEXTURE2DARRAY__
#define __LAVA_TEXTURE2DARRAY__

#include "includes.hpp"

#include "Texture.h"

#include "api.h" // #include <lava/api.h>

namespace lava
{
  class Device;
  class Queue;
  class Sampler;
  class CommandPool;

  class Texture1DArray : public Texture
  {
  public:
	LAVA_API
	// All images on filePaths as same dimensions
	Texture1DArray(const std::shared_ptr<Device>& device,
	  std::vector< std::string >& filePaths,
	  const std::shared_ptr<CommandPool>& cmdPool,
	  const std::shared_ptr<Queue>& queue,
	  vk::Format format,
	  vk::ImageUsageFlags imageUsageFlags = vk::ImageUsageFlagBits::eSampled,
	  vk::ImageLayout imageLayout = vk::ImageLayout::eShaderReadOnlyOptimal,
	  bool forceLinear = false);
  };

  class Texture2DArray : public Texture
  {
  public:
    LAVA_API
    // All images on filePaths as same dimensions
    Texture2DArray( const std::shared_ptr<Device>& device, 
      std::vector< std::string >& filePaths,
      const std::shared_ptr<CommandPool>& cmdPool, 
      const std::shared_ptr<Queue>& queue,
      vk::Format format,
      vk::ImageUsageFlags imageUsageFlags = vk::ImageUsageFlagBits::eSampled,
      vk::ImageLayout imageLayout = vk::ImageLayout::eShaderReadOnlyOptimal,
      bool forceLinear = false );
  };
}

#endif /* __LAVA_TEXTURE2DARRAY__ */