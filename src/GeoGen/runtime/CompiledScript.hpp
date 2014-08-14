#pragma once

#include <vector>

#include "../String.hpp"
#include "CodeBlock.hpp"
#include "MetadataValue.hpp"
#include "MetadataKeyValueCollection.hpp"
#include "../corelib/CoreLibrary.hpp"
#include "ScriptParameters.hpp"

namespace geogen 
{
	namespace runtime
	{
		class TypeDefinition;
		class VariableDefinition;
		class FunctionDefinition;
		class Library;

		class CompiledScript
		{
			private:	
				SymbolDefinitionTable<VariableDefinition> globalVariableDefinitions;
				SymbolDefinitionTable<FunctionDefinition> globalFunctionDefinitions;
				SymbolDefinitionTable<TypeDefinition> typeDefinitions;

				std::vector<FunctionDefinition*> ownedFunctionDefinitions;
				std::vector<TypeDefinition*> ownedTypeDefinitions;

				MetadataKeyValueCollection metadata;

				corelib::CoreLibrary coreLibrary;

				String code;
			public:
				static const String MAIN_FUNCTION_NAME;

				CompiledScript(String code);
				~CompiledScript();

				inline String GetCode() const { return this->code; }

				ScriptParameters CreateScriptParameters() const;

				inline MetadataKeyValueCollection const& GetMetadata() const { return this->metadata; }
				inline MetadataKeyValueCollection& GetMetadata() { return this->metadata; }

				inline SymbolDefinitionTable<VariableDefinition> const& GetGlobalVariableDefinitions() const { return this->globalVariableDefinitions; }
				//inline SymbolDefinitionTable<VariableDefinition>& GetGlobalVariableDefinitions() { return this->globalVariableDefinitions; }

				inline SymbolDefinitionTable<FunctionDefinition> const& GetGlobalFunctionDefinitions() const { return this->globalFunctionDefinitions; }
				//inline SymbolDefinitionTable<FunctionDefinition>& GetGlobalFunctionDefinitions() { return this->globalFunctionDefinitions; }

				inline SymbolDefinitionTable<TypeDefinition> const& GetTypeDefinitions() const { return this->typeDefinitions; }
				//inline SymbolDefinitionTable<TypeDefinition>& GetTypeDefinitions() { return this->typeDefinitions; }

				/*inline CodeBlock& GetRootCodeBlock() { return this->rootCodeBlock; }
				inline CodeBlock const& GetRootCodeBlock() const { return this->rootCodeBlock; }*/

				/*inline CodeBlock& GetInitializationCodeBlock() { return this->initializationCodeBlock; }
				inline CodeBlock const& GetInitializationCodeBlock() const { return this->initializationCodeBlock; }*/

				bool AddGlobalFunctionDefinition(FunctionDefinition* functionDefintion);
				bool AddTypeDefinition(TypeDefinition* typeDefinition);

				void AddLibrary(Library const* library);
		};
	}
}