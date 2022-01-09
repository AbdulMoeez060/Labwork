#include "Sound.h"

Sound::Sound()
{
	cout << "Default Sound Constructor." << endl;
	model = {};
	channels = 0;
}
Sound::Sound(string m, int ch):model(m),channels(ch)
{
	cout << "Parameterized Sound Constructor." << endl;

}
Sound::Sound(const Sound& obj)
{
	cout << "Copy Sound Constructor." << endl;
	model = obj.model;
	channels = obj.channels;
}
Sound::~Sound()
{
	cout << " Sound Destructor." << endl;

}
void Sound::setmodelSound(string m)
{
	model = m;
}
void Sound::setchannelsSound(int ch)
{
	channels = ch;
}
string Sound::getmodelSound()
{
	return model;
}
int Sound::getchannelsSound()
{
	return channels;
}
void Sound::displaySound()
{
	cout << "Sound: " << endl << "Model: " << model << endl << "No of Channels: " << channels << endl;

}