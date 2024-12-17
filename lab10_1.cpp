#include<iostream>
using namespace std;

int main(){
	int i = 1;
	char grade;
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" << i << "]: ";
		cin >> grade; 
		
		if(grade == '0') {
		    break;
		} //The loop must be terminated when grade = '0'
		
		if(grade == 'A'){ // if grade is A
			count[0] += 1;
		}else if(grade == 'B'){ // if grade is B
			count[1] += 1;
		}else if(grade == 'C'){ // if grade is B
			count[2] += 1;
		}else if(grade == 'D'){ // if grade is B
			count[3] += 1;
		}else if(grade == 'F'){ // if grade is B
			count[4] += 1;
		}else{ // grade is wrong input
			cout << "Wrong input. Please input again."<< endl; //Do something
			i--;
		} 
		i++;
	}while(grade != '0');
	
	
	cout << "In total "<< count[0]+count[1]+count[2]+count[3]+count[4]<<" students."<< endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4] ;
	//	and so on ... for grade = C, D, F	
	
	return 0;
}