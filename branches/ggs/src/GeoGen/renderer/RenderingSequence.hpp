#pragma once

#include <vector>

namespace geogen 
{
	namespace renderer
	{
		class RenderingStep;

		class RenderingSequence 
		{
			std::vector<RenderingStep*> steps;
			unsigned objectTableSize;
			double renderScale;

			// Non-copyable
			RenderingSequence(RenderingSequence const&) {};
			RenderingSequence& operator=(RenderingSequence const&) {};
		public:
			typedef std::vector<RenderingStep const*>::const_iterator const_iterator;
			typedef std::vector<RenderingStep*>::iterator iterator;

			const unsigned SLOT_NUMBER_NONE = -1;

			RenderingSequence(double renderScale) : renderScale(renderScale) {};
			~RenderingSequence();

			inline double GetRenderScale() const { return this->renderScale; }

			inline const_iterator Begin() const { return *(const_iterator*)(&this->steps.begin()); }
			inline const_iterator End() const { return *(const_iterator*)(&this->steps.end()); }
			inline iterator Begin() { return this->steps.begin(); }
			inline iterator End() { return this->steps.end(); }

			void AddStep(RenderingStep* step);

			inline unsigned GetRequiredObjectTableSize() const { return this->objectTableSize; };
		};
	}
}