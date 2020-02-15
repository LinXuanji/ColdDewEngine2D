#include <CD.h>

class Tank :public cde::Game {
public:
	Tank()
	{

	}
	~Tank()
	{

	}
};

cde::Game* cde::CreateGame()
{
	return new Tank();
}
