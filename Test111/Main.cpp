#include <Siv3D.hpp>



void Main()
{
	

	while (System::Update())
	{
		for (double x = -10.0; x <= 800.0; x += 0.1) {
			Circle(x, 10, 5).draw(Palette::Red);
		}
	}
}