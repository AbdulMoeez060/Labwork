#include"GPU.h"

GPU::GPU()
{
	cout << "Default GPU Constructor" << endl;
	internalMemory = 0;
	frequency = 0.0;
}
GPU::GPU(int i, float fre):internalMemory(i),frequency(fre)
{
	cout << "Parameterized GPU Constructor" << endl;

}
GPU::GPU(const GPU& obj)
{
	cout << "Copy GPU Constructor" << endl;
	internalMemory = obj.internalMemory;
	frequency = obj.frequency;
}
GPU::~GPU()
{
	cout << "GPU Destructor." << endl;
}
void GPU::setinternalmemgpu(int i)
{
	internalMemory = i;
}
void GPU::setfrequencygpu(float fre)
{
	frequency = fre;
}
int GPU::getinternalmemgpu()
{
	return internalMemory;
}
float GPU::getfrequencygpu()
{
	return frequency;
}
void GPU::displaygpu()
{
	cout << "GPU: " << endl << "Internal Memory: " << internalMemory << endl << "Frequency: " << frequency << endl;

}