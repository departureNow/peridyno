/**
 * Copyright 2021 Xiaowei He
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
#include "Module.h"
#include "Module/CollidableObject.h"

namespace dyno
{
	class CollisionModel : public Module
	{
	public:
		CollisionModel();
		virtual ~CollisionModel();

		virtual bool isSupport(std::shared_ptr<CollidableObject> obj) = 0;

		virtual void doCollision() = 0;
	
		std::string getModuleType() override { return "CollisionModel"; }

		virtual void addCollidableObject(std::shared_ptr<CollidableObject> obj) {};

	protected:
		void updateImpl() override;
	};

}
