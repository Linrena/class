#include"helloclass.h"

Helloclass::Helloclass()
{
	cout<<"I'm being created.\n";
}

Helloclass::~Helloclass()
{
	cout<<"I'm being destroyed.\n";
}

void  Helloclass::sayhello()
{
	cout<<"Hello Class!!!\n";
}
