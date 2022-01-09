#include<iostream>
#include<string>
using namespace std;

class Sound
{
private:
	string model;
	int channels;
public:
	Sound();
	Sound(string m, int ch);
	Sound(const Sound& obj);
	~Sound();
	void setmodelSound(string m);
	void setchannelsSound(int ch);
	string getmodelSound();
	int getchannelsSound();
	void displaySound();
};

