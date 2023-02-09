class Student
{
	int rollno;
	char name[20];
	int marks[5];
public:
	Student();
	Student(int, const char*, int, int, int, int, int);
	void Accept();
	void Display();
	float calcAverage();
	char calcGrade();
	int highestMarks();
	int lowestMarks();
	void showResult();
};
