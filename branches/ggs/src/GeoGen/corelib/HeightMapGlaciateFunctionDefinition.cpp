#include "HeightMapGlaciateFunctionDefinition.hpp"
#include "../runtime/VirtualMachine.hpp"
#include "../runtime/ManagedObject.hpp"
#include "HeightMapTypeDefinition.hpp"
#include "HeightMapFlatRenderingStep.hpp"
#include "HeightOverflowException.hpp"
#include "HeightMapGlaciateRenderingStep.hpp"
#include "BooleanTypeDefinition.hpp"
#include "NumberTypeDefinition.hpp"
#include "InvalidStrengthException.hpp"

using namespace std;
using namespace geogen;
using namespace corelib;
using namespace runtime;
using namespace renderer;

ManagedObject* HeightMapGlaciateFunctionDefinition::CallNative(CodeLocation location, VirtualMachine* vm, ManagedObject* instance, vector<ManagedObject*> arguments) const
{
	NumberTypeDefinition const* numberTypeDefinition = vm->GetNumberTypeDefinition();
	BooleanTypeDefinition const* booleanTypeDefinition = vm->GetBooleanTypeDefinition();

	vector<TypeDefinition const*> expectedTypes;
	expectedTypes.push_back(numberTypeDefinition);
	expectedTypes.push_back(booleanTypeDefinition);

	vector<ManagedObjectHolder> convertedObjectHolders = this->CheckArguments(vm, location, expectedTypes, arguments, 0);

	Number strength = arguments.size() > 0 ? dynamic_cast<NumberObject*>(arguments[0])->GetValue() : 2;

	if (strength < 0 || strength > 1)
	{
		throw InvalidStrengthException(location);
	}

	bool includeNegative = arguments.size() > 1 ? dynamic_cast<BooleanObject*>(arguments[1])->GetValue() : false;

	vector<unsigned> argumentSlots;
	argumentSlots.push_back(vm->GetRendererObjectSlotTable().GetObjectSlotByAddress(instance));
	unsigned returnObjectSlot = vm->GetRendererObjectSlotTable().GetObjectSlotByAddress(instance);
	RenderingStep* renderingStep = new HeightMapGlaciateRenderingStep(location, argumentSlots, returnObjectSlot, strength, includeNegative);
	vm->GetRenderingSequence().AddStep(renderingStep);

	return instance;
}