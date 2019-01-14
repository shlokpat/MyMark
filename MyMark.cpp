#include <iostream> 
#include <cmath> 


using namespace std;


int calculate (int numOfGrades, const float markArray[], const float weightArray[]) {
	
	float markSum = 0;
	float weightSum = 0;
	
	for (int i = 0; i < numOfGrades; i++) {
		markSum += markArray[i] * weightArray[i];
	}
	for (int i = 0; i < numOfGrades; i++) {
		weightSum += weightArray[i];
	}
	float grade = (markSum) / (weightSum);
	
	return grade;
}

int main (const int argc, const char*argv[]) {
	
	
	int numOfGrades; //contains number of data points

	cout << "How many assignments did you have?" << endl; // number of assignments
	cin >> numOfGrades;
	
	
	float markArray[numOfGrades];  //array that contains all the marks
	float weightArray[numOfGrades]; //array that contains all the weightings for the marks
	
	
	for (int i=0; i < numOfGrades; i++) {     //get input of all the grades and put them into the array of grades
		cout << "Enter the mark for assignment #" << i+1 << endl;
		cin >> markArray[i];
		cout << "Enter the weighting for assignment #" << i+1 << endl;
		cin >> weightArray[i];
	}
	
	cout << "Your mark is: " << calculate(numOfGrades, markArray, weightArray);
	
	
	// for (int i=0; i < numOfGrades; i++) {    //print out the array of mark values (testing purposes)
		// cout << markArray[i] << " ";
	// }
	// for (int i=0; i < numOfGrades; i++) {    //print out the array weighting values (testing purposes)
		// cout << weightArray[i] << " ";
	// }
	
}
	