#include <ostream>
#include <sstream>

#include "IfInstruction.hpp"
#include "../CodeBlockStackEntry.hpp"
#include "../VirtualMachine.hpp"
#include "../ManagedObject.hpp"
#include "../../corelib/BooleanTypeDefinition.hpp"
#include "../IncorrectTypeException.hpp"
#include "../../InternalErrorException.hpp"
#include "../TypeDefinition.hpp"

using namespace std;
using namespace geogen;
using namespace geogen::runtime;
using namespace geogen::corelib;
using namespace geogen::runtime::instructions;

void IfInstruction::Serialize(IOStream& stream) const
{
	stream << "If" << std::endl;

	StringStream substream1;
	this->ifBranchCodeBlock.Serialize(substream1);

	stream << substream1.str();

	StringStream substream2;
	this->elseBranchCodeBlock.Serialize(substream2);

	stream << substream2.str();
}

InstructionStepResult IfInstruction::Step(VirtualMachine* vm) const
{
	ManagedObject* conditionObject = vm->GetObjectStack().Top();				

	TypeDefinition const* boolTypeDefinition = vm->GetBooleanTypeDefinition();
	if (conditionObject->GetType() != boolTypeDefinition)
	{
		throw IncorrectTypeException(GGE2104_IncorrectConditionResultType, this->GetLocation(), boolTypeDefinition->GetName(), conditionObject->GetType()->GetName());
	}
	else if (conditionObject->IsStaticObject()){
		throw IncorrectTypeException(GGE2104_IncorrectConditionResultType, this->GetLocation(), boolTypeDefinition->GetName(), GG_STR("Static"));
	}

	if (dynamic_cast<BooleanObject*>(conditionObject)->GetValue())
	{
		vm->GetCallStack().Top().GetCodeBlockStack().Push(this->GetLocation(), &vm->GetMemoryManager(), this->GetIfBranchCodeBlock(), false);
	}
	else
	{
		vm->GetCallStack().Top().GetCodeBlockStack().Push(this->GetLocation(), &vm->GetMemoryManager(), this->GetElseBranchCodeBlock(), false);
	}

	vm->GetObjectStack().Pop(vm);
				
	return INSTRUCTION_STEP_RESULT_TYPE_NORMAL;
}