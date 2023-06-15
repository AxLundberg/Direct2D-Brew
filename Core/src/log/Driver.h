#pragma once
#include <memory>

namespace CPR::LOG
{
	struct Entry;
	class ITextFormatter;

	class IDriver
	{
	public:
		virtual ~IDriver() = default;
		virtual void Flush() = 0;
		virtual void Submit(const Entry&) = 0;
	};

	class ITextDriver : public IDriver
	{
	public:
		virtual void SetFormatter(std::shared_ptr<ITextFormatter>) = 0;
	};
}
