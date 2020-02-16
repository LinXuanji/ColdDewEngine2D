#include <CD.h>

class Tank :public cde::App {
public:
	Tank()
	{

	}
	~Tank()
	{

	}
};

cde::App* cde::CreateApp()
{
	return new Tank();
}
