//make the definition of a class
//one file cares about the template
class cat
{
	int Age;
public:
	cat(void);//constructor, when the classes created, it automatically run
	~cat(void);//deconstructor, when the classes destroyed, it automatically run
	int getAge();//just write the function prototype in header file
	void setAge(int);//it just needs to give the type to the function prototype, just like the void
};