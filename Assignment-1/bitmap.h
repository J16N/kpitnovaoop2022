class Complex
{
	int real;
	int img;
	
    public:
		Complex();
		Complex(int, int);
		void Accept();
		void Display();
		Complex operator+(Complex&);
		Complex operator-(Complex&);
		Complex operator++();
		Complex operator++(int);
		bool operator==(Complex&);
};
