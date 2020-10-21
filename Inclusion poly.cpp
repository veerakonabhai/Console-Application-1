#include <iostream> 
using namespace std; 

class Image { 

public: 
	Image() 
	{ 
	} 

	virtual void display() = 0; 
}; 
class Jpg : public Image { 
public: 
	Jpg() 
	{ 
	} 

	void display() 
	{ 
		cout << "JPG Image File" << endl; 
	} 
}; 

class Png : public Image { 
public: 
	Png() 
	{ 
	} 

	void display() 
	{ 
		cout << "PNG Image File" << endl; 
	} 
}; 

// Main function 
int main() 
{ 
	Image* img; 
	Jpg jg; 
	Png pg; 

	// stores the address of Jpg 
	img = &jg; 

	// invoking display() func of Jpg 
	img->display(); 

	// stores the address of Png 
	img = &pg; 

	// invoking display() func of Png 
	img->display(); 

	return 0; 
} 
