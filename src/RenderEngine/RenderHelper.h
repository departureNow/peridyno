/**
 * Copyright 2017-2021 Jian SHI
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      https://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#pragma once

#include <glm/glm.hpp>

class AxisRenderer;
class BBoxRenderer;
class GroundRenderer;
class BackgroundRenderer;
class RenderHelper
{
public:
	RenderHelper();
	~RenderHelper();

	void initialize();

	void drawGround(float scale = 3.f);
	void drawAxis(float lineWidth = 2.f);
	void drawBBox(glm::vec3 pmin, glm::vec3 pmax, int type = 0);
	void drawBackground(glm::vec3 color0, glm::vec3 color1);

private:
	AxisRenderer*			mAxisRenderer = NULL;
	BBoxRenderer*			mBBoxRenderer = NULL;
	GroundRenderer*			mGroundRenderer = NULL;
	BackgroundRenderer*		mBackgroundRenderer = NULL;
};