#pragma once

#include "Instruction.hpp"

namespace geogen 
{
	namespace compiler 
	{
		namespace instructions
		{
			class YieldAsMainInstruction : public Instruction
			{
			private:
			public:				
				YieldAsMainInstruction(CodeLocation location) : Instruction(location)
				{
				}

				virtual void Serialize(std::iostream& stream) const { stream << "YieldAsMain" << std::endl; }
			};
		}
	}
}