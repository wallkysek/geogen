#include "VirtualMachine.hpp"
#include "TypeDefinition.hpp"
#include "StaticObject.hpp"
#include "..\ApiUsageException.hpp"

using namespace geogen::runtime;

VirtualMachine::VirtualMachine(CompiledScript const& compiledScript)
: compiledScript(compiledScript), status(VIRTUAL_MACHINE_STATUS_READY)
{
	this->InitializeTypes();
};

void VirtualMachine::InitializeTypes()
{
	for (
		SymbolDefinitionTable<TypeDefinition>::const_iterator it = this->GetCompiledScript().GetTypeDefinitions().Begin(); 
		it != this->GetCompiledScript().GetTypeDefinitions().End(); 
		it++)
	{
		it->second->Initialize(*this);
	}
}

VirtualMachineStepResult VirtualMachine::Step()
{
	if (this->status != VIRTUAL_MACHINE_STATUS_READY)
	{
		throw ApiUsageException("The VM is in incorrect state.");
	}

	return VIRTUAL_MACHINE_STEP_RESULT_RUNNING;
}

void VirtualMachine::Run()
{
	while (this->status == VIRTUAL_MACHINE_STATUS_READY)
	{
		this->Step();
	}
}