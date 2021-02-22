#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <iomanip>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

class task {
	ifstream file;
	string numbers;
	string czynniki;
	
	public:
	void open();
	void write();
	void close();
	void spread();
	void two_factors();
	void number();
};
	void task::open(){
		file.open("ciagi.txt");
		{
			if(file.good()) {
				while(!input.eof())
				{
					
				}
			}
		}
	}
	void task::write(){
		file >> dec >> numbers;
		
	}
	void task::spread(){
		vector <int> factors(int number);
		{
 			vector <int> czynniki;
 			for (int i=2; i<numbers/2; i++)
   				while (numbers %i ==0)
    				{
         		numbers /=i;
         		czynniki.push_back(i);
    		}
 	}
		 return czynniki;
	}	
	void task::two_factors(){
		if(czynniki == czynniki)
			cout << numbers << "jest liczba polpierwsza. Jej czynniki to: " << czynniki << endl; 
	}
	
	void task::close(){
		file.close();
	}
	
	
int main(int argc, char** argv) {
	task p;
	p.open();
	p.write();
	p.spread();
	vector <int> czynniki = factors(16);
	p.two_factors();
	p.number();
	p.close();
	return 0;
}
